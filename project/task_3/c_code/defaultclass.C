#define defaultclass_cxx
#include "defaultclass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <iomanip>
#include <TChain.h>
#include <TProfile.h>


void defaultclass:: Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TFile output("out.root", "recreate");

   Long64_t nbytes = 0, nb = 0;

   Int_t bins = 100;
   Int_t min_momentum = 0, max_momentum = 2e3;
   Int_t min_energy = 0, max_energy = 10e3;
   Int_t min_purity = 0, max_purity = 1;
   Int_t min_costheta = -1, max_costheta = 1;
   Int_t count = 0;
   Int_t count_pr = 0, count_pi = 0;
   Int_t index_pr = 0, index_pi = 0;


   TH1F *h_1111 = new TH1F("h_1111", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1112 = new TH1F("h_1112", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1113 = new TH1F("h_1113", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1114 = new TH1F("h_1114", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1115 = new TH1F("h_1115", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1116 = new TH1F("h_1116", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1117 = new TH1F("h_1117", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1118 = new TH1F("h_1118", "pi+ candidate all samples true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_1121 = new TH1F("h_1121", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1122 = new TH1F("h_1122", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1123 = new TH1F("h_1123", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1124 = new TH1F("h_1124", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1125 = new TH1F("h_1125", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1126 = new TH1F("h_1126", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1127 = new TH1F("h_1127", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1128 = new TH1F("h_1128", "pi+ candidate for 1 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_1131 = new TH1F("h_1131", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1132 = new TH1F("h_1132", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1133 = new TH1F("h_1133", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1134 = new TH1F("h_1134", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1135 = new TH1F("h_1135", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1136 = new TH1F("h_1136", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1137 = new TH1F("h_1137", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1138 = new TH1F("h_1138", "pi+ candidate for 0 proton sample true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_1211 = new TH1F("h_1211", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1212 = new TH1F("h_1212", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1213 = new TH1F("h_1213", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1214 = new TH1F("h_1214", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1215 = new TH1F("h_1215", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1216 = new TH1F("h_1216", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1217 = new TH1F("h_1217", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_1218 = new TH1F("h_1218", "proton candidate for 1p sample true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_211 = new TH1F("h_211", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_212 = new TH1F("h_212", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_213 = new TH1F("h_213", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_214 = new TH1F("h_214", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_215 = new TH1F("h_215", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_216 = new TH1F("h_216", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_217 = new TH1F("h_217", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_218 = new TH1F("h_218", "muon candidate momentum fr 1p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_221 = new TH1F("h_221", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_222 = new TH1F("h_222", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_223 = new TH1F("h_223", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_224 = new TH1F("h_224", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_225 = new TH1F("h_225", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_226 = new TH1F("h_226", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_227 = new TH1F("h_227", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_228 = new TH1F("h_228", "muon candidate momentum fr 0p samples for true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_231 = new TH1F("h_231", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_232 = new TH1F("h_232", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_233 = new TH1F("h_233", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_234 = new TH1F("h_234", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_235 = new TH1F("h_235", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_236 = new TH1F("h_236", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_237 = new TH1F("h_237", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_238 = new TH1F("h_238", "muon candidate momentum fr all samples for true particles; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_311_1  = new TH1F("h_311_1", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_2  = new TH1F("h_311_2", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_3  = new TH1F("h_311_3", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_4  = new TH1F("h_311_4", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_5  = new TH1F("h_311_5", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_6  = new TH1F("h_311_6", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_7  = new TH1F("h_311_7", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_8  = new TH1F("h_311_8", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_9  = new TH1F("h_311_9", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_10 = new TH1F("h_311_10", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_11 = new TH1F("h_311_11", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_311_12 = new TH1F("h_311_12", "muon candidate momentum for diffreent raction types; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_3121 = new TH1F("h_3121", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3122 = new TH1F("h_3122", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3123 = new TH1F("h_3123", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3124 = new TH1F("h_3124", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3125 = new TH1F("h_3125", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3126 = new TH1F("h_3126", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);
   TH1F *h_3127 = new TH1F("h_3127", "muon candidate momentum for diffreent topologies; momentum; entries", bins, min_momentum, max_momentum);

   TH1F *h_321_1  = new TH1F("h_321_1", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_2  = new TH1F("h_321_2", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_3  = new TH1F("h_321_3", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_4  = new TH1F("h_321_4", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_5  = new TH1F("h_321_5", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_6  = new TH1F("h_321_6", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_7  = new TH1F("h_321_7", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_8  = new TH1F("h_321_8", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_9  = new TH1F("h_321_9", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_10 = new TH1F("h_321_10", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_11 = new TH1F("h_321_11", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);
   TH1F *h_321_12 = new TH1F("h_321_12", "neurino energy for diffreent reaction types; energy; entries", bins, min_energy, max_energy);

   TH1F *h_3221 = new TH1F("h_3221", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3222 = new TH1F("h_3222", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3223 = new TH1F("h_3223", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3224 = new TH1F("h_3224", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3225 = new TH1F("h_3225", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3226 = new TH1F("h_3226", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);
   TH1F *h_3227 = new TH1F("h_3227", "neurino energy for diffreent topologies; energy; entries", bins, min_energy, max_energy);

   TH1F *h_4_1 = new TH1F("h_4_1", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_2 = new TH1F("h_4_2", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_3 = new TH1F("h_4_3", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_4 = new TH1F("h_4_4", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_5 = new TH1F("h_4_5", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_6 = new TH1F("h_4_6", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_7 = new TH1F("h_4_7", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_8 = new TH1F("h_4_8", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_9 = new TH1F("h_4_9", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_10 = new TH1F("h_4_10", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_11 = new TH1F("h_4_11", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);
   TH1F *h_4_12 = new TH1F("h_4_12", "neutrino energy for topology 1; enerygy; entries", bins, min_energy, max_energy);

   TH1F *h_511 = new TH1F("h_511","", bins, min_momentum, max_momentum);
   TH1F *h_512 = new TH1F("h_512", "", bins, min_momentum, max_momentum);
   TH1F *h_513 = new TH1F("h_513", "", bins, min_momentum, max_momentum);

   TH1F *h_521 = new TH1F("h_521","", bins, min_momentum, max_momentum);
   TH1F *h_522 = new TH1F("h_522", "", bins, min_momentum, max_momentum);
   TH1F *h_523 = new TH1F("h_523", "", bins, min_momentum, max_momentum);  

   TH1F *h_531 = new TH1F("h_531","", bins, min_momentum, max_momentum);
   TH1F *h_532 = new TH1F("h_532", "", bins, min_momentum, max_momentum);
   TH1F *h_533 = new TH1F("h_533", "", bins, min_momentum, max_momentum);  

   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
      count = 0;
      count_pi = 0;
      count_pr = 0;

   	Long64_t ientry = LoadTree(jentry);
   
      if (ientry < 0)
  	 	break;
   
      fChain->GetEntry(jentry);

    	for (Int_t particle = 0; particle < n_obj; particle++)
      	{
            if (!(obj_tpc_nnodes[particle] > 17))  continue;
            if (!(obj_posstart[particle][0] > -874.51 && obj_posstart[particle][0] < 874.51)) continue;
            if (!(obj_posstart[particle][1] > -819.51 && obj_posstart[particle][1] < 929.51)) continue;
            if (!(obj_posstart[particle][2] > 136.875 && obj_posstart[particle][2] < 446.955)) continue;
            if (!(obj_tomudist[particle] <= 50))   continue;
            if (obj_issamevtx[particle] == 0)   continue;
            count++;
            if (!(obj_tpc_q[particle]  == 1))   continue;
            if (obj_tpc_elpidpull[particle] >= -2 && obj_tpc_elpidpull[particle] <= 2) continue;
            if ((obj_tpc_pipidpull[particle] >= -1 && obj_tpc_pipidpull[particle] <= 1.5) && !(obj_tpc_prpidpull[particle] >= -2 && obj_tpc_prpidpull[particle] <= 3))
            {
               count_pi++;
               index_pi = particle;
            }
            if ((obj_tpc_prpidpull[particle] >= -2 && obj_tpc_prpidpull[particle] <= 3) && !(obj_tpc_pipidpull[particle] >= -1 && obj_tpc_pipidpull[particle] <= 1.5))
            {
               count_pr++;
               index_pr = particle;
            }
         } 
         if (!(count_pi == 1 && count_pr < 2 && count < 3)) continue;
            switch(reaction)
            {
               case 0:
                  h_311_1 -> Fill(selmu_mom[0]);
                  h_321_1 -> Fill(nu_trueE);
                  break;
               case 9:
                  h_311_2 -> Fill(selmu_mom[0]);
                  h_321_2 -> Fill(nu_trueE);
                  break;
               case 1:
                  h_311_3 -> Fill(selmu_mom[0]);
                  h_321_3 -> Fill(nu_trueE);
                  break;
               case 2:
                  h_311_4 -> Fill(selmu_mom[0]);
                  h_321_4 -> Fill(nu_trueE);
                  break;
               case 3:
                  h_311_5 -> Fill(selmu_mom[0]);
                  h_321_5 -> Fill(nu_trueE);
                  break;
               case 4:
                  h_311_6 -> Fill(selmu_mom[0]);
                  h_321_6 -> Fill(nu_trueE);
                  break;
               case 5:
                  h_311_7 -> Fill(selmu_mom[0]);
                  h_321_7 -> Fill(nu_trueE);
                  break;
               case 6:
                  h_311_8 -> Fill(selmu_mom[0]);
                  h_321_8 -> Fill(nu_trueE);
                  break;
               case 999:
                  h_311_9 -> Fill(selmu_mom[0]);
                  h_321_9 -> Fill(nu_trueE);
                  break;
               case 7:
                  h_311_10 -> Fill(selmu_mom[0]);
                  h_321_10 -> Fill(nu_trueE);
                  break;
               case -1:
                  h_311_11 -> Fill(selmu_mom[0]);
                  h_321_11 -> Fill(nu_trueE);
                  break;
               case 777:
                  h_311_12 -> Fill(selmu_mom[0]);
                  h_321_12 -> Fill(nu_trueE);
                  break;
            }
            switch(topology)
            {
               case 0:
                  h_3121 -> Fill(selmu_mom[0]);
                  h_3221 -> Fill(nu_trueE);
                  break;
               case 1:
                  h_3122 -> Fill(selmu_mom[0]);
                  h_3222 -> Fill(nu_trueE);
                  /*h_4_1 -> Fill(nu_trueE);
                  h_4_2 -> Fill(nu_trueE);
                  h_4_3 -> Fill(nu_trueE);
                  h_4_4 -> Fill(nu_trueE);
                  h_4_5 -> Fill(nu_trueE);
                  h_4_6 -> Fill(nu_trueE);
                  h_4_7 -> Fill(nu_trueE);
                  h_4_8 -> Fill(nu_trueE);
                  h_4_9 -> Fill(nu_trueE);
                  h_4_10 -> Fill(nu_trueE);
                  h_4_11 -> Fill(nu_trueE);
                  h_4_12 -> Fill(nu_trueE);*/
                  break;
               case 2:
                  h_3123 -> Fill(selmu_mom[0]);
                  h_3223 -> Fill(nu_trueE);
                  break;
               case 3:
                  h_3124 -> Fill(selmu_mom[0]);
                  h_3224 -> Fill(nu_trueE);
                  break;
               case 7:
                  h_3125 -> Fill(selmu_mom[0]);
                  h_3225 -> Fill(nu_trueE);
                  break;
               case -1:
                  h_3126 -> Fill(selmu_mom[0]);
                  h_3226 -> Fill(nu_trueE);
                  break;
               case 777:
                  h_3127 -> Fill(selmu_mom[0]);
                  h_3227 -> Fill(nu_trueE);
                  break;
            }
            h_512 -> Fill(selmu_mom[0]);
            switch(obj_maintrack_index)
            {
               case -13:
                  h_511 -> Fill(selmu_mom[0]);

            }
            h_532 -> Fill(obj_mom[index_pi]);
            switch(obj_pdg[index_pi])
            {
               case 13:
                  h_1113 -> Fill(obj_mom[index_pi]);
                  h_233 -> Fill(selmu_mom[0]);
                  break;
               case -13:
                  h_1114 -> Fill(obj_mom[index_pi]);
                  h_234 -> Fill(selmu_mom[0]);
                  break;
               case 211:
                  h_1111 -> Fill(obj_mom[index_pi]);
                  h_231 -> Fill(selmu_mom[0]);
                  h_531 -> Fill(obj_mom[index_pi]);
                  break;
               case -211:
                  h_1112 -> Fill(obj_mom[index_pi]);
                  h_232 -> Fill(selmu_mom[0]);
                  break;
               case 11:
                  h_1116 -> Fill(obj_mom[index_pi]);
                  h_236 -> Fill(selmu_mom[0]);
                  break;
               case -11:
                  h_1117 -> Fill(obj_mom[index_pi]);
                  h_237 -> Fill(selmu_mom[0]);
                  break;
               case 2212:
                  h_1115 -> Fill(obj_mom[index_pi]);
                  h_235 -> Fill(selmu_mom[0]);
                  break;
               default:
                  h_1118 -> Fill(obj_mom[index_pi]);
                  h_238 -> Fill(selmu_mom[0]);
                  break;
            }
            h_522 -> Fill(obj_mom[index_pr]);
            switch(obj_pdg[index_pr])
            {
               case 2212:
                  h_521 -> Fill(obj_mom[index_pr]);
                  break;
            }
         if (count_pi == 1 && count_pr == 1)
            switch(obj_pdg[index_pi])
            {
               case 13:
                  h_1123 -> Fill(obj_mom[index_pi]);
                  h_1213 -> Fill(obj_mom[index_pr]);
                  h_213 -> Fill(selmu_mom[0]); 
                  break;
               case -13:
                  h_1124 -> Fill(obj_mom[index_pi]);
                  h_1214 -> Fill(obj_mom[index_pr]);
                  h_214 -> Fill(selmu_mom[0]); 
                  break;
               case 211:
                  h_1121 -> Fill(obj_mom[index_pi]);
                  h_1211 -> Fill(obj_mom[index_pr]);
                  h_211 -> Fill(selmu_mom[0]); 
                  break;
               case -211:
                  h_1122 -> Fill(obj_mom[index_pi]);
                  h_1212 -> Fill(obj_mom[index_pr]);
                  h_212 -> Fill(selmu_mom[0]); 
                  break;
               case 11:
                  h_1126 -> Fill(obj_mom[index_pi]);
                  h_1216 -> Fill(obj_mom[index_pr]);
                  h_216 -> Fill(selmu_mom[0]); 
                  break;
               case -11:
                  h_1127 -> Fill(obj_mom[index_pi]);
                  h_1217 -> Fill(obj_mom[index_pr]);
                  h_217 -> Fill(selmu_mom[0]); 
                  break;
               case 2212:
                  h_1125 -> Fill(obj_mom[index_pi]);
                  h_1215 -> Fill(obj_mom[index_pr]);
                  h_215 -> Fill(selmu_mom[0]); 
                  break;
               default:
                  h_1128 -> Fill(obj_mom[index_pi]);
                  h_1218 -> Fill(obj_mom[index_pr]);
                  h_218 -> Fill(selmu_mom[0]); 
                  break;
            }
         else if(count_pi == 1 && count_pr == 0)
            switch(obj_pdg[index_pi])
            {
               case 13:
                  h_1133 -> Fill(obj_mom[index_pi]);
                  h_223 -> Fill(selmu_mom[0]);
                  break;
               case -13:
                  h_1134 -> Fill(obj_mom[index_pi]);
                  h_224 -> Fill(selmu_mom[0]);
                  break;
               case 211:
                  h_1131 -> Fill(obj_mom[index_pi]);
                  h_221 -> Fill(selmu_mom[0]);
                  break;
               case -211:
                  h_1132 -> Fill(obj_mom[index_pi]);
                  h_222 -> Fill(selmu_mom[0]);
                  break;
               case 11:
                  h_1136 -> Fill(obj_mom[index_pi]);
                  h_226 -> Fill(selmu_mom[0]);
                  break;
               case -11:
                  h_1137 -> Fill(obj_mom[index_pi]);
                  h_227 -> Fill(selmu_mom[0]);
                  break;
               case 2212:
                  h_1135 -> Fill(obj_mom[index_pi]);
                  h_225 -> Fill(selmu_mom[0]);
                  break;
               default:
                  h_1138 -> Fill(obj_mom[index_pi]);
                  h_228 -> Fill(selmu_mom[0]);
                  break;
            }
   }

            h_513 -> Divide(h_511, h_512);
            h_523 -> Divide(h_521, h_522);
            h_533 -> Divide(h_531, h_532);
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



/*
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      fChain->GetEntry(jentry); 

      // count variable for all tracks inside FGD1
      int count = 0;
      // count variables for selected pion and proton tracks and i variable to save the array index
      int i_pi = 0, i_pr = 0, count_pi = 0, count_pr = 0;
      // loop on the number of reconstructed tracks for each event
      for (int i=0; i<n_obj; i++) {
         // skipping muon candidate track
         if (obj_maintrack_index == i) continue;   
         // inside FGD1 FV cuts
         if (!(obj_tpc_nnodes[i] > 17)) continue;
         if (!(obj_posstart[i][0] > -874.51 && obj_posstart[i][0] < 874.51)) continue;
         if (!(obj_posstart[i][1] > -819.51 && obj_posstart[i][1] < 929.51)) continue;
         if (!(obj_posstart[i][2] > 136.875 && obj_posstart[i][2] < 446.955)) continue;
         // counting tracks inside FGD1 FV before distance cut
         count++;
         // distance cut to check if track is coming from the same vertice as muon
         if (!(obj_tomudist[i] < 50)) continue;
         // just accept positive charged tracks
         if (obj_tpc_q[i] != 1) continue;
         // cut to remove positrons and electrons
         if (obj_tpc_elpidpull[i] > -2 && obj_tpc_elpidpull[i] < 2) continue;
         // pion+ track selection
         if ((obj_tpc_pipidpull[i] > -1 && obj_tpc_pipidpull[i] < 1.5) && !(obj_tpc_prpidpull[i] > -2 && obj_tpc_prpidpull[i] < 3)) {
            count_pi++;
            i_pi = i;
         }
         // proton track selection
         if ((obj_tpc_prpidpull[i] > -2 && obj_tpc_prpidpull[i] < 3) && !(obj_tpc_pipidpull[i] > -1 && obj_tpc_pipidpull[i] < 1.5)) {
            count_pr++;
            i_pr = i; 
         }
      }
      // filling auxiliar histogram for efficiency of CC1pi+ before selecting CC1pi+ (selected or not selected signals)
      if (topology == 1 && infv == 1) h_nu_trueE.Fill(nu_trueE);
      // Accept just events with numuCC1pi+ interactions (1 pion+ and 0/1 proton)
      // check if there are 1 pion+ and 0 or 1 proton and just these 2 tracks inside FGD1 FV 
      if (!(count_pi == 1 && count_pr < 2 && count < 3)) continue;
      // 4-momentum of all particles (if proton isnt needed it just wont be used)
      int i_mu = obj_maintrack_index;
      TLorentzVector mu_4mom, pi_4mom, pr_4mom;
      double mass_mu = 105.6583745, mass_pi = 139.57018, mass_pr = 938.27208816; 
      mu_4mom.SetXYZM(obj_mom[i_mu]*obj_dir[i_mu][0],obj_mom[i_mu]*obj_dir[i_mu][1],obj_mom[i_mu]*obj_dir[i_mu][2],mass_mu);
      pi_4mom.SetXYZM(obj_mom[i_pi]*obj_dir[i_pi][0],obj_mom[i_pi]*obj_dir[i_pi][1],obj_mom[i_pi]*obj_dir[i_pi][2],mass_pi);
      pr_4mom.SetXYZM(obj_mom[i_pr]*obj_dir[i_pr][0],obj_mom[i_pr]*obj_dir[i_pr][1],obj_mom[i_pr]*obj_dir[i_pr][2],mass_pr);
      // sample with 1 proton (1p)
      if (count_pr == 1) {
         // comparing pion+ candidate momentum with true particles
         switch (obj_pdg[i_pi]) {
         case 13:
            h_mom_pion_all_real_muon.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_muon.Fill(obj_mom[i_pi]);
            break;
         case -13:
            h_mom_pion_all_real_antimuon.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_antimuon.Fill(obj_mom[i_pi]);
            break;
         case 211:
            h_mom_pion_all_real_pion_pos.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_pion_pos.Fill(obj_mom[i_pi]);
            break;
         case -211:
            h_mom_pion_all_real_pion_neg.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_pion_neg.Fill(obj_mom[i_pi]);
            break;
         case 11:
            h_mom_pion_all_real_electron.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_electron.Fill(obj_mom[i_pi]);
            break;
         case -11:
            h_mom_pion_all_real_positron.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_positron.Fill(obj_mom[i_pi]);
            break;
         case 2212:
            h_mom_pion_all_real_proton.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_proton.Fill(obj_mom[i_pi]);
            break;
         default:
            h_mom_pion_all_real_others.Fill(obj_mom[i_pi]);
            h_mom_pion_1p_real_others.Fill(obj_mom[i_pi]);
            break;
         } 
         // comparing proton candidade momentum with true particles
         switch (obj_pdg[i_pr]) {
         case 13:
            h_mom_proton_1p_real_muon.Fill(obj_mom[i_pr]);
            break;
         case -13:
            h_mom_proton_1p_real_antimuon.Fill(obj_mom[i_pr]);
            break;
         case 211:
            h_mom_proton_1p_real_pion_pos.Fill(obj_mom[i_pr]);
            break;
         case -211:
            h_mom_proton_1p_real_pion_neg.Fill(obj_mom[i_pr]);
            break;
         case 11:
            h_mom_proton_1p_real_electron.Fill(obj_mom[i_pr]);
            break;
         case -11:
            h_mom_proton_1p_real_positron.Fill(obj_mom[i_pr]);
            break;
         case 2212:
            h_mom_proton_1p_real_proton.Fill(obj_mom[i_pr]);
            break;
         default:
            h_mom_proton_1p_real_others.Fill(obj_mom[i_pr]);
            break;
         }    
         // comparing selmu candidate with true particles
         switch (obj_pdg[obj_maintrack_index]) {
         case 13:
            h_selmu_mom_all_real_muon.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_muon.Fill(selmu_mom[0]);
            break;
         case -13:
            h_selmu_mom_all_real_antimuon.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_antimuon.Fill(selmu_mom[0]);
            break;
         case 211:
            h_selmu_mom_all_real_pion_pos.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_pion_pos.Fill(selmu_mom[0]);
            break;
         case -211:
            h_selmu_mom_all_real_pion_neg.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_pion_neg.Fill(selmu_mom[0]);
            break;
         case 11:
            h_selmu_mom_all_real_electron.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_electron.Fill(selmu_mom[0]);
            break;
         case -11:
            h_selmu_mom_all_real_positron.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_positron.Fill(selmu_mom[0]);
            break;
         case 2212:
            h_selmu_mom_all_real_proton.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_proton.Fill(selmu_mom[0]);
            break;
         default:
            h_selmu_mom_all_real_others.Fill(selmu_mom[0]);
            h_selmu_mom_1p_real_others.Fill(selmu_mom[0]);
            break;
         }    
         // selmu momentum and neutrino energy for different reactions 
         switch (reaction) {
         case 0:
            h_selmu_mom_all_reaction_CCQE.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCQE.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCQE.Fill(nu_trueE);
            break;
         case 9:
            h_selmu_mom_all_reaction_2p2h.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_2p2h.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_2p2h.Fill(nu_trueE);
            break;         
         case 1:
            h_selmu_mom_all_reaction_RES.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_RES.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_RES.Fill(nu_trueE);
            break;
         case 2:
            h_selmu_mom_all_reaction_DIS.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_DIS.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_DIS.Fill(nu_trueE);
            break;
         case 3:
            h_selmu_mom_all_reaction_COH.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_COH.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_COH.Fill(nu_trueE);
            break;
         case 4:
            h_selmu_mom_all_reaction_NC.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_NC.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_NC.Fill(nu_trueE);
            break;
         case 5:
            h_selmu_mom_all_reaction_CCnumu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCnumu.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCnumu.Fill(nu_trueE);
            break;
         case 6:
            h_selmu_mom_all_reaction_CCnue.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCnue.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCnue.Fill(nu_trueE);
            break;
         case 999:
            h_selmu_mom_all_reaction_other.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_other.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_other.Fill(nu_trueE);
            break;
         case 7:
            h_selmu_mom_all_reaction_outFV.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_outFV.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_outFV.Fill(nu_trueE);
            break;
         case -1:
            h_selmu_mom_all_reaction_notruth.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_notruth.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_notruth.Fill(nu_trueE);
            break;
         case 777:
            h_selmu_mom_all_reaction_sandmu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_sandmu.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_sandmu.Fill(nu_trueE);
            break;
         }
         // selmu momentum and neutrino energy for different topologys
         switch (topology) {
         case 0:
            h_selmu_mom_all_topology_CC0pi.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CC0pi.Fill(nu_trueE); 
            break;
         case 1:
            h_selmu_mom_all_topology_CC1pi.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CC1pi.Fill(nu_trueE);
            break;
         case 2:
            h_selmu_mom_all_topology_CCother.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CCother.Fill(nu_trueE);
            break;  
         case 3:
            h_selmu_mom_all_topology_BKG.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_BKG.Fill(nu_trueE);
            break; 
         case 7:
            h_selmu_mom_all_topology_outFV.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_outFV.Fill(nu_trueE); 
            break;
         case -1:
            h_selmu_mom_all_topology_notruth.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_notruth.Fill(nu_trueE); 
            break;
         case 777:
            h_selmu_mom_all_topology_sandmu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_sandmu.Fill(nu_trueE); 
            break;
         }
         // filling auxiliar histograms for calculating purity with respect to momentum      
         h_selmu_mom_all.Fill(selmu_mom[0]);
         h_mom_pion_all.Fill(obj_mom[i_pi]);
         h_mom_proton_1p.Fill(obj_mom[i_pr]);
         // filling auxiliar histograms for calculating purity with respect to cos theta
         h_selmu_cos_all.Fill(selmu_costheta[0]);
         h_cos_pion_all.Fill(obj_dir[i_pi][2]);
         h_cos_proton_1p.Fill(obj_dir[i_pr][2]);
         if (obj_pdg[obj_maintrack_index] == 13) h_selmu_cos_all_real_muon.Fill(selmu_costheta[0]);
         if (obj_pdg[i_pi] == 211) h_cos_pion_all_real_pion_pos.Fill(obj_dir[i_pi][2]);
         if (obj_pdg[i_pr] == 2212) h_cos_proton_1p_real_proton.Fill(obj_dir[i_pr][2]);
         // filling auxiliar histograms for calculating purity and efficiency of CC1pi+
         h_nu_trueE_all_CC1pi_infv.Fill(nu_trueE);
         if (topology == 1 && infv == 1) h_nu_trueE_all_CC1pi_infv_true.Fill(nu_trueE);
         // 4-momentums and invariant mass of pion - proton 
         double inv_mass_pi_pr = (pi_4mom + pr_4mom).M();
         if (topology == 1 && reaction == 1) h_inv_mass_pion_proton_1p_CC1pi_RES.Fill(inv_mass_pi_pr);
         if (topology == 1 && reaction != 1) h_inv_mass_pion_proton_1p_CC1pi_noRES.Fill(inv_mass_pi_pr);
         if (topology != 1) h_inv_mass_pion_proton_1p_noCC1pi.Fill(inv_mass_pi_pr);
         // recontructed neutrino energy
         TLorentzVector nu_4mom = mu_4mom + pi_4mom + pr_4mom;
         double rec_nu_energy = nu_4mom.E() - mass_pr;
         h_rec_nu_energy_1p.Fill(rec_nu_energy);
         h_true_vs_rec_nu_energy_1p.Fill(nu_trueE,rec_nu_energy);
         if (topology == 1) h_true_vs_rec_nu_energy_1p_CC1pi.Fill(nu_trueE,rec_nu_energy);
         if (topology != 1) h_true_vs_rec_nu_energy_1p_noCC1pi.Fill(nu_trueE,rec_nu_energy);
         h_true_minus_rec_nu_energy_1p.Fill(nu_trueE-rec_nu_energy);
         h_true_minus_rec_norm_nu_energy_1p.Fill((nu_trueE-rec_nu_energy)/nu_trueE);
         // neutrino transverse momentum
         double pt_nu = nu_4mom.Pt();
         h_pt_nu_1p.Fill(pt_nu);
         if (topology == 1) h_pt_nu_1p_CC1pi.Fill(pt_nu);
         if (topology != 1) h_pt_nu_1p_noCC1pi.Fill(pt_nu);
      }
      // sample with 0 protons (0p)
      if (count_pr == 0) {
         // comparing pion+ candidate momentum with true particles
         switch (obj_pdg[i_pi]) {
         case 13:
            h_mom_pion_all_real_muon.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_muon.Fill(obj_mom[i_pi]);
            break;
         case -13:
            h_mom_pion_all_real_antimuon.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_antimuon.Fill(obj_mom[i_pi]);
            break;
         case 211:
            h_mom_pion_all_real_pion_pos.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_pion_pos.Fill(obj_mom[i_pi]);
            break;
         case -211:
            h_mom_pion_all_real_pion_neg.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_pion_neg.Fill(obj_mom[i_pi]);
            break;
         case 11:
            h_mom_pion_all_real_electron.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_electron.Fill(obj_mom[i_pi]);
            break;
         case -11:
            h_mom_pion_all_real_positron.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_positron.Fill(obj_mom[i_pi]);
            break;
         case 2212:
            h_mom_pion_all_real_proton.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_proton.Fill(obj_mom[i_pi]);
            break;
         default:
            h_mom_pion_all_real_others.Fill(obj_mom[i_pi]);
            h_mom_pion_0p_real_others.Fill(obj_mom[i_pi]);
            break;
         } 
         // comparing selmu candidate with true particles
         switch (obj_pdg[obj_maintrack_index]) {
         case 13:
            h_selmu_mom_all_real_muon.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_muon.Fill(selmu_mom[0]);
            break;
         case -13:
            h_selmu_mom_all_real_antimuon.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_antimuon.Fill(selmu_mom[0]);
            break;
         case 211:
            h_selmu_mom_all_real_pion_pos.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_pion_pos.Fill(selmu_mom[0]);
            break;
         case -211:
            h_selmu_mom_all_real_pion_neg.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_pion_neg.Fill(selmu_mom[0]);
            break;
         case 11:
            h_selmu_mom_all_real_electron.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_electron.Fill(selmu_mom[0]);
            break;
         case -11:
            h_selmu_mom_all_real_positron.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_positron.Fill(selmu_mom[0]);
            break;
         case 2212:
            h_selmu_mom_all_real_proton.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_proton.Fill(selmu_mom[0]);
            break;
         default:
            h_selmu_mom_all_real_others.Fill(selmu_mom[0]);
            h_selmu_mom_0p_real_others.Fill(selmu_mom[0]);
            break;
         }  
         // selmu momentum and neutrino energy for different reactions
         switch (reaction) {
         case 0:
            h_selmu_mom_all_reaction_CCQE.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCQE.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCQE.Fill(nu_trueE);
            break;
         case 9:
            h_selmu_mom_all_reaction_2p2h.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_2p2h.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_2p2h.Fill(nu_trueE);
            break;         
         case 1:
            h_selmu_mom_all_reaction_RES.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_RES.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_RES.Fill(nu_trueE);
            break;
         case 2:
            h_selmu_mom_all_reaction_DIS.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_DIS.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_DIS.Fill(nu_trueE);
            break;
         case 3:
            h_selmu_mom_all_reaction_COH.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_COH.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_COH.Fill(nu_trueE);
            break;
         case 4:
            h_selmu_mom_all_reaction_NC.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_NC.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_NC.Fill(nu_trueE);
            break;
         case 5:
            h_selmu_mom_all_reaction_CCnumu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCnumu.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCnumu.Fill(nu_trueE);
            break;
         case 6:
            h_selmu_mom_all_reaction_CCnue.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_CCnue.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_CCnue.Fill(nu_trueE);
            break;
         case 999:
            h_selmu_mom_all_reaction_other.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_other.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_other.Fill(nu_trueE);
            break;
         case 7:
            h_selmu_mom_all_reaction_outFV.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_outFV.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_outFV.Fill(nu_trueE);
            break;
         case -1:
            h_selmu_mom_all_reaction_notruth.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_notruth.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_notruth.Fill(nu_trueE);
            break;
         case 777:
            h_selmu_mom_all_reaction_sandmu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_reaction_sandmu.Fill(nu_trueE); 
            if (topology == 1) h_nu_trueE_all_CC1pi_reaction_sandmu.Fill(nu_trueE);
            break;
         }
         // selmu momentum and neutrino energy for different topologys
         switch (topology) {
         case 0:
            h_selmu_mom_all_topology_CC0pi.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CC0pi.Fill(nu_trueE); 
            break;
         case 1:
            h_selmu_mom_all_topology_CC1pi.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CC1pi.Fill(nu_trueE);
            break;
         case 2:
            h_selmu_mom_all_topology_CCother.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_CCother.Fill(nu_trueE);
            break;  
         case 3:
            h_selmu_mom_all_topology_BKG.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_BKG.Fill(nu_trueE);
            break; 
         case 7:
            h_selmu_mom_all_topology_outFV.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_outFV.Fill(nu_trueE); 
            break;
         case -1:
            h_selmu_mom_all_topology_notruth.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_notruth.Fill(nu_trueE); 
            break;
         case 777:
            h_selmu_mom_all_topology_sandmu.Fill(selmu_mom[0]);  
            h_nu_trueE_all_topology_sandmu.Fill(nu_trueE); 
            break;
         }
         // filling auxiliar histograms for calculating purity with respect to momentum        
         h_selmu_mom_all.Fill(selmu_mom[0]);
         h_mom_pion_all.Fill(obj_mom[i_pi]);
         // filling auxiliar histograms for calculating purity with respect to cos theta
         h_selmu_cos_all.Fill(selmu_costheta[0]);
         h_cos_pion_all.Fill(obj_dir[i_pi][2]);
         if (obj_pdg[obj_maintrack_index] == 13) h_selmu_cos_all_real_muon.Fill(selmu_costheta[0]);
         if (obj_pdg[i_pi] == 211) h_cos_pion_all_real_pion_pos.Fill(obj_dir[i_pi][2]);
         // filling auxiliar histograms for calculating purity and efficiency of CC1pi+
         h_nu_trueE_all_CC1pi_infv.Fill(nu_trueE);
         if (topology == 1 && infv == 1) h_nu_trueE_all_CC1pi_infv_true.Fill(nu_trueE);
         // reconstructed neutrino energy
         TLorentzVector nu_4mom = mu_4mom + pi_4mom;
         double rec_nu_energy = nu_4mom.E();
         h_rec_nu_energy_0p.Fill(rec_nu_energy);
         h_true_vs_rec_nu_energy_0p.Fill(nu_trueE,rec_nu_energy);
         if (topology == 1) h_true_vs_rec_nu_energy_0p_CC1pi.Fill(nu_trueE,rec_nu_energy);
         if (topology != 1) h_true_vs_rec_nu_energy_0p_noCC1pi.Fill(nu_trueE,rec_nu_energy);
         h_true_minus_rec_nu_energy_0p.Fill(nu_trueE-rec_nu_energy);
         h_true_minus_rec_norm_nu_energy_0p.Fill((nu_trueE-rec_nu_energy)/nu_trueE);
         // neutrino transverse momentum
         double pt_nu = nu_4mom.Pt();
         h_pt_nu_0p.Fill(pt_nu);
         if (topology == 1) h_pt_nu_0p_CC1pi.Fill(pt_nu);
         if (topology != 1) h_pt_nu_0p_noCC1pi.Fill(pt_nu);
      }
   }
   // purity with respect to momentum
   h_purity_mom_muon_all.Divide(&h_selmu_mom_all_real_muon,&h_selmu_mom_all);
   h_purity_mom_pion_all.Divide(&h_mom_pion_all_real_pion_pos,&h_mom_pion_all);
   h_purity_mom_proton_1p.Divide(&h_mom_proton_1p_real_proton,&h_mom_proton_1p);
   // purity with respect to cos theta
   h_purity_cos_muon_all.Divide(&h_selmu_cos_all_real_muon,&h_selmu_cos_all);
   h_purity_cos_pion_all.Divide(&h_cos_pion_all_real_pion_pos,&h_cos_pion_all);
   h_purity_cos_proton_1p.Divide(&h_cos_proton_1p_real_proton,&h_cos_proton_1p);
   // purity and effeciency of CC1pi+ selection
   h_purity_nu_trueE_CC1pi_all.Divide(&h_nu_trueE_all_CC1pi_infv_true,&h_nu_trueE_all_CC1pi_infv);
   h_efficiency_nu_trueE_CC1pi_all.Divide(&h_nu_trueE_all_CC1pi_infv_true,&h_nu_trueE);


*/
