#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MyClass::Loop()
{

   TH1F *h_average = new TH1F("h_average","", 240, 0, 14);
   //TH1F *h_std_green = new TH1F("h_std_green", 100, 0, 5);

   if (fChain == 0) return;

   Int_t nentries = Int_t(fChain->GetEntries());
   Long64_t nbytes = 0, nb = 0;

   Float_t farmer_mass[nentries];
   Float_t farmer_green_mass[nentries];

   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      for (Int_t j = 0; j < n; j++)
      {
         farmer_mass[jentry] = farmer_mass[jentry] + mass[j];llllllllllllllllllllll  
      }

      h_average->Fill(farmer_mass[jentry]/n);
   }

   gStyle -> SetOptStat(0);

   h_average->Draw();
   h_average->SetLineColor(2);

   auto* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
   legend->AddEntry(h_average, "average mass dist.", "l");


}
