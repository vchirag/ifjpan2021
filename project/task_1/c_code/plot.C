void plot()
{
	TFile f("out.root");

	gStyle->SetOptStat(0); 

	TCanvas c;
	c.SaveAs("plots.pdf[");

	//	Part1, muon pull
	TH1F *h_obj_tpc_mupidpull_muon_part1 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_muon_part1");
	TH1F *h_obj_tpc_mupidpull_antimuon_part1	= (TH1F*)f.Get("h_obj_tpc_mupidpull_antimuon_part1");
	TH1F *h_obj_tpc_mupidpull_electron_part1 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_electron_part1");
	TH1F *h_obj_tpc_mupidpull_positron_part1 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_positron_part1");
	TH1F *h_obj_tpc_mupidpull_pionpos_part1 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionpos_part1");
	TH1F *h_obj_tpc_mupidpull_pionneg_part1 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionneg_part1");
	TH1F *h_obj_tpc_mupidpull_proton_part1 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_proton_part1");
	TH1F *h_obj_tpc_mupidpull_other_part1 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_other_part1");

	h_obj_tpc_mupidpull_muon_part1 		-> SetLineColor(1);
   	h_obj_tpc_mupidpull_antimuon_part1 	-> SetLineColor(2);
   	h_obj_tpc_mupidpull_pionpos_part1 	-> SetLineColor(3);
   	h_obj_tpc_mupidpull_pionneg_part1 	-> SetLineColor(4);
   	h_obj_tpc_mupidpull_electron_part1 	-> SetLineColor(5);
   	h_obj_tpc_mupidpull_positron_part1 	-> SetLineColor(6);
   	h_obj_tpc_mupidpull_proton_part1 	-> SetLineColor(7);
   	h_obj_tpc_mupidpull_other_part1 	-> SetLineColor(8);

   	h_obj_tpc_mupidpull_muon_part1 		-> Draw("hist");
   	h_obj_tpc_mupidpull_antimuon_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_other_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_proton_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_electron_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_positron_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_pionpos_part1 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_pionneg_part1 	-> Draw("hist same");

   	auto *legend1 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend1 -> AddEntry(h_obj_tpc_mupidpull_muon_part1,		"muon", 	"l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_antimuon_part1, "antimuon", "l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_pionpos_part1, 	"pion+", 	"l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_pionneg_part1, 	"pion-", 	"l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_electron_part1, "electron", "l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_positron_part1, "positron", "l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_proton_part1, 	"proton", 	"l");
   	legend1 -> AddEntry(h_obj_tpc_mupidpull_other_part1, 	"other", 	"l");

   	legend1 -> Draw();
   	c.SaveAs("plots.pdf");

   	
   	//	Part 1, electron pull
   	c.Clear();
	
	TH1F *h_obj_tpc_elpidpull_muon_part1 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_muon_part1");
	TH1F *h_obj_tpc_elpidpull_antimuon_part1	= (TH1F*)f.Get("h_obj_tpc_elpidpull_antimuon_part1");
	TH1F *h_obj_tpc_elpidpull_electron_part1 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_electron_part1");
	TH1F *h_obj_tpc_elpidpull_positron_part1 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_positron_part1");
	TH1F *h_obj_tpc_elpidpull_pionpos_part1 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionpos_part1");
	TH1F *h_obj_tpc_elpidpull_pionneg_part1 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionneg_part1");
	TH1F *h_obj_tpc_elpidpull_proton_part1 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_proton_part1");
	TH1F *h_obj_tpc_elpidpull_other_part1 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_other_part1");

	h_obj_tpc_elpidpull_muon_part1 		-> SetLineColor(1);
   	h_obj_tpc_elpidpull_antimuon_part1 	-> SetLineColor(2);
   	h_obj_tpc_elpidpull_pionpos_part1 	-> SetLineColor(3);
   	h_obj_tpc_elpidpull_pionneg_part1 	-> SetLineColor(4);
   	h_obj_tpc_elpidpull_electron_part1 	-> SetLineColor(5);
   	h_obj_tpc_elpidpull_positron_part1 	-> SetLineColor(6);
   	h_obj_tpc_elpidpull_proton_part1 	-> SetLineColor(7);
   	h_obj_tpc_elpidpull_other_part1 	-> SetLineColor(8);

   	h_obj_tpc_elpidpull_electron_part1 	-> Draw("hist");
   	h_obj_tpc_elpidpull_muon_part1 		-> Draw("hist same");
   	h_obj_tpc_elpidpull_antimuon_part1 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_other_part1 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_proton_part1 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_positron_part1 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionpos_part1 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionneg_part1 	-> Draw("hist same");

   	auto *legend2 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend2 -> AddEntry(h_obj_tpc_elpidpull_muon_part1,		"muon", 	"l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_antimuon_part1, "antimuon", "l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_pionpos_part1, 	"pion+", 	"l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_pionneg_part1, 	"pion-", 	"l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_electron_part1, "electron", "l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_positron_part1, "positron", "l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_proton_part1, 	"proton", 	"l");
   	legend2 -> AddEntry(h_obj_tpc_elpidpull_other_part1, 	"other", 	"l");

   	legend2 -> Draw();
   	c.SaveAs("plots.pdf");

    	//	Part 1, proton pull
   	c.Clear();
	
	TH1F *h_obj_tpc_prpidpull_muon_part1 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_muon_part1");
	TH1F *h_obj_tpc_prpidpull_antimuon_part1	= (TH1F*)f.Get("h_obj_tpc_prpidpull_antimuon_part1");
	TH1F *h_obj_tpc_prpidpull_electron_part1 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_electron_part1");
	TH1F *h_obj_tpc_prpidpull_positron_part1 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_positron_part1");
	TH1F *h_obj_tpc_prpidpull_pionpos_part1 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionpos_part1");
	TH1F *h_obj_tpc_prpidpull_pionneg_part1 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionneg_part1");
	TH1F *h_obj_tpc_prpidpull_proton_part1 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_proton_part1");
	TH1F *h_obj_tpc_prpidpull_other_part1 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_other_part1");

	h_obj_tpc_prpidpull_muon_part1 		-> SetLineColor(1);
   	h_obj_tpc_prpidpull_antimuon_part1 	-> SetLineColor(2);
   	h_obj_tpc_prpidpull_pionpos_part1 	-> SetLineColor(3);
   	h_obj_tpc_prpidpull_pionneg_part1 	-> SetLineColor(4);
   	h_obj_tpc_prpidpull_electron_part1 	-> SetLineColor(5);
   	h_obj_tpc_prpidpull_positron_part1 	-> SetLineColor(6);
   	h_obj_tpc_prpidpull_proton_part1 	-> SetLineColor(7);
   	h_obj_tpc_prpidpull_other_part1 	-> SetLineColor(8);

   	h_obj_tpc_prpidpull_muon_part1 		-> Draw("hist");
   	h_obj_tpc_prpidpull_electron_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_antimuon_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_other_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_proton_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_positron_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionpos_part1 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionneg_part1 	-> Draw("hist same");

   	auto *legend3 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend3 -> AddEntry(h_obj_tpc_prpidpull_muon_part1,		"muon", 	"l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_antimuon_part1, "antimuon", "l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_pionpos_part1, 	"pion+", 	"l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_pionneg_part1, 	"pion-", 	"l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_electron_part1, "electron", "l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_positron_part1, "positron", "l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_proton_part1, 	"proton", 	"l");
   	legend3 -> AddEntry(h_obj_tpc_prpidpull_other_part1, 	"other", 	"l");

   	legend3 -> Draw();
   	c.SaveAs("plots.pdf");

     	//	Part 1, pion pull
   	c.Clear();
	
	TH1F *h_obj_tpc_pipidpull_muon_part1 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_muon_part1");
	TH1F *h_obj_tpc_pipidpull_antimuon_part1	= (TH1F*)f.Get("h_obj_tpc_pipidpull_antimuon_part1");
	TH1F *h_obj_tpc_pipidpull_electron_part1 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_electron_part1");
	TH1F *h_obj_tpc_pipidpull_positron_part1 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_positron_part1");
	TH1F *h_obj_tpc_pipidpull_pionpos_part1 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionpos_part1");
	TH1F *h_obj_tpc_pipidpull_pionneg_part1 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionneg_part1");
	TH1F *h_obj_tpc_pipidpull_proton_part1 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_proton_part1");
	TH1F *h_obj_tpc_pipidpull_other_part1 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_other_part1");

	h_obj_tpc_pipidpull_muon_part1 		-> SetLineColor(1);
   	h_obj_tpc_pipidpull_antimuon_part1 	-> SetLineColor(2);
   	h_obj_tpc_pipidpull_pionpos_part1 	-> SetLineColor(3);
   	h_obj_tpc_pipidpull_pionneg_part1 	-> SetLineColor(4);
   	h_obj_tpc_pipidpull_electron_part1 	-> SetLineColor(5);
   	h_obj_tpc_pipidpull_positron_part1 	-> SetLineColor(6);
   	h_obj_tpc_pipidpull_proton_part1 	-> SetLineColor(7);
   	h_obj_tpc_pipidpull_other_part1 	-> SetLineColor(8);

   	h_obj_tpc_pipidpull_muon_part1 		-> Draw("hist");
   	h_obj_tpc_pipidpull_electron_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_antimuon_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_other_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_proton_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_positron_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_pionpos_part1 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_pionneg_part1 	-> Draw("hist same");

   	auto *legend4 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend4 -> AddEntry(h_obj_tpc_pipidpull_muon_part1,		"muon", 	"l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_antimuon_part1, "antimuon", "l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_pionpos_part1, 	"pion+", 	"l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_pionneg_part1, 	"pion-", 	"l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_electron_part1, "electron", "l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_positron_part1, "positron", "l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_proton_part1, 	"proton", 	"l");
   	legend4 -> AddEntry(h_obj_tpc_pipidpull_other_part1, 	"other", 	"l");

   	legend4 -> Draw();
   	c.SaveAs("plots.pdf");	

/*	*****************************************************************************
	*****************************************************************************
	*****************************************************************************	*/

	//	Part2, muon pull
	c.Clear();

	TH1F *h_obj_tpc_mupidpull_muon_part2 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_muon_part2");
	TH1F *h_obj_tpc_mupidpull_antimuon_part2	= (TH1F*)f.Get("h_obj_tpc_mupidpull_antimuon_part2");
	TH1F *h_obj_tpc_mupidpull_electron_part2 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_electron_part2");
	TH1F *h_obj_tpc_mupidpull_positron_part2 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_positron_part2");
	TH1F *h_obj_tpc_mupidpull_pionpos_part2 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionpos_part2");
	TH1F *h_obj_tpc_mupidpull_pionneg_part2 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionneg_part2");
	TH1F *h_obj_tpc_mupidpull_proton_part2 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_proton_part2");
	TH1F *h_obj_tpc_mupidpull_other_part2 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_other_part2");

	h_obj_tpc_mupidpull_muon_part2 		-> SetLineColor(1);
   	h_obj_tpc_mupidpull_antimuon_part2 	-> SetLineColor(2);
   	h_obj_tpc_mupidpull_pionpos_part2 	-> SetLineColor(3);
   	h_obj_tpc_mupidpull_pionneg_part2 	-> SetLineColor(4);
   	h_obj_tpc_mupidpull_electron_part2 	-> SetLineColor(5);
   	h_obj_tpc_mupidpull_positron_part2 	-> SetLineColor(6);
   	h_obj_tpc_mupidpull_proton_part2 	-> SetLineColor(7);
   	h_obj_tpc_mupidpull_other_part2 	-> SetLineColor(8);

   	h_obj_tpc_mupidpull_muon_part2		-> Draw("hist");
   	h_obj_tpc_mupidpull_antimuon_part2 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_other_part2 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_proton_part2	-> Draw("hist same");
   	h_obj_tpc_mupidpull_electron_part2 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_positron_part2 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_pionpos_part2 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_pionneg_part2 	-> Draw("hist same");

   	auto *legend5 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend5 -> AddEntry(h_obj_tpc_mupidpull_muon_part2,		"muon", 	"l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_antimuon_part2, "antimuon", "l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_pionpos_part2, 	"pion+", 	"l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_pionneg_part2, 	"pion-", 	"l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_electron_part2, "electron", "l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_positron_part2, "positron", "l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_proton_part2, 	"proton", 	"l");
   	legend5 -> AddEntry(h_obj_tpc_mupidpull_other_part2, 	"other", 	"l");

   	legend5 -> Draw();
   	c.SaveAs("plots.pdf");

   	
   	//	Part 2, electron pull
   	c.Clear();
	
	TH1F *h_obj_tpc_elpidpull_muon_part2 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_muon_part2");
	TH1F *h_obj_tpc_elpidpull_antimuon_part2	= (TH1F*)f.Get("h_obj_tpc_elpidpull_antimuon_part2");
	TH1F *h_obj_tpc_elpidpull_electron_part2 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_electron_part2");
	TH1F *h_obj_tpc_elpidpull_positron_part2 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_positron_part2");
	TH1F *h_obj_tpc_elpidpull_pionpos_part2 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionpos_part2");
	TH1F *h_obj_tpc_elpidpull_pionneg_part2 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionneg_part2");
	TH1F *h_obj_tpc_elpidpull_proton_part2 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_proton_part2");
	TH1F *h_obj_tpc_elpidpull_other_part2 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_other_part2");

	h_obj_tpc_elpidpull_muon_part2 		-> SetLineColor(1);
   	h_obj_tpc_elpidpull_antimuon_part2 	-> SetLineColor(2);
   	h_obj_tpc_elpidpull_pionpos_part2 	-> SetLineColor(3);
   	h_obj_tpc_elpidpull_pionneg_part2 	-> SetLineColor(4);
   	h_obj_tpc_elpidpull_electron_part2 	-> SetLineColor(5);
   	h_obj_tpc_elpidpull_positron_part2 	-> SetLineColor(6);
   	h_obj_tpc_elpidpull_proton_part2 	-> SetLineColor(7);
   	h_obj_tpc_elpidpull_other_part2 	-> SetLineColor(8);

   	h_obj_tpc_elpidpull_electron_part2 	-> Draw("hist");
   	h_obj_tpc_elpidpull_muon_part2 		-> Draw("hist same");
   	h_obj_tpc_elpidpull_antimuon_part2 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_other_part2 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_proton_part2 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_positron_part2 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionpos_part2 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionneg_part2 	-> Draw("hist same");

   	auto *legend6 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend6 -> AddEntry(h_obj_tpc_elpidpull_muon_part2,		"muon", 	"l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_antimuon_part2, "antimuon", "l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_pionpos_part2, 	"pion+", 	"l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_pionneg_part2, 	"pion-", 	"l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_electron_part2, "electron", "l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_positron_part2, "positron", "l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_proton_part2, 	"proton", 	"l");
   	legend6 -> AddEntry(h_obj_tpc_elpidpull_other_part2, 	"other", 	"l");

   	legend6 -> Draw();
   	c.SaveAs("plots.pdf");

    	//	Part 2, proton pull
   	c.Clear();
	
	TH1F *h_obj_tpc_prpidpull_muon_part2 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_muon_part2");
	TH1F *h_obj_tpc_prpidpull_antimuon_part2	= (TH1F*)f.Get("h_obj_tpc_prpidpull_antimuon_part2");
	TH1F *h_obj_tpc_prpidpull_electron_part2 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_electron_part2");
	TH1F *h_obj_tpc_prpidpull_positron_part2 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_positron_part2");
	TH1F *h_obj_tpc_prpidpull_pionpos_part2 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionpos_part2");
	TH1F *h_obj_tpc_prpidpull_pionneg_part2 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionneg_part2");
	TH1F *h_obj_tpc_prpidpull_proton_part2		= (TH1F*)f.Get("h_obj_tpc_prpidpull_proton_part2");
	TH1F *h_obj_tpc_prpidpull_other_part2 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_other_part2");

	h_obj_tpc_prpidpull_muon_part2 		-> SetLineColor(1);
   	h_obj_tpc_prpidpull_antimuon_part2 	-> SetLineColor(2);
   	h_obj_tpc_prpidpull_pionpos_part2 	-> SetLineColor(3);
   	h_obj_tpc_prpidpull_pionneg_part2 	-> SetLineColor(4);
   	h_obj_tpc_prpidpull_electron_part2 	-> SetLineColor(5);
   	h_obj_tpc_prpidpull_positron_part2 	-> SetLineColor(6);
   	h_obj_tpc_prpidpull_proton_part2 	-> SetLineColor(7);
   	h_obj_tpc_prpidpull_other_part2 	-> SetLineColor(8);

   	h_obj_tpc_prpidpull_proton_part2 	-> Draw("hist");
   	h_obj_tpc_prpidpull_muon_part2 		-> Draw("hist same");
   	h_obj_tpc_prpidpull_electron_part2 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_antimuon_part2 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_other_part2 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_positron_part2 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionpos_part2 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionneg_part2 	-> Draw("hist same");

   	auto *legend7 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend7 -> AddEntry(h_obj_tpc_prpidpull_muon_part2,		"muon", 	"l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_antimuon_part2, "antimuon", "l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_pionpos_part2, 	"pion+", 	"l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_pionneg_part2, 	"pion-", 	"l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_electron_part2, "electron", "l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_positron_part2, "positron", "l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_proton_part2, 	"proton", 	"l");
   	legend7 -> AddEntry(h_obj_tpc_prpidpull_other_part2, 	"other", 	"l");

   	legend2 -> Draw();
   	c.SaveAs("plots.pdf");

     	//	Part 2, pion pull
   	c.Clear();
	
	TH1F *h_obj_tpc_pipidpull_muon_part2 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_muon_part2");
	TH1F *h_obj_tpc_pipidpull_antimuon_part2	= (TH1F*)f.Get("h_obj_tpc_pipidpull_antimuon_part2");
	TH1F *h_obj_tpc_pipidpull_electron_part2 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_electron_part2");
	TH1F *h_obj_tpc_pipidpull_positron_part2 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_positron_part2");
	TH1F *h_obj_tpc_pipidpull_pionpos_part2 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionpos_part2");
	TH1F *h_obj_tpc_pipidpull_pionneg_part2 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionneg_part2");
	TH1F *h_obj_tpc_pipidpull_proton_part2 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_proton_part2");
	TH1F *h_obj_tpc_pipidpull_other_part2 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_other_part2");

	h_obj_tpc_pipidpull_muon_part2		-> SetLineColor(1);
   	h_obj_tpc_pipidpull_antimuon_part2 	-> SetLineColor(2);
   	h_obj_tpc_pipidpull_pionpos_part2 	-> SetLineColor(3);
   	h_obj_tpc_pipidpull_pionneg_part2 	-> SetLineColor(4);
   	h_obj_tpc_pipidpull_electron_part2 	-> SetLineColor(5);
   	h_obj_tpc_pipidpull_positron_part2	-> SetLineColor(6);
   	h_obj_tpc_pipidpull_proton_part2 	-> SetLineColor(7);
   	h_obj_tpc_pipidpull_other_part2 	-> SetLineColor(8);

   	h_obj_tpc_pipidpull_muon_part2 		-> Draw("hist");
   	h_obj_tpc_pipidpull_electron_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_antimuon_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_other_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_proton_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_positron_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_pionpos_part2 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_pionneg_part2 	-> Draw("hist same");

   	auto *legend8 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend8 -> AddEntry(h_obj_tpc_pipidpull_muon_part2,		"muon", 	"l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_antimuon_part2, "antimuon", "l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_pionpos_part2, 	"pion+", 	"l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_pionneg_part2, 	"pion-", 	"l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_electron_part2, "electron", "l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_positron_part2, "positron", "l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_proton_part2, 	"proton", 	"l");
   	legend8 -> AddEntry(h_obj_tpc_pipidpull_other_part2, 	"other", 	"l");

   	legend8 -> Draw();
   	c.SaveAs("plots.pdf");

/*	*****************************************************************************
	*****************************************************************************
	*****************************************************************************	*/

	//	Part3 sub1, muon pull
	c.Clear();

	TH1F *h_obj_tpc_mupidpull_muon_part31 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_muon_part31");
	TH1F *h_obj_tpc_mupidpull_antimuon_part31	= (TH1F*)f.Get("h_obj_tpc_mupidpull_antimuon_part31");
	TH1F *h_obj_tpc_mupidpull_electron_part31 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_electron_part31");
	TH1F *h_obj_tpc_mupidpull_positron_part31 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_positron_part31");
	TH1F *h_obj_tpc_mupidpull_pionpos_part31	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionpos_part31");
	TH1F *h_obj_tpc_mupidpull_pionneg_part31 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionneg_part31");
	TH1F *h_obj_tpc_mupidpull_proton_part31 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_proton_part31");
	TH1F *h_obj_tpc_mupidpull_other_part31 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_other_part31");

	h_obj_tpc_mupidpull_muon_part31 	-> SetLineColor(1);
   	h_obj_tpc_mupidpull_antimuon_part31 -> SetLineColor(2);
   	h_obj_tpc_mupidpull_pionpos_part31 	-> SetLineColor(3);
   	h_obj_tpc_mupidpull_pionneg_part31 	-> SetLineColor(4);
   	h_obj_tpc_mupidpull_electron_part31 -> SetLineColor(5);
   	h_obj_tpc_mupidpull_positron_part31 -> SetLineColor(6);
   	h_obj_tpc_mupidpull_proton_part31 	-> SetLineColor(7);
   	h_obj_tpc_mupidpull_other_part31 	-> SetLineColor(8);

   	h_obj_tpc_mupidpull_pionpos_part31 	-> Draw("hist");
   	h_obj_tpc_mupidpull_muon_part31		-> Draw("hist same");
   	h_obj_tpc_mupidpull_antimuon_part31 -> Draw("hist same");
   	h_obj_tpc_mupidpull_other_part31 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_proton_part31	-> Draw("hist same");
   	h_obj_tpc_mupidpull_electron_part31 -> Draw("hist same");
   	h_obj_tpc_mupidpull_positron_part31 -> Draw("hist same");
   	h_obj_tpc_mupidpull_pionneg_part31 	-> Draw("hist same");

   	auto *legend9 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend9 -> AddEntry(h_obj_tpc_mupidpull_muon_part31,	"muon", 	"l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_antimuon_part31,"antimuon", "l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_pionpos_part31, "pion+", 	"l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_pionneg_part31, "pion-", 	"l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_electron_part31,"electron", "l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_positron_part31,"positron", "l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_proton_part31, 	"proton", 	"l");
   	legend9 -> AddEntry(h_obj_tpc_mupidpull_other_part31, 	"other", 	"l");

   	legend9 -> Draw();
   	c.SaveAs("plots.pdf");

   	
   	//	Part 3 sub 1, electron pull
   	c.Clear();
	
	TH1F *h_obj_tpc_elpidpull_muon_part31 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_muon_part31");
	TH1F *h_obj_tpc_elpidpull_antimuon_part31	= (TH1F*)f.Get("h_obj_tpc_elpidpull_antimuon_part31");
	TH1F *h_obj_tpc_elpidpull_electron_part31 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_electron_part31");
	TH1F *h_obj_tpc_elpidpull_positron_part31 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_positron_part31");
	TH1F *h_obj_tpc_elpidpull_pionpos_part31 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionpos_part31");
	TH1F *h_obj_tpc_elpidpull_pionneg_part31 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionneg_part31");
	TH1F *h_obj_tpc_elpidpull_proton_part31		= (TH1F*)f.Get("h_obj_tpc_elpidpull_proton_part31");
	TH1F *h_obj_tpc_elpidpull_other_part31 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_other_part31");

	h_obj_tpc_elpidpull_muon_part31 	-> SetLineColor(1);
   	h_obj_tpc_elpidpull_antimuon_part31 -> SetLineColor(2);
   	h_obj_tpc_elpidpull_pionpos_part31 	-> SetLineColor(3);
   	h_obj_tpc_elpidpull_pionneg_part31 	-> SetLineColor(4);
   	h_obj_tpc_elpidpull_electron_part31 -> SetLineColor(5);
   	h_obj_tpc_elpidpull_positron_part31 -> SetLineColor(6);
   	h_obj_tpc_elpidpull_proton_part31 	-> SetLineColor(7);
   	h_obj_tpc_elpidpull_other_part31 	-> SetLineColor(8);

   	h_obj_tpc_elpidpull_positron_part31 -> Draw("hist");
   	h_obj_tpc_elpidpull_electron_part31 -> Draw("hist same");
   	h_obj_tpc_elpidpull_muon_part31 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_antimuon_part31 -> Draw("hist same");
   	h_obj_tpc_elpidpull_other_part31 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_proton_part31 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionpos_part31 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionneg_part31 	-> Draw("hist same");

   	auto *legend10 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend10 -> AddEntry(h_obj_tpc_elpidpull_muon_part31,		"muon", 	"l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_antimuon_part31, 	"antimuon", "l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_pionpos_part31, 	"pion+", 	"l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_pionneg_part31, 	"pion-", 	"l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_electron_part31, 	"electron", "l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_positron_part31, 	"positron", "l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_proton_part31, 	"proton", 	"l");
   	legend10 -> AddEntry(h_obj_tpc_elpidpull_other_part31, 		"other", 	"l");

   	legend10 -> Draw();
   	c.SaveAs("plots.pdf");

    	//	Part 3 sub 1, proton pull
   	c.Clear();
	
	TH1F *h_obj_tpc_prpidpull_muon_part31 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_muon_part31");
	TH1F *h_obj_tpc_prpidpull_antimuon_part31	= (TH1F*)f.Get("h_obj_tpc_prpidpull_antimuon_part31");
	TH1F *h_obj_tpc_prpidpull_electron_part31 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_electron_part31");
	TH1F *h_obj_tpc_prpidpull_positron_part31 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_positron_part31");
	TH1F *h_obj_tpc_prpidpull_pionpos_part31 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionpos_part31");
	TH1F *h_obj_tpc_prpidpull_pionneg_part31 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionneg_part31");
	TH1F *h_obj_tpc_prpidpull_proton_part31		= (TH1F*)f.Get("h_obj_tpc_prpidpull_proton_part31");
	TH1F *h_obj_tpc_prpidpull_other_part31 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_other_part31");

	h_obj_tpc_prpidpull_muon_part31 	-> SetLineColor(1);
   	h_obj_tpc_prpidpull_antimuon_part31 -> SetLineColor(2);
   	h_obj_tpc_prpidpull_pionpos_part31 	-> SetLineColor(3);
   	h_obj_tpc_prpidpull_pionneg_part31 	-> SetLineColor(4);
   	h_obj_tpc_prpidpull_electron_part31 -> SetLineColor(5);
   	h_obj_tpc_prpidpull_positron_part31 -> SetLineColor(6);
   	h_obj_tpc_prpidpull_proton_part31	-> SetLineColor(7);
   	h_obj_tpc_prpidpull_other_part31 	-> SetLineColor(8);

   	h_obj_tpc_prpidpull_proton_part31 	-> Draw("hist");
   	h_obj_tpc_prpidpull_muon_part31 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_electron_part31 -> Draw("hist same");
   	h_obj_tpc_prpidpull_antimuon_part31 -> Draw("hist same");
   	h_obj_tpc_prpidpull_other_part31 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_positron_part31 -> Draw("hist same");
   	h_obj_tpc_prpidpull_pionpos_part31 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionneg_part31 	-> Draw("hist same");

   	auto *legend11 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend11 -> AddEntry(h_obj_tpc_prpidpull_muon_part31,		"muon", 	"l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_antimuon_part31, 	"antimuon", "l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_pionpos_part31, 	"pion+", 	"l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_pionneg_part31, 	"pion-", 	"l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_electron_part31, 	"electron", "l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_positron_part31, 	"positron", "l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_proton_part31, 	"proton", 	"l");
   	legend11 -> AddEntry(h_obj_tpc_prpidpull_other_part31, 		"other", 	"l");

   	legend11 -> Draw();
   	c.SaveAs("plots.pdf");

     	//	Part 3 sub 1, pion pull
   	c.Clear();
	
	TH1F *h_obj_tpc_pipidpull_muon_part31 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_muon_part31");
	TH1F *h_obj_tpc_pipidpull_antimuon_part31	= (TH1F*)f.Get("h_obj_tpc_pipidpull_antimuon_part31");
	TH1F *h_obj_tpc_pipidpull_electron_part31 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_electron_part31");
	TH1F *h_obj_tpc_pipidpull_positron_part31 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_positron_part31");
	TH1F *h_obj_tpc_pipidpull_pionpos_part31 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionpos_part31");
	TH1F *h_obj_tpc_pipidpull_pionneg_part31 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionneg_part31");
	TH1F *h_obj_tpc_pipidpull_proton_part31 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_proton_part31");
	TH1F *h_obj_tpc_pipidpull_other_part31		= (TH1F*)f.Get("h_obj_tpc_pipidpull_other_part31");

	h_obj_tpc_pipidpull_muon_part31		-> SetLineColor(1);
   	h_obj_tpc_pipidpull_antimuon_part31 -> SetLineColor(2);
   	h_obj_tpc_pipidpull_pionpos_part31 	-> SetLineColor(3);
   	h_obj_tpc_pipidpull_pionneg_part31 	-> SetLineColor(4);
   	h_obj_tpc_pipidpull_electron_part31 -> SetLineColor(5);
   	h_obj_tpc_pipidpull_positron_part31	-> SetLineColor(6);
   	h_obj_tpc_pipidpull_proton_part31 	-> SetLineColor(7);
   	h_obj_tpc_pipidpull_other_part31 	-> SetLineColor(8);

   	h_obj_tpc_pipidpull_pionpos_part31 	-> Draw("hist");
   	h_obj_tpc_pipidpull_muon_part31 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_electron_part31 -> Draw("hist same");
   	h_obj_tpc_pipidpull_antimuon_part31 -> Draw("hist same");
   	h_obj_tpc_pipidpull_other_part31 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_proton_part31 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_positron_part31 -> Draw("hist same");
   	h_obj_tpc_pipidpull_pionneg_part31 	-> Draw("hist same");

   	auto *legend12 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend12 -> AddEntry(h_obj_tpc_pipidpull_muon_part31,		"muon", 	"l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_antimuon_part31, 	"antimuon", "l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_pionpos_part31, 	"pion+", 	"l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_pionneg_part31, 	"pion-", 	"l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_electron_part31, 	"electron", "l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_positron_part31, 	"positron", "l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_proton_part31, 	"proton", 	"l");
   	legend12 -> AddEntry(h_obj_tpc_pipidpull_other_part31, 		"other", 	"l");

   	legend12 -> Draw();
   	c.SaveAs("plots.pdf");

/*	*****************************************************************************
	*****************************************************************************
	*****************************************************************************	*/

	//	Part3 sub2, muon pull
	c.Clear();

	TH1F *h_obj_tpc_mupidpull_muon_part32 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_muon_part32");
	TH1F *h_obj_tpc_mupidpull_antimuon_part32	= (TH1F*)f.Get("h_obj_tpc_mupidpull_antimuon_part32");
	TH1F *h_obj_tpc_mupidpull_electron_part32 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_electron_part32");
	TH1F *h_obj_tpc_mupidpull_positron_part32 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_positron_part32");
	TH1F *h_obj_tpc_mupidpull_pionpos_part32	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionpos_part32");
	TH1F *h_obj_tpc_mupidpull_pionneg_part32 	= (TH1F*)f.Get("h_obj_tpc_mupidpull_pionneg_part32");
	TH1F *h_obj_tpc_mupidpull_proton_part32		= (TH1F*)f.Get("h_obj_tpc_mupidpull_proton_part32");
	TH1F *h_obj_tpc_mupidpull_other_part32 		= (TH1F*)f.Get("h_obj_tpc_mupidpull_other_part32");

	h_obj_tpc_mupidpull_muon_part32 	-> SetLineColor(1);
   	h_obj_tpc_mupidpull_antimuon_part32 -> SetLineColor(2);
   	h_obj_tpc_mupidpull_pionpos_part32 	-> SetLineColor(3);
   	h_obj_tpc_mupidpull_pionneg_part32 	-> SetLineColor(4);
   	h_obj_tpc_mupidpull_electron_part32 -> SetLineColor(5);
   	h_obj_tpc_mupidpull_positron_part32 -> SetLineColor(6);
   	h_obj_tpc_mupidpull_proton_part32 	-> SetLineColor(7);
   	h_obj_tpc_mupidpull_other_part32 	-> SetLineColor(8);

   	h_obj_tpc_mupidpull_muon_part32		-> Draw("hist");
   	h_obj_tpc_mupidpull_pionpos_part32 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_antimuon_part32 -> Draw("hist same");
   	h_obj_tpc_mupidpull_other_part32 	-> Draw("hist same");
   	h_obj_tpc_mupidpull_proton_part32	-> Draw("hist same");
   	h_obj_tpc_mupidpull_electron_part32 -> Draw("hist same");
   	h_obj_tpc_mupidpull_positron_part32 -> Draw("hist same");
   	h_obj_tpc_mupidpull_pionneg_part32 	-> Draw("hist same");

   	auto *legend13 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend13 -> AddEntry(h_obj_tpc_mupidpull_muon_part32,		"muon", 	"l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_antimuon_part32, 	"antimuon", "l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_pionpos_part32, 	"pion+", 	"l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_pionneg_part32, 	"pion-", 	"l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_electron_part32, 	"electron", "l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_positron_part32, 	"positron", "l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_proton_part32, 	"proton", 	"l");
   	legend13 -> AddEntry(h_obj_tpc_mupidpull_other_part32, 		"other", 	"l");

   	legend13 -> Draw();
   	c.SaveAs("plots.pdf");

   	
   	//	Part 3 sub 2, electron pull
   	c.Clear();
	
	TH1F *h_obj_tpc_elpidpull_muon_part32 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_muon_part32");
	TH1F *h_obj_tpc_elpidpull_antimuon_part32	= (TH1F*)f.Get("h_obj_tpc_elpidpull_antimuon_part32");
	TH1F *h_obj_tpc_elpidpull_electron_part32 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_electron_part32");
	TH1F *h_obj_tpc_elpidpull_positron_part32 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_positron_part32");
	TH1F *h_obj_tpc_elpidpull_pionpos_part32 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionpos_part32");
	TH1F *h_obj_tpc_elpidpull_pionneg_part32 	= (TH1F*)f.Get("h_obj_tpc_elpidpull_pionneg_part32");
	TH1F *h_obj_tpc_elpidpull_proton_part32		= (TH1F*)f.Get("h_obj_tpc_elpidpull_proton_part32");
	TH1F *h_obj_tpc_elpidpull_other_part32 		= (TH1F*)f.Get("h_obj_tpc_elpidpull_other_part32");

	h_obj_tpc_elpidpull_muon_part32 	-> SetLineColor(1);
   	h_obj_tpc_elpidpull_antimuon_part32 -> SetLineColor(2);
   	h_obj_tpc_elpidpull_pionpos_part32 	-> SetLineColor(3);
   	h_obj_tpc_elpidpull_pionneg_part32 	-> SetLineColor(4);
   	h_obj_tpc_elpidpull_electron_part32 -> SetLineColor(5);
   	h_obj_tpc_elpidpull_positron_part32 -> SetLineColor(6);
   	h_obj_tpc_elpidpull_proton_part32 	-> SetLineColor(7);
   	h_obj_tpc_elpidpull_other_part32 	-> SetLineColor(8);

   	h_obj_tpc_elpidpull_muon_part32 	-> Draw("hist");
   	h_obj_tpc_elpidpull_positron_part32 -> Draw("hist same");
   	h_obj_tpc_elpidpull_electron_part32 -> Draw("hist same");
   	h_obj_tpc_elpidpull_antimuon_part32 -> Draw("hist same");
   	h_obj_tpc_elpidpull_other_part32 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_proton_part32 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionpos_part32 	-> Draw("hist same");
   	h_obj_tpc_elpidpull_pionneg_part32 	-> Draw("hist same");

   	auto *legend14 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend14 -> AddEntry(h_obj_tpc_elpidpull_muon_part32,		"muon", 	"l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_antimuon_part32, 	"antimuon", "l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_pionpos_part32, 	"pion+", 	"l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_pionneg_part32, 	"pion-", 	"l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_electron_part32, 	"electron", "l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_positron_part32, 	"positron", "l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_proton_part32, 	"proton", 	"l");
   	legend14 -> AddEntry(h_obj_tpc_elpidpull_other_part32, 		"other", 	"l");

   	legend14 -> Draw();
   	c.SaveAs("plots.pdf");

    	//	Part 3 sub 2, proton pull
   	c.Clear();
	
	TH1F *h_obj_tpc_prpidpull_muon_part32 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_muon_part32");
	TH1F *h_obj_tpc_prpidpull_antimuon_part32	= (TH1F*)f.Get("h_obj_tpc_prpidpull_antimuon_part32");
	TH1F *h_obj_tpc_prpidpull_electron_part32 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_electron_part32");
	TH1F *h_obj_tpc_prpidpull_positron_part32 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_positron_part32");
	TH1F *h_obj_tpc_prpidpull_pionpos_part32 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionpos_part32");
	TH1F *h_obj_tpc_prpidpull_pionneg_part32 	= (TH1F*)f.Get("h_obj_tpc_prpidpull_pionneg_part32");
	TH1F *h_obj_tpc_prpidpull_proton_part32		= (TH1F*)f.Get("h_obj_tpc_prpidpull_proton_part32");
	TH1F *h_obj_tpc_prpidpull_other_part32 		= (TH1F*)f.Get("h_obj_tpc_prpidpull_other_part32");

	h_obj_tpc_prpidpull_muon_part32 	-> SetLineColor(1);
   	h_obj_tpc_prpidpull_antimuon_part32 -> SetLineColor(2);
   	h_obj_tpc_prpidpull_pionpos_part32 	-> SetLineColor(3);
   	h_obj_tpc_prpidpull_pionneg_part32 	-> SetLineColor(4);
   	h_obj_tpc_prpidpull_electron_part32 -> SetLineColor(5);
   	h_obj_tpc_prpidpull_positron_part32 -> SetLineColor(6);
   	h_obj_tpc_prpidpull_proton_part32	-> SetLineColor(7);
   	h_obj_tpc_prpidpull_other_part32 	-> SetLineColor(8);

   	h_obj_tpc_prpidpull_muon_part32 	-> Draw("hist");
   	h_obj_tpc_prpidpull_proton_part32 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_electron_part32 -> Draw("hist same");
   	h_obj_tpc_prpidpull_antimuon_part32 -> Draw("hist same");
   	h_obj_tpc_prpidpull_other_part32 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_positron_part32 -> Draw("hist same");
   	h_obj_tpc_prpidpull_pionpos_part32 	-> Draw("hist same");
   	h_obj_tpc_prpidpull_pionneg_part32 	-> Draw("hist same");

   	auto *legend15 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend15 -> AddEntry(h_obj_tpc_prpidpull_muon_part32,		"muon", 	"l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_antimuon_part32, 	"antimuon", "l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_pionpos_part32, 	"pion+", 	"l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_pionneg_part32, 	"pion-", 	"l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_electron_part32, 	"electron", "l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_positron_part32, 	"positron", "l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_proton_part32, 	"proton", 	"l");
   	legend15 -> AddEntry(h_obj_tpc_prpidpull_other_part32, 		"other", 	"l");

   	legend15 -> Draw();
   	c.SaveAs("plots.pdf");

     	//	Part 3 sub 1, pion pull
   	c.Clear();
	
	TH1F *h_obj_tpc_pipidpull_muon_part32 		= (TH1F*)f.Get("h_obj_tpc_pipidpull_muon_part32");
	TH1F *h_obj_tpc_pipidpull_antimuon_part32	= (TH1F*)f.Get("h_obj_tpc_pipidpull_antimuon_part32");
	TH1F *h_obj_tpc_pipidpull_electron_part32 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_electron_part32");
	TH1F *h_obj_tpc_pipidpull_positron_part32 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_positron_part32");
	TH1F *h_obj_tpc_pipidpull_pionpos_part32 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionpos_part32");
	TH1F *h_obj_tpc_pipidpull_pionneg_part32 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_pionneg_part32");
	TH1F *h_obj_tpc_pipidpull_proton_part32 	= (TH1F*)f.Get("h_obj_tpc_pipidpull_proton_part32");
	TH1F *h_obj_tpc_pipidpull_other_part32		= (TH1F*)f.Get("h_obj_tpc_pipidpull_other_part32");

	h_obj_tpc_pipidpull_muon_part32		-> SetLineColor(1);
   	h_obj_tpc_pipidpull_antimuon_part32 -> SetLineColor(2);
   	h_obj_tpc_pipidpull_pionpos_part32 	-> SetLineColor(3);
   	h_obj_tpc_pipidpull_pionneg_part32 	-> SetLineColor(4);
   	h_obj_tpc_pipidpull_electron_part32 -> SetLineColor(5);
   	h_obj_tpc_pipidpull_positron_part32	-> SetLineColor(6);
   	h_obj_tpc_pipidpull_proton_part32 	-> SetLineColor(7);
   	h_obj_tpc_pipidpull_other_part32 	-> SetLineColor(8);

   	h_obj_tpc_pipidpull_muon_part32 	-> Draw("hist");
   	h_obj_tpc_pipidpull_pionpos_part32 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_electron_part32 -> Draw("hist same");
   	h_obj_tpc_pipidpull_antimuon_part32 -> Draw("hist same");
   	h_obj_tpc_pipidpull_other_part32 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_proton_part32 	-> Draw("hist same");
   	h_obj_tpc_pipidpull_positron_part32 -> Draw("hist same");
   	h_obj_tpc_pipidpull_pionneg_part32 	-> Draw("hist same");

   	auto *legend16 = new TLegend(0.7, 0.7, 0.9, 0.9);

   	legend16 -> AddEntry(h_obj_tpc_pipidpull_muon_part32,		"muon", 	"l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_antimuon_part32, 	"antimuon", "l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_pionpos_part32, 	"pion+", 	"l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_pionneg_part32, 	"pion-", 	"l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_electron_part32, 	"electron", "l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_positron_part32, 	"positron", "l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_proton_part32, 	"proton", 	"l");
   	legend16 -> AddEntry(h_obj_tpc_pipidpull_other_part32, 		"other", 	"l");

   	legend16 -> Draw();
   	c.SaveAs("plots.pdf");

	c.SaveAs("plots.pdf]");

}