#define defaultclass_cxx
#include "defaultclass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <iomanip>
#include <TChain.h>

void defaultclass:: Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TFile output("out.root", "recreate");

   Long64_t nbytes = 0, nb = 0;

   Int_t bins = 100, min_dist = 0, max_dist=4e3;
   Int_t min_distcut = 0, max_distcut = 600;
   Int_t min_pull = -5, max_pull = 5;
   Int_t min_ecal = -45, max_ecal = 60;
   Int_t min_momentum = 0, max_momentum = 5e3;
   Int_t min_energy = 0, max_energy = 1e4;


   Int_t count = 0;
   Int_t index_pi = 0, index_pr = 0, count_pi = 0, count_pr = 0;


   TH1F *h_11 = new TH1F("h_11", "Distance to muon candidate for tracks originating from  same interaction vertex; distance(mm); entries/10", bins, min_dist, max_dist);
   TH1F *h_12 = new TH1F("h_12", "Distance to muon candidate for tracks originating from  different interaction vertex; distance(mm); entries/10", bins, min_dist, max_dist);

   TH1F *h_211 = new TH1F("h_211", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_212 = new TH1F("h_212", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_213 = new TH1F("h_213", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_214 = new TH1F("h_214", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_215 = new TH1F("h_215", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_216 = new TH1F("h_216", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);
   TH1F *h_217 = new TH1F("h_217", "Distance to muon candidate from the same interaction vertex for candidate particles; distance(mm); log(entries)", bins, min_dist, max_dist);

   TH1F *h_221 = new TH1F("h_221","Distance Cut; distance(mm); log(entries/10)", bins, min_distcut, max_distcut);
   TH1F *h_222 = new TH1F("h_222","Distance Cut; distance(mm); log(entries/10)", bins, min_distcut, max_distcut);
   TH1F *h_223 = new TH1F("h_223","Distance Cut; distance(mm); log(entries/10)", bins, min_distcut, max_distcut);
  
   TH1F *h_3111 = new TH1F("h_3111", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3112 = new TH1F("h_3112", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3113 = new TH1F("h_3113", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3114 = new TH1F("h_3114", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3115 = new TH1F("h_3115", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3116 = new TH1F("h_3116", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3117 = new TH1F("h_3117", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3118 = new TH1F("h_3118", "Electron pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_3121 = new TH1F("h_3121", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3122 = new TH1F("h_3122", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3123 = new TH1F("h_3123", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3124 = new TH1F("h_3124", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3125 = new TH1F("h_3125", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3126 = new TH1F("h_3126", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3127 = new TH1F("h_3127", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3128 = new TH1F("h_3128", "Proton pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_3131 = new TH1F("h_3131", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3132 = new TH1F("h_3132", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3133 = new TH1F("h_3133", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3134 = new TH1F("h_3134", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3135 = new TH1F("h_3135", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3136 = new TH1F("h_3136", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3137 = new TH1F("h_3137", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3138 = new TH1F("h_3138", "Pion pull, positive charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_3211 = new TH1F("h_3211", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3212 = new TH1F("h_3212", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3213 = new TH1F("h_3213", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3214 = new TH1F("h_3214", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3215 = new TH1F("h_3215", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3216 = new TH1F("h_3216", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3217 = new TH1F("h_3217", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3218 = new TH1F("h_3218", "Electron pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_3221 = new TH1F("h_3221", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3222 = new TH1F("h_3222", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3223 = new TH1F("h_3223", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3224 = new TH1F("h_3224", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3225 = new TH1F("h_3225", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3226 = new TH1F("h_3226", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3227 = new TH1F("h_3227", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3228 = new TH1F("h_3228", "Proton pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_3231 = new TH1F("h_3231", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3232 = new TH1F("h_3232", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3233 = new TH1F("h_3233", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3234 = new TH1F("h_3234", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3235 = new TH1F("h_3235", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3236 = new TH1F("h_3236", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3237 = new TH1F("h_3237", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 
   TH1F *h_3238 = new TH1F("h_3238", "Pion pull, negative charge; pull; entries/10", bins, min_pull, max_pull); 

   TH1F *h_41 = new TH1F("h_41", "ecal_mipem; ecal_mipem; entries/10", bins, min_ecal, max_ecal);
   TH1F *h_42 = new TH1F("h_42", "ecal_mipem; ecal_mipem; entries/10", bins, min_ecal, max_ecal);
   
   TH1F *h_51 = new TH1F("h_51", "momentum for chosen tracks; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_52 = new TH1F("h_52", "momentum for chosen tracks; obj_mom; entries/10", bins, min_momentum, max_momentum);

   TH1F *h_611  = new TH1F("h_611",  "momentum of candidates; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6111 = new TH1F("h_6111", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6112 = new TH1F("h_6112", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6113 = new TH1F("h_6113", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6114 = new TH1F("h_6114", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6115 = new TH1F("h_6115", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6116 = new TH1F("h_6116", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6117 = new TH1F("h_6117", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6118 = new TH1F("h_6118", "momentum of pion+ candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);

   TH1F *h_612  = new TH1F("h_612",  "momentum of candidates obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6121 = new TH1F("h_6121", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6122 = new TH1F("h_6122", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6123 = new TH1F("h_6123", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6124 = new TH1F("h_6124", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6125 = new TH1F("h_6125", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6126 = new TH1F("h_6126", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6127 = new TH1F("h_6127", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6128 = new TH1F("h_6128", "momentum of proton candidates for different true particle types; obj_mom; entries/10", bins, min_momentum, max_momentum);

   TH1F *h_6211_1  = new TH1F("h_6211_1",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_2  = new TH1F("h_6211_2",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_3  = new TH1F("h_6211_3",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_4  = new TH1F("h_6211_4",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_5  = new TH1F("h_6211_5",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_6  = new TH1F("h_6211_6",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_7  = new TH1F("h_6211_7",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_8  = new TH1F("h_6211_8",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_9  = new TH1F("h_6211_9",  "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_10 = new TH1F("h_6211_10", "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_11 = new TH1F("h_6211_11", "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);
   TH1F *h_6211_12 = new TH1F("h_6211_12", "muon candidate momentum for different primary neutrino reaction types; obj_mom; entries/10",bins, min_momentum, max_momentum);

   TH1F *h_6212_1 = new TH1F("h_6212_1", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_2 = new TH1F("h_6212_2", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_3 = new TH1F("h_6212_3", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_4 = new TH1F("h_6212_4", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_5 = new TH1F("h_6212_5", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_6 = new TH1F("h_6212_6", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);
   TH1F *h_6212_7 = new TH1F("h_6212_7", "muon candidate momentum for different topologies; obj_mom; entries/10", bins, min_momentum, max_momentum);

   TH1F *h_6221_1 = new TH1F("h_6221_1", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_2 = new TH1F("h_6221_2", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_3 = new TH1F("h_6221_3", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_4 = new TH1F("h_6221_4", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_5 = new TH1F("h_6221_5", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_6 = new TH1F("h_6221_6", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_7 = new TH1F("h_6221_7", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_8 = new TH1F("h_6221_8", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_9 = new TH1F("h_6221_9", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_10 = new TH1F("h_6221_10", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_11 = new TH1F("h_6221_11", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);
   TH1F *h_6221_12 = new TH1F("h_6221_12", "Neutrino energy for different primart neutrino reaction types; nu_true_E; entries/10", bins, min_energy, max_energy);

   TH1F *h_6222_1 = new TH1F("h_6222_1", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_2 = new TH1F("h_6222_2", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_3 = new TH1F("h_6222_3", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_4 = new TH1F("h_6222_4", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_5 = new TH1F("h_6222_5", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_6 = new TH1F("h_6222_6", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);
   TH1F *h_6222_7 = new TH1F("h_6222_7", "Neutrino energies for different topologies; obj_energy; entries/10", bins, min_energy, max_energy);

   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
   		Long64_t ientry = LoadTree(jentry);
   
      	if (ientry < 0)
  	 		break;
   
      	fChain->GetEntry(jentry);

      	count = 0;
      	index_pi = 0, index_pr = 0, count_pi = 0, count_pr = 0;

    	for (Int_t particle = 0; particle < n_obj; particle++)
      	{
    		if (!(obj_tpc_nnodes[particle] > 0))	continue;
    		if (particle == obj_maintrack_index)	continue;
    		if (obj_issamevtx[particle] == 0)
    		{
    			h_12 -> Fill(obj_tomudist[particle]);
    			h_223 -> Fill(obj_tomudist[particle]);
    		}
    		if (obj_issamevtx[particle] == 1)
    		{
    			h_11 -> Fill(obj_tomudist[particle]);
    			switch(obj_pdg[particle])
    			{
    				case 11:
    					h_211 -> Fill(obj_tomudist[particle]);
    					break;
    				case -11:
    					h_212 -> Fill(obj_tomudist[particle]);
    					break;
    				case 211:
    					h_213 -> Fill(obj_tomudist[particle]);
    					h_222 -> Fill(obj_tomudist[particle]);
    					break;
    				case -211:
    					h_214 -> Fill(obj_tomudist[particle]);
    					break;
    				case 2112:
    					h_215 -> Fill(obj_tomudist[particle]);
    					break;
    				case 2212:
    					h_216 -> Fill(obj_tomudist[particle]);
    					h_221 -> Fill(obj_tomudist[particle]);
    					break;
    				default:
    					h_217 -> Fill(obj_tomudist[particle]);
    			}
    		}	
			
			
    		if (!(obj_tpc_nnodes[particle] > 17))	continue;
         	if (!(obj_posstart[particle][0] > -874.51 && obj_posstart[particle][0] < 874.51)) continue;
         	if (!(obj_posstart[particle][1] > -819.51 && obj_posstart[particle][1] < 929.51)) continue;
         	if (!(obj_posstart[particle][2] > 136.875 && obj_posstart[particle][2] < 446.955)) continue;
      		if (!(obj_tomudist[particle] <= 50))	continue;
      		count++;
      		if (obj_tpc_q[particle] == 1)
      		{
      			switch(obj_pdg[particle])
      			{
      				case 13:
      					h_3111 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3121 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3131 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -13:
      					h_3112 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3122 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3132 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 211:
      				    h_3113 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3123 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3133 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -211:
      					h_3114 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3124 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3134 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 11:
						h_3115 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3125 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3135 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -11:
      				    h_3116 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3126 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3136 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 2212:
      					h_3117 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3127 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3137 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				default:
      					h_3118 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3128 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3138 -> Fill(obj_tpc_pipidpull[particle]);
      					break;
      			}
      		}
      		if (obj_tpc_q[particle] == -1)
      		{
      			switch(obj_pdg[particle])
      			{
      				case 13:
      					h_3211 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3221 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3231 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -13:
      					h_3212 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3222 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3232 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 211:
      				    h_3213 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3223 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3233 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -211:
      					h_3214 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3224 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3234 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 11:
						h_3215 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3225 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3235 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case -11:
      				    h_3216 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3226 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3236 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				case 2212:
      					h_3217 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3227 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3237 -> Fill(obj_tpc_pipidpull[particle]);
      					break;

      				default:
      					h_3218 -> Fill(obj_tpc_elpidpull[particle]);
      					h_3228 -> Fill(obj_tpc_prpidpull[particle]);
      					h_3238 -> Fill(obj_tpc_pipidpull[particle]);
      					break;
      			}
      		}

      		if (!(obj_tpc_q[particle]  == 1))	continue;
      		if (obj_tpc_elpidpull[particle] >= -2 && obj_tpc_elpidpull[particle] <= 2)	continue;
         	if ((obj_tpc_pipidpull[particle] > -1 && obj_tpc_pipidpull[particle] < 1.5) && !(obj_tpc_prpidpull[particle] > -2 && obj_tpc_prpidpull[particle] < 3))
         	{
         		count_pi++;
         		index_pi = particle;
         	}
         	if ((obj_tpc_prpidpull[particle] > -2 && obj_tpc_prpidpull[particle] < 3) && !(obj_tpc_pipidpull[particle] > -1 && obj_tpc_pipidpull[particle] < 1.5))
         	{
         		count_pr++;
         		index_pr = particle;
         	}

      	}

      	if (!(count_pi == 1 && count_pr < 2 && count < 3))	continue;
      	switch(reaction)
      	{
      		case 0:
      			h_6211_1 -> Fill(selmu_mom[0]);
      			h_6221_1 -> Fill(nu_trueE);
      			break;
      		case 9:
      		    h_6211_2 -> Fill(selmu_mom[0]);
      			h_6221_2 -> Fill(nu_trueE);
      			break;
      		case 1:
      		  	h_6211_3 -> Fill(selmu_mom[0]);
      			h_6221_3 -> Fill(nu_trueE);
      			break;
      		case 2:
      		    h_6211_4 -> Fill(selmu_mom[0]);
      			h_6221_4 -> Fill(nu_trueE);
      			break;
      		case 3:
      		    h_6211_5 -> Fill(selmu_mom[0]);
      			h_6221_5 -> Fill(nu_trueE);
      			break;
      		case 4:
      		    h_6211_6 -> Fill(selmu_mom[0]);
      			h_6221_6 -> Fill(nu_trueE);
      			break;    		
      		case 5:
      		    h_6211_7 -> Fill(selmu_mom[0]);
      			h_6221_7 -> Fill(nu_trueE);
      			break;      		
      		case 6:
      		    h_6211_8 -> Fill(selmu_mom[0]);
      			h_6221_8 -> Fill(nu_trueE);
      			break;      		
      		case 999:
      		    h_6211_9 -> Fill(selmu_mom[0]);
      			h_6221_9 -> Fill(nu_trueE);
      			break;     		
      		case 7:
      		    h_6211_10 -> Fill(selmu_mom[0]);
      			h_6221_10 -> Fill(nu_trueE);
     			break; 		
      		case -1:
      		    h_6211_11 -> Fill(selmu_mom[0]);
      			h_6221_11 -> Fill(nu_trueE);
      			break;
      		case 777:
      		    h_6211_12 -> Fill(selmu_mom[0]);
      			h_6221_12 -> Fill(nu_trueE);
      			break;
      	}
      	switch(topology)
      	{
      		case 0:
      			h_6212_1 -> Fill(selmu_mom[0]);
      			h_6222_1 -> Fill(nu_trueE);
      			break;
      		case 1:
				h_6212_2 -> Fill(selmu_mom[0]);
      			h_6222_2 -> Fill(nu_trueE);
      			break;
      		case 2:
				h_6212_3 -> Fill(selmu_mom[0]);
      			h_6222_3 -> Fill(nu_trueE);
      			break;
      		case 3:
				h_6212_4 -> Fill(selmu_mom[0]);
      			h_6222_4 -> Fill(nu_trueE);
      			break;
      		case 7:
				h_6212_5 -> Fill(selmu_mom[0]);
      			h_6222_5 -> Fill(nu_trueE);
      			break;
      		case -1:
				h_6212_6 -> Fill(selmu_mom[0]);
      			h_6222_6 -> Fill(nu_trueE);
      			break;
      		case 777:
				h_6212_7 -> Fill(selmu_mom[0]);
      			h_6222_7 -> Fill(nu_trueE);
      			break;
      	}
      	h_611 -> Fill(obj_mom[index_pi]);
      	switch(obj_pdg[index_pi])
      	{
      		case 13:	
      			h_6111 -> Fill(obj_mom[index_pi]);
      			break;
      		case -13:
      		    h_6112 -> Fill(obj_mom[index_pi]);
      			break;
      		case 211:
      			h_6113 -> Fill(obj_mom[index_pi]);
      			break;
      		case -211:
      			h_6114 -> Fill(obj_mom[index_pi]);
      			break;
      		case 11:
	 			h_6115 -> Fill(obj_mom[index_pi]);
      			break;
      		case -11:
				h_6116 -> Fill(obj_mom[index_pi]);
      			break;
      		case 2212:
				h_6117 -> Fill(obj_mom[index_pi]);
      			break;
      		default:
				h_6118 -> Fill(obj_mom[index_pi]);
      			break;
      	}
      	if (!(count_pr == 1))	continue;
      	h_612 -> Fill(obj_mom[index_pr]);
      	switch(obj_pdg[index_pr])
      	{
      		case 13:	
      			h_6121 -> Fill(obj_mom[index_pr]);
      			break;
      		case -13:
      		    h_6122 -> Fill(obj_mom[index_pr]);
      			break;
      		case 211:
      			h_6123 -> Fill(obj_mom[index_pr]);
      			break;
      		case -211:
      			h_6124 -> Fill(obj_mom[index_pr]);
      			break;
      		case 11:
	 			h_6125 -> Fill(obj_mom[index_pr]);
      			break;
      		case -11:
				h_6126 -> Fill(obj_mom[index_pr]);
      			break;
      		case 2212:
				h_6127 -> Fill(obj_mom[index_pr]);
      			break;
      		default:
				h_6128 -> Fill(obj_mom[index_pr]);
      			break;
      	}
    }

output.Write();
output.Close();
}

int main(int argc, char** argv)
{
   //std:: cout << "Output: " << argv[1] << "\n";

   TChain *chain = new TChain("default");

   //std::cout << "Input: \n" << "\t" << argv[1] << "\n";
   chain -> Add(argv[1]);
   
   defaultclass t(chain);
   t.Loop();
   
   std::cout << "[ DONE ]\n\n";
}
