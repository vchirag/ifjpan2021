void plot()
{
	TFile f1("out_dat.root");	//	Data
	TFile f2("out_sig.root");	//	MC-Signal
	TFile f3("out_bkg.root");	//	MC-Background

	TCanvas c;
	c.SaveAs("plots.pdf[");

	//	Plotting mu_like variable across different samples

	TH1F *h_mu_like_1 = (TH1F*)f1.Get("h_mu_like");
	TH1F *h_mu_like_2 = (TH1F*)f2.Get("h_mu_like");
	TH1F *h_mu_like_3 = (TH1F*)f3.Get("h_mu_like");

	h_mu_like_1 -> SetLineColor(1);
	h_mu_like_2 -> SetLineColor(2);
	h_mu_like_3 -> SetLineColor(3);

	h_mu_like_1 -> Scale(1./h_mu_like_1->GetEntries());
  	h_mu_like_2 -> Scale(1./h_mu_like_2->GetEntries());
  	h_mu_like_3 -> Scale(1./h_mu_like_3->GetEntries());

  	h_mu_like_1 -> Draw("hist");
  	h_mu_like_2 -> Draw("hist same");
  	h_mu_like_3 -> Draw("hist same");

	auto* legend1 = new TLegend(0.3, 0.3, 0.1, 0.1);
	legend1 -> AddEntry(h_mu_like_1, "data", "l");
	legend1 -> AddEntry(h_mu_like_2, "MC-Signal", "l");
	legend1 -> AddEntry(h_mu_like_3, "MC-Background", "l");
	legend1 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for muons and antimuons from MC-Signal to estimate errors

	c.Clear();
	
	TH1F *h_mu_like_muon_2 = (TH1F*)f2.Get("h_mu_like_muon");
	TH1F *h_mu_like_antimuon_2 = (TH1F*)f2.Get("h_mu_like_antimuon");

	h_mu_like_muon_2 -> SetLineColor(1);
	h_mu_like_antimuon_2 -> SetLineColor(2);

	h_mu_like_muon_2 -> Scale(1./h_mu_like_muon_2->GetEntries());
	h_mu_like_antimuon_2 -> Scale(1./h_mu_like_antimuon_2->GetEntries());

	h_mu_like_muon_2 -> Draw("hist E");
	h_mu_like_antimuon_2 -> Draw("hist E same");

	auto *legend2 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend2 -> AddEntry(h_mu_like_muon_2, "muon", "l");
	legend2 -> AddEntry(h_mu_like_antimuon_2, "anti muon", "l");
	legend2 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting muon+antimuon and notmuon from MC-Signal

	c.Clear();

	gPad->SetLogy(1); 
	
	TH1F *h_mu_like_notmuon_2 = (TH1F*)f2.Get("h_mu_like_notmuon");
	TH1F *h_mu_like_muon_pair_2 = (TH1F*)f2.Get("h_mu_like_muon_pair");

	h_mu_like_notmuon_2 -> SetLineColor(1);
	h_mu_like_muon_pair_2 -> SetLineColor(2);

	h_mu_like_notmuon_2 -> Scale(1./h_mu_like_notmuon_2->GetEntries());
	h_mu_like_muon_pair_2 -> Scale(1./h_mu_like_muon_pair_2->GetEntries());

	h_mu_like_muon_pair_2 -> Draw("hist");
	h_mu_like_notmuon_2 -> Draw("hist same");

	auto *legend3 = new TLegend(0.1, 0.1, 0.2, 0.2);
	legend3 -> AddEntry(h_mu_like_notmuon_2, "not muon", "l");
	legend3 -> AddEntry(h_mu_like_muon_pair_2, "muon + antimuon", "l");
	legend3 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting transverse momenta for muon

	c.Clear();

	gPad -> SetLogy(0);
	TH1F *h_pT_muon_2 = (TH1F*)f2.Get("h_pT_muon");
	TH1F *h_pT_muon_3 = (TH1F*)f3.Get("h_pT_muon");

	h_pT_muon_2 -> Scale(1/h_pT_muon_2 -> GetEntries());
	h_pT_muon_3 -> Scale(1/h_pT_muon_3 -> GetEntries());

	h_pT_muon_2 -> SetLineColor(2);
	h_pT_muon_3 -> SetLineColor(3);

	h_pT_muon_3 -> Draw("hist");
	h_pT_muon_2 -> Draw("hist same");

	auto* legend5 = new TLegend(0.6, 0.6, 0.7, 0.7);
	legend5 -> AddEntry(h_pT_muon_2, "MC-Signal", "l");
	legend5 -> AddEntry(h_pT_muon_3, "MC-Background", "l");
	legend5 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting transverse momenta for antimuon

	c.Clear();

	gPad -> SetLogy(0);
	TH1F *h_pT_antimuon_2 = (TH1F*)f2.Get("h_pT_antimuon");
	TH1F *h_pT_antimuon_3 = (TH1F*)f3.Get("h_pT_antimuon");

	h_pT_antimuon_2 -> Scale(1/h_pT_antimuon_2 -> GetEntries());
	h_pT_antimuon_3 -> Scale(1/h_pT_antimuon_3 -> GetEntries());

	h_pT_antimuon_2 -> SetLineColor(2);
	h_pT_antimuon_3 -> SetLineColor(3);

	h_pT_antimuon_3 -> Draw("hist");
	h_pT_antimuon_2 -> Draw("hist same");

	auto* legend6 = new TLegend(0.6, 0.6, 0.7, 0.7);
	legend6 -> AddEntry(h_pT_antimuon_2, "MC-Signal", "l");
	legend6 -> AddEntry(h_pT_antimuon_3, "MC-Background", "l");
	legend6 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting phi variation for muons

	c.Clear();

	TH2F *h_phi_muon_vs_antimuon_2 = (TH2F*)f2.Get("h_phi_muon_vs_phi_antimuon");
	TH2F *h_phi_muon_vs_antimuon_3 = (TH2F*)f3.Get("h_phi_muon_vs_phi_antimuon");

	h_phi_muon_vs_antimuon_2 -> Scale(1/h_phi_muon_vs_antimuon_2 -> GetEntries());
	h_phi_muon_vs_antimuon_3 -> Scale(1/h_phi_muon_vs_antimuon_3 -> GetEntries());
	
	c.Divide(2);

	c.cd(1);
	h_phi_muon_vs_antimuon_2 -> Draw("colz");

	c.cd(2);
	h_phi_muon_vs_antimuon_3 -> Draw("colz same");

	c.SaveAs("plots.pdf");

	//	Plotting vertex distances

	c.Clear();
 	TH1F * h_z_2 = (TH1F*)f2.Get("h_z");
  	TH1F * h_z_3 = (TH1F*)f3.Get("h_z");
  	
  	gPad->SetLogy(1);
  	
  	h_z_2->Scale(1./h_z_2->GetEntries());
  	h_z_3->Scale(1./h_z_3->GetEntries());
  	
  	h_z_2->SetLineColor(2);
  	h_z_3->SetLineColor(3);
  	h_z_2->SetMaximum(0.15);
  	
  	h_z_2->Draw("hist");
  	h_z_3->Draw("hist same");
  	c.SaveAs("plots.pdf");

	// Plotting invariant mass

	c.Clear();
	gPad ->SetLogy(1);

	TH1F *h_invariant_mass_1 = (TH1F*)f1.Get("h_invariant_mass");
	TH1F *h_invariant_mass_2 = (TH1F*)f2.Get("h_invariant_mass");
	TH1F *h_invariant_mass_3 = (TH1F*)f3.Get("h_invariant_mass");

	double MC_sigma_sig = 5.;//nb
 	double MC_sigma_bkg = 500.;//nb
  	double L = 100.; //nb-1
  	double n_entries_MC_sig = h_invariant_mass_2->GetEntries();
 	double n_entries_MC_bkg = h_invariant_mass_3->GetEntries();

	h_invariant_mass_1 -> SetLineColor(1);
	h_invariant_mass_2 -> SetLineColor(2);
	h_invariant_mass_3 -> SetLineColor(3);

	//h_invariant_mass_1 -> Scale(1./h_invariant_mass_1 -> GetEntries());
	h_invariant_mass_2 -> Scale(MC_sigma_sig*L/n_entries_MC_sig);
	h_invariant_mass_3 -> Scale(MC_sigma_bkg*L/n_entries_MC_bkg);

	h_invariant_mass_1 -> Draw("E");
	h_invariant_mass_2 -> Draw("hist same ");
	h_invariant_mass_3 -> Draw("hist same");

	auto* legend4 = new TLegend(0.6, 0.6, 0.7, 0.7);
	legend4 -> AddEntry(h_invariant_mass_1, "data", "l");
	legend4 -> AddEntry(h_invariant_mass_2, "MC-Signal", "l");
	legend4 -> AddEntry(h_invariant_mass_3, "MC-Background", "l");
	legend4 -> Draw();

	c.SaveAs("plots.pdf");


	//	Plotting invariant mass after the first cut

	c.Clear();

	TH1F *h_invariant_mass_cut1_1 = (TH1F*)f1.Get("h_invariant_mass_cut1");
	TH1F *h_invariant_mass_cut1_2 = (TH1F*)f2.Get("h_invariant_mass_cut1");
	TH1F *h_invariant_mass_cut1_3 = (TH1F*)f3.Get("h_invariant_mass_cut1");
	
	h_invariant_mass_cut1_1 -> SetLineColor(1);
	h_invariant_mass_cut1_2 -> SetLineColor(2);
	h_invariant_mass_cut1_3 -> SetLineColor(3);

	gPad -> SetLogy(1);

	//h_invariant_mass_cut1_1 -> Scale(1/h_invariant_mass_cut1_1 -> GetEntries());
	h_invariant_mass_cut1_2 -> Scale(MC_sigma_sig*L/n_entries_MC_sig);
	h_invariant_mass_cut1_3 -> Scale(MC_sigma_bkg*L/n_entries_MC_bkg);

	h_invariant_mass_cut1_3 -> Draw("hist");
	h_invariant_mass_cut1_1 -> Draw("E same");
	h_invariant_mass_cut1_2 -> Draw("hist same");


	auto* legend7 = new TLegend(0.6, 0.6, 0.7, 0.7);
	legend7 -> AddEntry(h_invariant_mass_cut1_1, "data", "l");
	legend7 -> AddEntry(h_invariant_mass_cut1_2, "MC-Signal", "l");
	legend7 -> AddEntry(h_invariant_mass_cut1_3, "MC-Background", "l");
	legend7 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting invariant mass after the second cut

	c.Clear();
  	TH1F * h_m_cut2_1 = (TH1F*)f1.Get("h_m_cut2");//we need data now!
  	TH1F * h_m_cut2_2 = (TH1F*)f2.Get("h_m_cut2");
  	TH1F * h_m_cut2_3 = (TH1F*)f3.Get("h_m_cut2");
  	gPad->SetLogy(1);
  	h_m_cut2_1->SetMaximum(1.e4);
  	h_m_cut2_1->SetMinimum(1.);
	//it is important to correctly normalize! (to initial number of events)
  	h_m_cut2_2->Scale(MC_sigma_sig*L/n_entries_MC_sig);
  	h_m_cut2_3->Scale(MC_sigma_bkg*L/n_entries_MC_bkg);
  	h_m_cut2_2->SetLineColor(1);
  	h_m_cut2_3->SetLineColor(2);
  	h_m_cut2_1->Draw("Pe");
  	h_m_cut2_2->Draw("hist same");
  	h_m_cut2_3->Draw("hist same");
  	c.SaveAs("plots.pdf");




	c.SaveAs("plots.pdf]");

}


/*

	//	Plotting mu_like variable

	TH1F *h_mu_like_1 = (TH1F*)f1.Get("h_mu_like");
	TH1F *h_mu_like_2 = (TH1F*)f2.Get("h_mu_like");
	TH1F *h_mu_like_3 = (TH1F*)f3.Get("h_mu_like");

	h_mu_like_1 -> SetLineColor(1);
	h_mu_like_2 -> SetLineColor(2);
	h_mu_like_3 -> SetLineColor(4);

	h_mu_like_1 -> Scale(1./h_mu_like_1 -> GetEntries());
	h_mu_like_2 -> Scale(1./h_mu_like_2 -> GetEntries());
	h_mu_like_3 -> Scale(1./h_mu_like_3 -> GetEntries());

	h_mu_like_1 -> Draw("hist");
	h_mu_like_2	-> Draw("hist same");
	h_mu_like_3	-> Draw("hist same");

	auto* legend1 = new TLegend(0.3, 0.3, 0.1, 0.1);
	legend1 -> AddEntry(h_mu_like_1, "data", "l");
	legend1 -> AddEntry(h_mu_like_2, "MC-Signal", "l");
	legend1 -> AddEntry(h_mu_like_3, "MC-Background", "l");
	legend1 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for muons

	c.Clear();

	TH1F *h_mu_like_muon_2 = (TH1F*)f2.Get("h_mu_like_muon");
	TH1F *h_mu_like_muon_3 = (TH1F*)f3.Get("h_mu_like_muon");

	h_mu_like_muon_2 -> SetLineColor(2);
	h_mu_like_muon_3 -> SetLineColor(4);

	h_mu_like_muon_2 -> Scale(1./h_mu_like_muon_2 -> GetEntries());
	h_mu_like_muon_3 -> Scale(1./h_mu_like_muon_3 -> GetEntries());

	h_mu_like_muon_2 -> Draw("hist");
	h_mu_like_muon_3 -> Draw("hist same");

	auto* legend2 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend2 -> AddEntry(h_mu_like_muon_2, "MC-Signal", "l");
	legend2 -> AddEntry(h_mu_like_muon_3, "MC-Background", "l");
	legend2 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for anti muons

	c.Clear();

	TH1F *h_mu_like_antimuon_2 = (TH1F*)f2.Get("h_mu_like_antimuon");
	TH1F *h_mu_like_antimuon_3 = (TH1F*)f3.Get("h_mu_like_antimuon");

	h_mu_like_antimuon_2 -> SetLineColor(2);
	h_mu_like_antimuon_3 -> SetLineColor(4);

	h_mu_like_antimuon_2 -> Scale(1./h_mu_like_antimuon_2 -> GetEntries());
	h_mu_like_antimuon_3 -> Scale(1./h_mu_like_antimuon_3 -> GetEntries());

	h_mu_like_antimuon_2 -> Draw("hist");
	h_mu_like_antimuon_3 -> Draw("hist same");

	auto* legend3 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend3 -> AddEntry(h_mu_like_antimuon_2, "MC-Signal", "l");
	legend3 -> AddEntry(h_mu_like_antimuon_3, "MC-Background", "l");
	legend3 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for not muons

	c.Clear();

	TH1F *h_mu_like_notmuon_2 = (TH1F*)f2.Get("h_mu_like_notmuon");
	TH1F *h_mu_like_notmuon_3 = (TH1F*)f3.Get("h_mu_like_notmuon");

	h_mu_like_notmuon_2 -> SetLineColor(2);
	h_mu_like_notmuon_3 -> SetLineColor(4);

	h_mu_like_notmuon_2 -> Scale(1./h_mu_like_notmuon_2 -> GetEntries());
	h_mu_like_notmuon_3 -> Scale(1./h_mu_like_notmuon_3 -> GetEntries());

	h_mu_like_notmuon_2 -> Draw("hist");
	h_mu_like_notmuon_3 -> Draw("hist same");

	auto* legend4 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend4 -> AddEntry(h_mu_like_notmuon_2, "MC-Signal", "l");
	legend4 -> AddEntry(h_mu_like_notmuon_3, "MC-Background", "l");
	legend4 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for muons and anti muons from MC-Signal

	c.Clear();

	h_mu_like_muon_2 -> Draw("hist E");
	h_mu_like_antimuon_2 -> Draw("hist E same");

	h_mu_like_antimuon_2 -> SetLineColor(2);
	h_mu_like_muon_2 -> SetLineColor(4);

	h_mu_like_antimuon_2 -> Scale(1./h_mu_like_antimuon_2 -> GetEntries());
	h_mu_like_muon_2 -> Scale(1./h_mu_like_muon_2 -> GetEntries());

	auto* legend5 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend5 -> AddEntry(h_mu_like_muon_2, "muon", "l");
	legend5 -> AddEntry(h_mu_like_antimuon_2, "antimuon", "l");
	legend5 -> Draw();

	c.SaveAs("plots.pdf");

	//	Plotting mu_like for muons+antimuons and nonmuons from MC-Signal

	c.Clear();	

	TH1F *h_mu_like_muon_pair_2 = (TH1F*)f2.Get("h_mu_like_muon_pair");

	h_mu_like_notmuon_2 -> Draw("hist");
	h_mu_like_muon_2 -> Draw("hist same");


	h_mu_like_notmuon_2 -> SetLineColor(2);
	h_mu_like_muon_2 -> SetLineColor(4);

	h_mu_like_notmuon_2 -> Scale(1./h_mu_like_notmuon_2 -> GetEntries());
	h_mu_like_muon_2 -> Scale(1./h_mu_like_muon_2 -> GetEntries());

	auto *legend6 = new TLegend(0.3, 0.3, 0.5, 0.5);
	legend6 -> AddEntry(h_mu_like_muon_2, "muon + antimuon", "l");
	legend6 -> AddEntry(h_mu_like_notmuon_2, "not muon", "l");
	legend6 -> Draw();

	c.SaveAs("plots.pdf");
*/