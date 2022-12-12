#define ntuple_cxx
#include "ntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <iomanip>
#include <TChain.h>
#include "TLorentzVector.h"
#include <vector>

void ntuple::Loop()
{
  if (fChain == 0)
    return;

  Long64_t nentries = fChain ->GetEntriesFast();

  TFile output(this->outputFileName.data(), "recreate");
  
  TH1F h_mu_like("h_mu_like", "mu_like(normalised)", 100, 0, 1);

  TH1F h_mu_like_muon("h_mu_like_muon", "mu_like (muon)", 100, 0, 1);
  //TH1F h_mu_like_antimuon("h_mu_like_antimuon","", 100, 0, 1);
  TH1F h_mu_like_notmuon("h_mu_like_notmuon", "", 100, 0, 1);


  for (Long64_t jentry = 0; jentry < nentries; jentry++)
  {
    Long64_t ientry = LoadTree(jentry);

    if (ientry < 0)
      break;

    fChain->GetEntry(jentry);

    int nparticles = id->size();

    for (int particle = 0; particle < nparticles; particle++)
    {
      h_mu_like.Fill(mu_like->at(particle));

      if ((id->at(particle) == 13) || (id->at(particle) == -13))
        h_mu_like_muon.Fill(mu_like->at(particle));
      //if (id->at(particle) == -13 )
      //  h_mu_like_antimuon.Fill(mu_like->at(particle));
      if (id->at(particle) != 13 && id->at(particle) != -13)
        h_mu_like_notmuon.Fill(mu_like->at(particle));
    }
  }

  output.Write();
  output.Close();
}

/*

  TFile output(this->outputFileName.data(), "recreate");
  TH1F h_x("h_x", "", 100, -1e-4, 1e-4);
  TH1F h_x_electron("h_x_electron", "", 100, -1e-4, 1e-4);
  TH1F h_x_positron("h_x_positron", "", 100, -1e-4, 1e-4);
  
  TH2F h_x_y("h_x_y", "", 100, -1e-4, 1e-4, 100, -1e-4, 1e-4);

  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    fChain->GetEntry(jentry);
    
    int nparticles = id->size();
    for(int particle=0; particle < nparticles; particle++){
      h_x.Fill(x->at(particle));
      h_x_y.Fill(x->at(particle), y->at(particle));
      if (id->at(particle) ==  13) h_x_electron.Fill(x->at(particle));
      if (id->at(particle) == -13) h_x_positron.Fill(x->at(particle));
    }

*/

int main(int argc, char** argv)
{
  if(argc < 3){
    std::cout << "Usage:\n\t" << argv[0] << " output.root input1.root [input2.root input3.root ...]\n\n";
    return 1;
  }

  std::cout << "Output: " << argv[1] << "\n";
  // TChain is like a TTree, but can work across several root files
  TChain * chain = new TChain("ntuple"); 
  std::cout << "Inputs:\n";
  for(int i=2; i<argc; i++){
    std::cout << "\t" << argv[i] << "\n";
    chain->Add(argv[i]);
  }

  ntuple t(chain);
  t.outputFileName = argv[1];
  t.Loop();

  std::cout << "[ DONE ]\n\n";
}



/*void ntuple::Loop()
{
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  TFile output(this->outputFileName.data(), "recreate");
  TH1F h_x("h_x", "", 100, -1e-4, 1e-4);
  TH1F h_x_electron("h_x_electron", "", 100, -1e-4, 1e-4);
  TH1F h_x_positron("h_x_positron", "", 100, -1e-4, 1e-4);
  
  TH2F h_x_y("h_x_y", "", 100, -1e-4, 1e-4, 100, -1e-4, 1e-4);

  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    fChain->GetEntry(jentry);
    
    int nparticles = id->size();
    for(int particle=0; particle < nparticles; particle++){
      h_x.Fill(x->at(particle));
      h_x_y.Fill(x->at(particle), y->at(particle));
      if (id->at(particle) ==  13) h_x_electron.Fill(x->at(particle));
      if (id->at(particle) == -13) h_x_positron.Fill(x->at(particle));
    }
  }
  output.Write();
  output.Close();
}

int main(int argc, char** argv){

  if(argc < 3){
    std::cout << "Usage:\n\t" << argv[0] << " output.root input1.root [input2.root input3.root ...]\n\n";
    return 1;
  }

  std::cout << "Output: " << argv[1] << "\n";
  // TChain is like a TTree, but can work across several root files
  TChain * chain = new TChain("ntuple"); 
  std::cout << "Inputs:\n";
  for(int i=2; i<argc; i++){
    std::cout << "\t" << argv[i] << "\n";
    chain->Add(argv[i]);
  }

  ntuple t(chain);
  t.outputFileName = argv[1];
  t.Loop();

  std::cout << "[ DONE ]\n\n";

}
*/