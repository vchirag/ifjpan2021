/*
   Distribution of obj_tpc_mupidpull obj_tpc_elpidpull obj_tpc_prpidpull obj_tpc_pipidpull
   for muons, antimuons, charged pions, electrons, positrons, and other particles.

   Constraint(s):

   1. obj_tpc_nnodes > 0
   2. obj_tpc_nnodes >=18
   3. obj_tpc_nnodes >=18 and Fiducial Volume for tracks beginning in the FGD1 detector defines as follows:
         ------------------------------------
         coordinate  |   min     |  max
         ------------------------------------
         X       | -874.51   | 874.51
         Y       | -819.51   | 929.51
         Z       |  136.875  | 446.955
         ------------------------------------
      i.    for positively charged particles: obj_tpc_q = 1
      ii.   for negatively charged particles: obj_tpc_q = -1    
*/

// I learnt writing such an elegant code from my project partner: Caetano
// This code has some remnants of Caetano's code.

#define defaultclass_cxx
#include "defaultclass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <iomanip>
#include <TChain.h>

void defaultclass::Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TFile output("out.root", "recreate");

   int bins = 100, min = -2, max = +2;

   // Part 1
      // pull_muon
   TH1F *h_obj_tpc_mupidpull_muon_part1      = new TH1F("h_obj_tpc_mupidpull_muon_part1"     , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_antimuon_part1  = new TH1F("h_obj_tpc_mupidpull_antimuon_part1" , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionpos_part1   = new TH1F("h_obj_tpc_mupidpull_pionpos_part1"  , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionneg_part1   = new TH1F("h_obj_tpc_mupidpull_pionneg_part1"  , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_electron_part1  = new TH1F("h_obj_tpc_mupidpull_electron_part1" , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_positron_part1  = new TH1F("h_obj_tpc_mupidpull_positron_part1" , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_proton_part1    = new TH1F("h_obj_tpc_mupidpull_proton_part1"   , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_other_part1     = new TH1F("h_obj_tpc_mupidpull_other_part1"    , "obj_tpc_mupidpull (obj_tpc_nnodes > 0); muon_pull; entries", bins, min, max);

      // pull_electron
   TH1F *h_obj_tpc_elpidpull_muon_part1      = new TH1F("h_obj_tpc_elpidpull_muon_part1"     , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_antimuon_part1  = new TH1F("h_obj_tpc_elpidpull_antimuon_part1" , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionpos_part1   = new TH1F("h_obj_tpc_elpidpull_pionpos_part1"  , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionneg_part1   = new TH1F("h_obj_tpc_elpidpull_pionneg_part1"  , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_electron_part1  = new TH1F("h_obj_tpc_elpidpull_electron_part1" , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_positron_part1  = new TH1F("h_obj_tpc_elpidpull_positron_part1" , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_proton_part1    = new TH1F("h_obj_tpc_elpidpull_proton_part1"   , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_other_part1     = new TH1F("h_obj_tpc_elpidpull_other_part1"    , "obj_tpc_elpidpull (obj_tpc_nnodes > 0); electron_pull; entries", bins, min, max);

      // pull proton
   TH1F *h_obj_tpc_prpidpull_muon_part1      = new TH1F("h_obj_tpc_prpidpull_muon_part1"     , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_antimuon_part1  = new TH1F("h_obj_tpc_prpidpull_antimuon_part1" , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionpos_part1   = new TH1F("h_obj_tpc_prpidpull_pionpos_part1"  , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionneg_part1   = new TH1F("h_obj_tpc_prpidpull_pionneg_part1"  , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_electron_part1  = new TH1F("h_obj_tpc_prpidpull_electron_part1" , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_positron_part1  = new TH1F("h_obj_tpc_prpidpull_positron_part1" , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_proton_part1    = new TH1F("h_obj_tpc_prpidpull_proton_part1"   , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_other_part1     = new TH1F("h_obj_tpc_prpidpull_other_part1"    , "obj_tpc_prpidpull (obj_tpc_nnodes > 0); proton_pull; entries", bins, min, max);

      // pull pion
   TH1F *h_obj_tpc_pipidpull_muon_part1      = new TH1F("h_obj_tpc_pipidpull_muon_part1"     , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_antimuon_part1  = new TH1F("h_obj_tpc_pipidpull_antimuon_part1" , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionpos_part1   = new TH1F("h_obj_tpc_pipidpull_pionpos_part1"  , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionneg_part1   = new TH1F("h_obj_tpc_pipidpull_pionneg_part1"  , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_electron_part1  = new TH1F("h_obj_tpc_pipidpull_electron_part1" , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_positron_part1  = new TH1F("h_obj_tpc_pipidpull_positron_part1" , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_proton_part1    = new TH1F("h_obj_tpc_pipidpull_proton_part1"   , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_other_part1     = new TH1F("h_obj_tpc_pipidpull_other_part1"    , "obj_tpc_pipidpull (obj_tpc_nnodes > 0); pion_pull; entries", bins, min, max);


   // Part 2
      // pull_muon
   TH1F *h_obj_tpc_mupidpull_muon_part2      = new TH1F("h_obj_tpc_mupidpull_muon_part2"     , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_antimuon_part2  = new TH1F("h_obj_tpc_mupidpull_antimuon_part2" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionpos_part2   = new TH1F("h_obj_tpc_mupidpull_pionpos_part2"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionneg_part2   = new TH1F("h_obj_tpc_mupidpull_pionneg_part2"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_electron_part2  = new TH1F("h_obj_tpc_mupidpull_electron_part2" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_positron_part2  = new TH1F("h_obj_tpc_mupidpull_positron_part2" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_proton_part2    = new TH1F("h_obj_tpc_mupidpull_proton_part2"   , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_other_part2     = new TH1F("h_obj_tpc_mupidpull_other_part2"    , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18); muon_pull; entries", bins, min, max);

      // pull_electron
   TH1F *h_obj_tpc_elpidpull_muon_part2      = new TH1F("h_obj_tpc_elpidpull_muon_part2"     , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_antimuon_part2  = new TH1F("h_obj_tpc_elpidpull_antimuon_part2" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionpos_part2   = new TH1F("h_obj_tpc_elpidpull_pionpos_part2"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionneg_part2   = new TH1F("h_obj_tpc_elpidpull_pionneg_part2"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_electron_part2  = new TH1F("h_obj_tpc_elpidpull_electron_part2" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_positron_part2  = new TH1F("h_obj_tpc_elpidpull_positron_part2" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_proton_part2    = new TH1F("h_obj_tpc_elpidpull_proton_part2"   , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_other_part2     = new TH1F("h_obj_tpc_elpidpull_other_part2"    , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18); electron_pull; entries", bins, min, max);

      // pull proton
   TH1F *h_obj_tpc_prpidpull_muon_part2      = new TH1F("h_obj_tpc_prpidpull_muon_part2"     , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_antimuon_part2  = new TH1F("h_obj_tpc_prpidpull_antimuon_part2" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionpos_part2   = new TH1F("h_obj_tpc_prpidpull_pionpos_part2"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionneg_part2   = new TH1F("h_obj_tpc_prpidpull_pionneg_part2"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_electron_part2  = new TH1F("h_obj_tpc_prpidpull_electron_part2" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_positron_part2  = new TH1F("h_obj_tpc_prpidpull_positron_part2" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_proton_part2    = new TH1F("h_obj_tpc_prpidpull_proton_part2"   , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_other_part2     = new TH1F("h_obj_tpc_prpidpull_other_part2"    , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18); proton_pull; entries", bins, min, max);

      // pull pion
   TH1F *h_obj_tpc_pipidpull_muon_part2      = new TH1F("h_obj_tpc_pipidpull_muon_part2"     , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_antimuon_part2  = new TH1F("h_obj_tpc_pipidpull_antimuon_part2" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionpos_part2   = new TH1F("h_obj_tpc_pipidpull_pionpos_part2"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionneg_part2   = new TH1F("h_obj_tpc_pipidpull_pionneg_part2"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_electron_part2  = new TH1F("h_obj_tpc_pipidpull_electron_part2" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_positron_part2  = new TH1F("h_obj_tpc_pipidpull_positron_part2" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_proton_part2    = new TH1F("h_obj_tpc_pipidpull_proton_part2"   , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_other_part2     = new TH1F("h_obj_tpc_pipidpull_other_part2"    , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18); pion_pull; entries", bins, min, max);


   // Part 3  Sub 1
      // pull_muon
   TH1F *h_obj_tpc_mupidpull_muon_part31      = new TH1F("h_obj_tpc_mupidpull_muon_part31"     , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_antimuon_part31  = new TH1F("h_obj_tpc_mupidpull_antimuon_part31" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionpos_part31   = new TH1F("h_obj_tpc_mupidpull_pionpos_part31"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionneg_part31   = new TH1F("h_obj_tpc_mupidpull_pionneg_part31"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_electron_part31  = new TH1F("h_obj_tpc_mupidpull_electron_part31" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_positron_part31  = new TH1F("h_obj_tpc_mupidpull_positron_part31" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_proton_part31    = new TH1F("h_obj_tpc_mupidpull_proton_part31"   , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_other_part31     = new TH1F("h_obj_tpc_mupidpull_other_part31"    , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);

      // pull_electron
   TH1F *h_obj_tpc_elpidpull_muon_part31     = new TH1F("h_obj_tpc_elpidpull_muon_part31"      , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_antimuon_part31  = new TH1F("h_obj_tpc_elpidpull_antimuon_part31" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionpos_part31   = new TH1F("h_obj_tpc_elpidpull_pionpos_part31"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionneg_part31   = new TH1F("h_obj_tpc_elpidpull_pionneg_part31"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_electron_part31  = new TH1F("h_obj_tpc_elpidpull_electron_part31" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_positron_part31  = new TH1F("h_obj_tpc_elpidpull_positron_part31" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_proton_part31    = new TH1F("h_obj_tpc_elpidpull_proton_part31"   , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_other_part31     = new TH1F("h_obj_tpc_elpidpull_other_part31"    , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);

      // pull proton
   TH1F *h_obj_tpc_prpidpull_muon_part31      = new TH1F("h_obj_tpc_prpidpull_muon_part31"     , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_antimuon_part31  = new TH1F("h_obj_tpc_prpidpull_antimuon_part31" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionpos_part31   = new TH1F("h_obj_tpc_prpidpull_pionpos_part31"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionneg_part31   = new TH1F("h_obj_tpc_prpidpull_pionneg_part31"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_electron_part31  = new TH1F("h_obj_tpc_prpidpull_electron_part31" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_positron_part31  = new TH1F("h_obj_tpc_prpidpull_positron_part31" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_proton_part31    = new TH1F("h_obj_tpc_prpidpull_proton_part31"   , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_other_part31     = new TH1F("h_obj_tpc_prpidpull_other_part31"    , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);

      // pull pion
   TH1F *h_obj_tpc_pipidpull_muon_part31      = new TH1F("h_obj_tpc_pipidpull_muon_part31"     , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_antimuon_part31  = new TH1F("h_obj_tpc_pipidpull_antimuon_part31" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionpos_part31   = new TH1F("h_obj_tpc_pipidpull_pionpos_part31"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionneg_part31   = new TH1F("h_obj_tpc_pipidpull_pionneg_part31"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_electron_part31  = new TH1F("h_obj_tpc_pipidpull_electron_part31" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_positron_part31  = new TH1F("h_obj_tpc_pipidpull_positron_part31" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_proton_part31    = new TH1F("h_obj_tpc_pipidpull_proton_part31"   , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_other_part31     = new TH1F("h_obj_tpc_pipidpull_other_part31"    , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = 1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);


   // Part 3  Sub 2
      // pull_muon
   TH1F *h_obj_tpc_mupidpull_muon_part32      = new TH1F("h_obj_tpc_mupidpull_muon_part32"     , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_antimuon_part32  = new TH1F("h_obj_tpc_mupidpull_antimuon_part32" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionpos_part32   = new TH1F("h_obj_tpc_mupidpull_pionpos_part32"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_pionneg_part32   = new TH1F("h_obj_tpc_mupidpull_pionneg_part32"  , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_electron_part32  = new TH1F("h_obj_tpc_mupidpull_electron_part32" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_positron_part32  = new TH1F("h_obj_tpc_mupidpull_positron_part32" , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_proton_part32    = new TH1F("h_obj_tpc_mupidpull_proton_part32"   , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_mupidpull_other_part32     = new TH1F("h_obj_tpc_mupidpull_other_part32"    , "obj_tpc_mupidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); muon_pull; entries", bins, min, max);

      // pull_electron
   TH1F *h_obj_tpc_elpidpull_muon_part32     = new TH1F("h_obj_tpc_elpidpull_muon_part32"      , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_antimuon_part32  = new TH1F("h_obj_tpc_elpidpull_antimuon_part32" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionpos_part32   = new TH1F("h_obj_tpc_elpidpull_pionpos_part32"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_pionneg_part32   = new TH1F("h_obj_tpc_elpidpull_pionneg_part32"  , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_electron_part32  = new TH1F("h_obj_tpc_elpidpull_electron_part32" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_positron_part32  = new TH1F("h_obj_tpc_elpidpull_positron_part32" , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_proton_part32    = new TH1F("h_obj_tpc_elpidpull_proton_part32"   , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_elpidpull_other_part32     = new TH1F("h_obj_tpc_elpidpull_other_part32"    , "obj_tpc_elpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); electron_pull; entries", bins, min, max);

      // pull proton
   TH1F *h_obj_tpc_prpidpull_muon_part32      = new TH1F("h_obj_tpc_prpidpull_muon_part32"     , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_antimuon_part32  = new TH1F("h_obj_tpc_prpidpull_antimuon_part32" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionpos_part32   = new TH1F("h_obj_tpc_prpidpull_pionpos_part32"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_pionneg_part32   = new TH1F("h_obj_tpc_prpidpull_pionneg_part32"  , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_electron_part32  = new TH1F("h_obj_tpc_prpidpull_electron_part32" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_positron_part32  = new TH1F("h_obj_tpc_prpidpull_positron_part32" , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_proton_part32    = new TH1F("h_obj_tpc_prpidpull_proton_part32"   , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_prpidpull_other_part32     = new TH1F("h_obj_tpc_prpidpull_other_part32"    , "obj_tpc_prpidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); proton_pull; entries", bins, min, max);

      // pull pion
   TH1F *h_obj_tpc_pipidpull_muon_part32      = new TH1F("h_obj_tpc_pipidpull_muon_part32"     , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_antimuon_part32  = new TH1F("h_obj_tpc_pipidpull_antimuon_part32" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionpos_part32   = new TH1F("h_obj_tpc_pipidpull_pionpos_part32"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_pionneg_part32   = new TH1F("h_obj_tpc_pipidpull_pionneg_part32"  , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_electron_part32  = new TH1F("h_obj_tpc_pipidpull_electron_part32" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_positron_part32  = new TH1F("h_obj_tpc_pipidpull_positron_part32" , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_proton_part32    = new TH1F("h_obj_tpc_pipidpull_proton_part32"   , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);
   TH1F *h_obj_tpc_pipidpull_other_part32     = new TH1F("h_obj_tpc_pipidpull_other_part32"    , "obj_tpc_pipidpull (obj_tpc_nnodes >= 18), obj_tpc_q = -1, FGD1 Fiducial Volume); pion_pull; entries", bins, min, max);



   Long64_t nbytes = 0, nb = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
      Long64_t ientry = LoadTree(jentry);
   
      if (ientry < 0)
         break;
   
      fChain->GetEntry(jentry);

      for (int particle = 0; particle < n_obj; particle++)
      {
         
         // part 1
         if (!(obj_tpc_nnodes[particle] > 0))   continue;
         switch (obj_pdg[particle])
         {
            case 13: 
                     h_obj_tpc_mupidpull_muon_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_muon_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_muon_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_muon_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case -13: 
                     h_obj_tpc_mupidpull_antimuon_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_antimuon_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_antimuon_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_antimuon_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            case 11: 
                     h_obj_tpc_mupidpull_electron_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_electron_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_electron_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_electron_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         
            case -11: 
                     h_obj_tpc_mupidpull_positron_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_positron_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_positron_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_positron_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 2212:
                     h_obj_tpc_mupidpull_proton_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_proton_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_proton_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_proton_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 211:
                     h_obj_tpc_mupidpull_pionpos_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionpos_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionpos_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionpos_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;

            case -211:
                     h_obj_tpc_mupidpull_pionneg_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionneg_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionneg_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionneg_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            default:
                     h_obj_tpc_mupidpull_other_part1 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_other_part1 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_other_part1 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_other_part1 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         }

         // part 2
         if (!(obj_tpc_nnodes[particle] >= 18))   continue;
         switch (obj_pdg[particle])
         {
            case 13: 
                     h_obj_tpc_mupidpull_muon_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_muon_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_muon_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_muon_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case -13: 
                     h_obj_tpc_mupidpull_antimuon_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_antimuon_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_antimuon_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_antimuon_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            case 11: 
                     h_obj_tpc_mupidpull_electron_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_electron_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_electron_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_electron_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         
            case -11: 
                     h_obj_tpc_mupidpull_positron_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_positron_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_positron_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_positron_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 2212:
                     h_obj_tpc_mupidpull_proton_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_proton_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_proton_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_proton_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 211:
                     h_obj_tpc_mupidpull_pionpos_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionpos_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionpos_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionpos_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;

            case -211:
                     h_obj_tpc_mupidpull_pionneg_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionneg_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionneg_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionneg_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            default:
                     h_obj_tpc_mupidpull_other_part2 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_other_part2 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_other_part2 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_other_part2 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         }

         // part 3 sub 1
         if (!(obj_posstart[particle][0] >= -874.51 && obj_posstart[particle][0] <= 874.51)) continue;
         if (!(obj_posstart[particle][1] >= -819.51 && obj_posstart[particle][1] <= 929.51)) continue;
         if (!(obj_posstart[particle][2] >= 136.875 && obj_posstart[particle][2] <= 446.955)) continue;
         if (obj_tpc_q[particle] == 1)
         switch (obj_pdg[particle])
         {
            case 13: 
                     h_obj_tpc_mupidpull_muon_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_muon_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_muon_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_muon_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case -13: 
                     h_obj_tpc_mupidpull_antimuon_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_antimuon_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_antimuon_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_antimuon_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            case 11: 
                     h_obj_tpc_mupidpull_electron_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_electron_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_electron_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_electron_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         
            case -11: 
                     h_obj_tpc_mupidpull_positron_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_positron_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_positron_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_positron_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 2212:
                     h_obj_tpc_mupidpull_proton_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_proton_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_proton_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_proton_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 211:
                     h_obj_tpc_mupidpull_pionpos_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionpos_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionpos_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionpos_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;

            case -211:
                     h_obj_tpc_mupidpull_pionneg_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionneg_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionneg_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionneg_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            default:
                     h_obj_tpc_mupidpull_other_part31 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_other_part31 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_other_part31 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_other_part31 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         }

         // part 3 sub 2
         if (!(obj_posstart[particle][0] >= -874.51 && obj_posstart[particle][0] <= 874.51)) continue;
         if (!(obj_posstart[particle][1] >= -819.51 && obj_posstart[particle][1] <= 929.51)) continue;
         if (!(obj_posstart[particle][2] >= 136.875 && obj_posstart[particle][2] <= 446.955)) continue;
         if (obj_tpc_q[particle] == -1)
         switch (obj_pdg[particle])
         {
            case 13: 
                     h_obj_tpc_mupidpull_muon_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_muon_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_muon_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_muon_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case -13: 
                     h_obj_tpc_mupidpull_antimuon_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_antimuon_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_antimuon_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_antimuon_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            case 11: 
                     h_obj_tpc_mupidpull_electron_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_electron_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_electron_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_electron_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         
            case -11: 
                     h_obj_tpc_mupidpull_positron_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_positron_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_positron_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_positron_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 2212:
                     h_obj_tpc_mupidpull_proton_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_proton_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_proton_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_proton_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            case 211:
                     h_obj_tpc_mupidpull_pionpos_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionpos_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionpos_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionpos_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;

            case -211:
                     h_obj_tpc_mupidpull_pionneg_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_pionneg_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_pionneg_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_pionneg_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
            
            default:
                     h_obj_tpc_mupidpull_other_part32 -> Fill(obj_tpc_mupidpull[particle]);
                     h_obj_tpc_elpidpull_other_part32 -> Fill(obj_tpc_elpidpull[particle]);
                     h_obj_tpc_prpidpull_other_part32 -> Fill(obj_tpc_prpidpull[particle]);
                     h_obj_tpc_pipidpull_other_part32 -> Fill(obj_tpc_pipidpull[particle]);
                     break;
         }
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
