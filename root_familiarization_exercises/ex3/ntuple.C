#define ntuple_cxx
#include "ntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <iomanip>
#include <TChain.h>
#include <TLorentzVector.h>
#include <vector>

void ntuple::Loop()
{
	if (fChain == 0)
		return;

	Long64_t nentries = fChain -> GetEntriesFast();

	TFile output(this -> outputFileName.data(), "recreate");

	TH1F h_mu_like("h_mu_like", "", 100, 0, 1);

	TH1F h_mu_like_muon("h_mu_like_muon", "", 100, 0, 1);
	TH1F h_mu_like_antimuon("h_mu_like_antimuon", "", 100, 0, 1);
	TH1F h_mu_like_notmuon("h_mu_like_notmuon", "", 100, 0, 1);
	TH1F h_mu_like_muon_pair("h_mu_like_muon_pair", "", 100, 0, 1);

	TH1F h_invariant_mass("h_invariant_mass", "invariant mass no cut", 100, 0, 50);
	TH1F h_invariant_mass_cut1("h_invariant_mass_cut1", "invariant mass after pT cut", 100, 0., 50.);
    TH1F h_m_cut2("h_m_cut2", "invariant mass after pT and z cut", 100, 0., 50.);

	TH1F h_pT_muon("h_pT_muon", "muon's tranvese momentum", 100, 0, 50);
	TH1F h_pT_antimuon("h_pT_antimuon", "antimuon's transverse momentum", 100, 0, 50);

	TH2F h_phi_muon_vs_phi_antimuon("h_phi_muon_vs_phi_antimuon", "correlation between angular momentum of muons", 30, -3., 3., 30, -3., 3.);
	TH1F h_z("h_z", "z-distance of muon vertex", 100, -0.15, 0.15);


	for (Long64_t jentry = 0; jentry < nentries; jentry++)
	{

		Long64_t ientry = LoadTree(jentry);

		if (ientry < 0)
			break;

		fChain -> GetEntry(jentry);

		int nparticles = id -> size();

		TLorentzVector temp;	//	initialised by (0, 0, 0, 0)
		TLorentzVector muon;
		TLorentzVector antimuon;
		TLorentzVector muon_pair;

		int nparticle_muon = -1;
		int nparticle_antimuon = -1;

		for (int particle = 0; particle < nparticles; particle++)
		{
			h_mu_like.Fill(mu_like -> at(particle));

			if (id -> at(particle) == 13)
				h_mu_like_muon.Fill(mu_like -> at(particle));

			if (id -> at(particle) == -13)
				h_mu_like_antimuon.Fill(mu_like -> at(particle));

			if (id -> at(particle) == 13 || id -> at(particle) == -13)
				h_mu_like_muon_pair.Fill(mu_like -> at(particle));

			if (id -> at(particle) != 13 && id -> at(particle) != -13)
				h_mu_like_notmuon.Fill(mu_like -> at(particle));
		
			//	From the plot, a valid cut would be for mu_like > 0.6

			if (mu_like -> at(particle) > 0.6)
			{
				temp.SetPxPyPzE(px -> at(particle), py -> at(particle), pz -> at(particle), e -> at(particle));

				if (charge -> at(particle) == -1)
				{
					if (temp.Pt() > muon.Pt())
					{
						muon = temp;
						nparticle_muon = particle;
					}
				}

				else if (charge -> at(particle) == +1)
				{
					if (temp.Pt() > antimuon.Pt())
					{
						antimuon = temp;
						nparticle_antimuon = particle;
					}
				}
			}
		}

		muon_pair = muon + antimuon;
		h_invariant_mass.Fill(muon_pair.M());

		if ((nparticle_muon == -1) || (nparticle_muon == -1))	
			continue;

		h_pT_muon.Fill(muon.Pt());
		h_pT_antimuon.Fill(antimuon.Pt());

		if (nparticle_muon!= -1 && nparticle_antimuon != -1) 
			h_phi_muon_vs_phi_antimuon.Fill(muon.Phi(), antimuon.Phi());

		if ((muon.Pt() > 4) && (antimuon.Pt() > 4) && (muon.Pt() < 14) && (antimuon.Pt() < 15))
		{
			h_invariant_mass_cut1.Fill(muon_pair.M());
			h_z.Fill(z->at(nparticle_antimuon) - z->at(nparticle_muon));

			if (fabs(z->at(nparticle_antimuon) - z->at(nparticle_muon)) < 0.03) 
      		{
       			h_m_cut2.Fill(muon_pair.M());
        		//h_phi_diff.Fill(fabs(antimuon.Phi() - muon.Phi()));
        	}
		}
	}



	output.Write();
	output.Close();
}



int main(int argc, char** argv)
{
	if (argc < 3)
	{
		std::cout << "Usage\n\t" << argv[0] << " output.root input1.root [input2.root input3.root ...]\n\n ";
		return 1;
	}

	std::cout << "Output: " << argv[1] <<"\n";

	TChain *chain = new TChain("ntuple");
	
	std::cout << "Inputs:\n";

	for (int i = 2; i < argc; i++)
	{
		std::cout << "\t" << argv[i] << "\n";
		chain -> Add(argv[i]);
	}

	ntuple t(chain);
	t.outputFileName = argv[1];
	t.Loop();

	std::cout << "[ DONE ]\n\n";
}