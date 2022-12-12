void plot()
{
  TFile f1("out_dat.root"); //data  
  TFile f2("out_sig.root"); //signal MC
  TFile f3("out_bkg.root"); //background MC

  TH1F *h_mu_like_1 = (TH1F*)f1.Get("h_mu_like");
  TH1F *h_mu_like_2 = (TH1F*)f2.Get("h_mu_like");
  TH1F *h_mu_like_3 = (TH1F*)f3.Get("h_mu_like");
  h_mu_like_1->SetLineColor(1);
  h_mu_like_2->SetLineColor(2);
  h_mu_like_3->SetLineColor(4);
  //normalization to 1
  h_mu_like_1->Scale(1./h_mu_like_1->GetEntries());
  h_mu_like_2->Scale(1./h_mu_like_2->GetEntries());
  h_mu_like_3->Scale(1./h_mu_like_3->GetEntries());

  TH1F *h_mu_like_muon = (TH1F*)f2.Get("h_mu_like_muon");
  //TH1F *h_mu_like_antimuon = (TH1F*)f2.Get("h_mu_like_antimuon");
  TH1F *h_mu_like_notmuon = (TH1F*)f2.Get("h_mu_like_notmuon");
  h_mu_like_muon->SetLineColor(1);
  //h_mu_like_antimuon->SetLineColor(2);
  h_mu_like_notmuon->SetLineColor(4);
  //normalization to 1
  h_mu_like_muon->Scale(1./h_mu_like_muon->GetEntries());
  h_mu_like_notmuon->Scale(1./h_mu_like_notmuon->GetEntries());
  //h_mu_like_antimuon->Scale(1./h_mu_like_antimuon->GetEntries());
  
  TCanvas c;
  c.SaveAs("plots.pdf[");


  h_mu_like_1->Draw("hist");
  h_mu_like_2->Draw("hist same");
  h_mu_like_3->Draw("hist same");

  //gStyle -> SetOptStat(0);
  auto* legend1 = new TLegend(0.3, 0.3, 0.1, 0.1);
  
  legend1->AddEntry(h_mu_like_1, "data", "l");
  legend1->AddEntry(h_mu_like_2, "signal MC", "l");
  legend1->AddEntry(h_mu_like_3, "background MC", "l");

  legend1->Draw();
  c.SaveAs("plots.pdf");   

  //  ----- ----- ----- ----- ----- 

  c.Clear();
  h_mu_like_muon->Draw("hist E");
  //h_mu_like_antimuon->Draw("hist E same");
  h_mu_like_notmuon->Draw("hist E same");

  //gStyle->SetOptStat(0);
  auto* legend2 = new TLegend(0.5, 0.5, 0.7, 0.7);
  legend2->AddEntry(h_mu_like_muon, "muon", "l");
  //legend2->AddEntry(h_mu_like_antimuon, "antimuon", "l");
  legend2->AddEntry(h_mu_like_notmuon, "not muon", "l");
  legend2->Draw();

  c.SaveAs("plots.pdf");

  

  c.SaveAs("plots.pdf]"); 


}


/*
  c.Clear();

  TH1F *h_pT_Muon_1 = (TH1F*)f1.Get("h_pT_pos");
  TH1F *h_pT_Muon_2 = (TH1F*)f2.Get("h_pT_pos");
  TH1F *h_pT_Muon_3 = (TH1F*)f3.Get("h_pT_pos");

  h_pT_Muon_1->SetLineColor(1);
  h_pT_Muon_2->SetLineColor(2);
  h_pT_Muon_3->SetLineColor(4);

  h_pT_Muon_1->Scale(1./h_pT_Muon_1->GetEntries());
  h_pT_Muon_2->Scale(1./h_pT_Muon_2->GetEntries());
  h_pT_Muon_3->Scale(1./h_pT_Muon_3->GetEntries());


  h_pT_Muon_1->Draw("hist");
  h_pT_Muon_2->Draw("hist same");
  h_pT_Muon_3->Draw("hist same");

  auto* legend3 = new TLegend(0.3, 0.3, 0.1, 0.1);
  
  legend3->AddEntry(h_pT_Muon_1, "data", "l");
  legend3->AddEntry(h_pT_Muon_2, "signal MC", "l");
  legend3->AddEntry(h_pT_Muon_3, "background MC", "l");

  legend3->Draw();
  */