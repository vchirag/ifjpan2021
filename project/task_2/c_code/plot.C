void plot()
{
	TFile f("out.root");
	gStyle -> SetOptStat(0);
	int style = 3145;


	TH1F *h_11 = (TH1F*)f.Get("h_11");
	TH1F *h_12 = (TH1F*)f.Get("h_12");

	TH1F *h_211 = (TH1F*)f.Get("h_211");
	TH1F *h_212 = (TH1F*)f.Get("h_212");
	TH1F *h_213 = (TH1F*)f.Get("h_213");
	TH1F *h_214 = (TH1F*)f.Get("h_214");
	TH1F *h_215 = (TH1F*)f.Get("h_215");
	TH1F *h_216 = (TH1F*)f.Get("h_216");
	TH1F *h_217 = (TH1F*)f.Get("h_217");

	TH1F *h_221 = (TH1F*)f.Get("h_221");
	TH1F *h_222 = (TH1F*)f.Get("h_222");
	TH1F *h_223 = (TH1F*)f.Get("h_223");

	TH1F *h_3111 = (TH1F*)f.Get("h_3111");
	TH1F *h_3112 = (TH1F*)f.Get("h_3112");
	TH1F *h_3113 = (TH1F*)f.Get("h_3113");
	TH1F *h_3114 = (TH1F*)f.Get("h_3114");
	TH1F *h_3115 = (TH1F*)f.Get("h_3115");
	TH1F *h_3116 = (TH1F*)f.Get("h_3116");
	TH1F *h_3117 = (TH1F*)f.Get("h_3117");
	TH1F *h_3118 = (TH1F*)f.Get("h_3118");

	TH1F *h_3121 = (TH1F*)f.Get("h_3121");
	TH1F *h_3122 = (TH1F*)f.Get("h_3122");
	TH1F *h_3123 = (TH1F*)f.Get("h_3123");
	TH1F *h_3124 = (TH1F*)f.Get("h_3124");
	TH1F *h_3125 = (TH1F*)f.Get("h_3125");
	TH1F *h_3126 = (TH1F*)f.Get("h_3126");
	TH1F *h_3127 = (TH1F*)f.Get("h_3127");
	TH1F *h_3128 = (TH1F*)f.Get("h_3128");

	TH1F *h_3131 = (TH1F*)f.Get("h_3131");
	TH1F *h_3132 = (TH1F*)f.Get("h_3132");
	TH1F *h_3133 = (TH1F*)f.Get("h_3133");
	TH1F *h_3134 = (TH1F*)f.Get("h_3134");
	TH1F *h_3135 = (TH1F*)f.Get("h_3135");
	TH1F *h_3136 = (TH1F*)f.Get("h_3136");
	TH1F *h_3137 = (TH1F*)f.Get("h_3137");
	TH1F *h_3138 = (TH1F*)f.Get("h_3138");

	TH1F *h_3211 = (TH1F*)f.Get("h_3211");
	TH1F *h_3212 = (TH1F*)f.Get("h_3212");
	TH1F *h_3213 = (TH1F*)f.Get("h_3213");
	TH1F *h_3214 = (TH1F*)f.Get("h_3214");
	TH1F *h_3215 = (TH1F*)f.Get("h_3215");
	TH1F *h_3216 = (TH1F*)f.Get("h_3216");
	TH1F *h_3217 = (TH1F*)f.Get("h_3217");
	TH1F *h_3218 = (TH1F*)f.Get("h_3218");

	TH1F *h_3221 = (TH1F*)f.Get("h_3221");
	TH1F *h_3222 = (TH1F*)f.Get("h_3222");
	TH1F *h_3223 = (TH1F*)f.Get("h_3223");
	TH1F *h_3224 = (TH1F*)f.Get("h_3224");
	TH1F *h_3225 = (TH1F*)f.Get("h_3225");
	TH1F *h_3226 = (TH1F*)f.Get("h_3226");
	TH1F *h_3227 = (TH1F*)f.Get("h_3227");
	TH1F *h_3228 = (TH1F*)f.Get("h_3228");

	TH1F *h_3231 = (TH1F*)f.Get("h_3231");
	TH1F *h_3232 = (TH1F*)f.Get("h_3232");
	TH1F *h_3233 = (TH1F*)f.Get("h_3233");
	TH1F *h_3234 = (TH1F*)f.Get("h_3234");
	TH1F *h_3235 = (TH1F*)f.Get("h_3235");
	TH1F *h_3236 = (TH1F*)f.Get("h_3236");
	TH1F *h_3237 = (TH1F*)f.Get("h_3237");
	TH1F *h_3238 = (TH1F*)f.Get("h_3238");

	TH1F *h_41 = (TH1F*)f.Get("h_41");
	TH1F *h_42 = (TH1F*)f.Get("h_42");

	TH1F *h_51 = (TH1F*)f.Get("h_51");
	TH1F *h_52 = (TH1F*)f.Get("h_52");

	TH1F *h_611 = (TH1F*)f.Get("h_611");
	TH1F *h_6111 = (TH1F*)f.Get("h_6111");
	TH1F *h_6112 = (TH1F*)f.Get("h_6112");
	TH1F *h_6113 = (TH1F*)f.Get("h_6113");
	TH1F *h_6114 = (TH1F*)f.Get("h_6114");
	TH1F *h_6115 = (TH1F*)f.Get("h_6115");
	TH1F *h_6116 = (TH1F*)f.Get("h_6116");
	TH1F *h_6117 = (TH1F*)f.Get("h_6117");
	TH1F *h_6118 = (TH1F*)f.Get("h_6118");

	TH1F *h_612 = (TH1F*)f.Get("h_612");
	TH1F *h_6121 = (TH1F*)f.Get("h_6121");
	TH1F *h_6122 = (TH1F*)f.Get("h_6122");
	TH1F *h_6123 = (TH1F*)f.Get("h_6123");
	TH1F *h_6124 = (TH1F*)f.Get("h_6124");
	TH1F *h_6125 = (TH1F*)f.Get("h_6125");
	TH1F *h_6126 = (TH1F*)f.Get("h_6126");
	TH1F *h_6127 = (TH1F*)f.Get("h_6127");
	TH1F *h_6128 = (TH1F*)f.Get("h_6128");

	TH1F *h_6211_1  = (TH1F*)f.Get("h_6211_1");
	TH1F *h_6211_2  = (TH1F*)f.Get("h_6211_2");
	TH1F *h_6211_3  = (TH1F*)f.Get("h_6211_3");
	TH1F *h_6211_4  = (TH1F*)f.Get("h_6211_4");
	TH1F *h_6211_5  = (TH1F*)f.Get("h_6211_5");
	TH1F *h_6211_6  = (TH1F*)f.Get("h_6211_6");
	TH1F *h_6211_7  = (TH1F*)f.Get("h_6211_7");
	TH1F *h_6211_8  = (TH1F*)f.Get("h_6211_8");
	TH1F *h_6211_9  = (TH1F*)f.Get("h_6211_9");
	TH1F *h_6211_10 = (TH1F*)f.Get("h_6211_10");
	TH1F *h_6211_11 = (TH1F*)f.Get("h_6211_11");
	TH1F *h_6211_12 = (TH1F*)f.Get("h_6211_12");

	TH1F *h_6212_1 = (TH1F*)f.Get("h_6212_1");
	TH1F *h_6212_2 = (TH1F*)f.Get("h_6212_2");
	TH1F *h_6212_3 = (TH1F*)f.Get("h_6212_3");
	TH1F *h_6212_4 = (TH1F*)f.Get("h_6212_4");
	TH1F *h_6212_5 = (TH1F*)f.Get("h_6212_5");
	TH1F *h_6212_6 = (TH1F*)f.Get("h_6212_6");
	TH1F *h_6212_7 = (TH1F*)f.Get("h_6212_7");

	TH1F *h_6221_1  = (TH1F*)f.Get("h_6221_1");
	TH1F *h_6221_2  = (TH1F*)f.Get("h_6221_2");
	TH1F *h_6221_3  = (TH1F*)f.Get("h_6221_3");
	TH1F *h_6221_4  = (TH1F*)f.Get("h_6221_4");
	TH1F *h_6221_5  = (TH1F*)f.Get("h_6221_5");
	TH1F *h_6221_6  = (TH1F*)f.Get("h_6221_6");
	TH1F *h_6221_7  = (TH1F*)f.Get("h_6221_7");
	TH1F *h_6221_8  = (TH1F*)f.Get("h_6221_8");
	TH1F *h_6221_9  = (TH1F*)f.Get("h_6221_9");
	TH1F *h_6221_10 = (TH1F*)f.Get("h_6221_10");
	TH1F *h_6221_11 = (TH1F*)f.Get("h_6221_11");
	TH1F *h_6221_12 = (TH1F*)f.Get("h_6221_12");

	TH1F *h_6222_1 = (TH1F*)f.Get("h_6222_1");
	TH1F *h_6222_2 = (TH1F*)f.Get("h_6222_2");
	TH1F *h_6222_3 = (TH1F*)f.Get("h_6222_3");
	TH1F *h_6222_4 = (TH1F*)f.Get("h_6222_4");
	TH1F *h_6222_5 = (TH1F*)f.Get("h_6222_5");
	TH1F *h_6222_6 = (TH1F*)f.Get("h_6222_6");
	TH1F *h_6222_7 = (TH1F*)f.Get("h_6222_7");


	TCanvas c;
	c.SaveAs("plots.pdf[");

	gPad -> SetLogy(1);
	h_11 -> Draw("hist");
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);
	h_12 -> Draw("hist");
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad ->SetLogy(1);
	h_211 -> Draw("hist");
	h_212 -> Draw("hist same");
	h_213 -> Draw("hist same");
	h_214 -> Draw("hist same");
	h_215 -> Draw("hist same");
	h_216 -> Draw("hist same");
	h_217 -> Draw("hist same");

	h_211 -> SetLineColor(1);
	h_212 -> SetLineColor(2);
	h_213 -> SetLineColor(3);
	h_214 -> SetLineColor(4);
	h_215 -> SetLineColor(5);
	h_216 -> SetLineColor(6);
	h_217 -> SetLineColor(7);

	auto *legend1 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend1 -> AddEntry(h_211, "electron", "l");
	legend1 -> AddEntry(h_212, "positron", "l");
	legend1 -> AddEntry(h_213, "pi+", "l");
	legend1 -> AddEntry(h_214, "pi-", "l");
	legend1 -> AddEntry(h_215, "neutron", "l");
	legend1 -> AddEntry(h_216, "proton", "l");
	legend1 -> AddEntry(h_217, "other", "l");
	legend1 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_221 -> Draw("hist");
	h_222 -> Draw("hist same");
	h_223 -> Draw("hist same");
	gPad -> SetGrid(1);
	h_221 -> SetLineColor(1);
	h_221 -> SetFillColorAlpha(kBlack, 0.1);
	h_222 -> SetLineColor(2);
	h_222 -> SetFillColorAlpha(2, 0.5);
	h_223 -> SetLineColor(3);
	h_223 -> SetFillColorAlpha(kGreen, 0.9);

	h_221 ->  SetFillStyle(style);
	h_222 ->  SetFillStyle(style);
	h_223 ->  SetFillStyle(style);

	float ymax = h_221 -> GetMaximum();
	TLine *l1 = new TLine(50.,0,50.,ymax);
	l1->SetLineColor(4);
  	l1->SetLineWidth(3);
  	l1->Draw("same");

  	auto *legend2 = new TLegend(0.5, 0.5, 0.9, 0.9);
  	legend2 -> AddEntry(h_221, "proton from the same vertex", "l");
  	legend2 -> AddEntry(h_222, "pion+ from the same vertex", "l");
 	legend2 -> AddEntry(h_223, "other particles from different vertices", "l");
  	legend2 -> Draw();
  	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);

	h_3113 -> Draw("hist");
	h_3117 -> Draw("hist same");
	h_3116 -> Draw("hist same");
	h_3112 -> Draw("hist same");
	h_3118 -> Draw("hist same");
	h_3115 -> Draw("hist same");
	h_3111 -> Draw("hist same");
	h_3114 -> Draw("hist same");


	h_3115 -> SetLineColor(5);
	h_3115 -> SetFillColorAlpha(5, 0.5);
	h_3111 -> SetLineColor(1);
	h_3111 -> SetFillColorAlpha(1, 0.5);
	h_3112 -> SetLineColor(2);
	h_3112 -> SetFillColorAlpha(2, 0.5);
	h_3113 -> SetLineColor(3);
	h_3113 -> SetFillColorAlpha(3, 0.5);
	h_3114 -> SetLineColor(4);
	h_3114 -> SetFillColorAlpha(4, 0.5);
	h_3116 -> SetLineColor(6);
	h_3116 -> SetFillColorAlpha(6, 0.5);
	h_3117 -> SetLineColor(7);
	h_3117 -> SetFillColorAlpha(7, 0.5);
	h_3118 -> SetLineColor(8);
	h_3118 -> SetFillColorAlpha(8, 0.5);

	h_3111 ->  SetFillStyle(style);
	h_3112 ->  SetFillStyle(style);
	h_3113 ->  SetFillStyle(style);
	h_3114 ->  SetFillStyle(style);
	h_3115 ->  SetFillStyle(style);
	h_3116 ->  SetFillStyle(style);
	h_3117 ->  SetFillStyle(style);
	h_3118 ->  SetFillStyle(style);


	ymax = h_3113 -> GetMaximum();
	TLine *l2 = new TLine(-2.,0,-2.,ymax);
	l2->SetLineColor(4);
  	l2->SetLineWidth(3);
  	l2->Draw("same");

 	TLine *l3 = new TLine(2.,0,2.,ymax);
	l3->SetLineColor(4);
  	l3->SetLineWidth(3);
  	l3->Draw("same");

	auto *legend3 = new TLegend(0.7, 0.7, 0.9, 0.9);

	legend3 -> AddEntry(h_3111, "muon");
	legend3 -> AddEntry(h_3112, "antimuon");
	legend3 -> AddEntry(h_3113, "pion+");
	legend3 -> AddEntry(h_3114, "pion-");
	legend3 -> AddEntry(h_3115, "electron");
	legend3 -> AddEntry(h_3116, "positron");
	legend3 -> AddEntry(h_3117, "proton");
	legend3 -> AddEntry(h_3118, "other");
	legend3 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);

	h_3127 -> Draw("hist");
	h_3123 -> Draw("hist same");
	h_3126 -> Draw("hist same");
	h_3128 -> Draw("hist same");
	h_3125 -> Draw("hist same");
	h_3122 -> Draw("hist same");
	h_3121 -> Draw("hist same");
	h_3124 -> Draw("hist same");

	h_3121 -> SetLineColor(1);
	h_3121 -> SetFillColorAlpha(1, 0.5);
	h_3122 -> SetLineColor(2);
	h_3122 -> SetFillColorAlpha(2, 0.5);
	h_3123 -> SetLineColor(3);
	h_3123 -> SetFillColorAlpha(3, 0.5);
	h_3124 -> SetLineColor(4);
	h_3124 -> SetFillColorAlpha(4, 0.5);
	h_3125 -> SetLineColor(5);
	h_3125 -> SetFillColorAlpha(5, 0.5);
	h_3126 -> SetLineColor(6);
	h_3126 -> SetFillColorAlpha(6, 0.5);
	h_3127 -> SetLineColor(7);
	h_3127 -> SetFillColorAlpha(7, 0.5);
	h_3128 -> SetLineColor(8);
	h_3128 -> SetFillColorAlpha(8, 0.5);

	h_3121 ->  SetFillStyle(style);
	h_3122 ->  SetFillStyle(style);
	h_3123 ->  SetFillStyle(style);
	h_3124 ->  SetFillStyle(style);
	h_3125 ->  SetFillStyle(style);
	h_3126 ->  SetFillStyle(style);
	h_3127 ->  SetFillStyle(style);
	h_3128 ->  SetFillStyle(style);

	ymax = h_3127 -> GetMaximum();
	TLine *l4 = new TLine(-2.,0,-2.,ymax);
	l4->SetLineColor(4);
  	l4->SetLineWidth(3);
  	l4->Draw("same");

 	TLine *l5 = new TLine(3.,0,3.,ymax);
	l5->SetLineColor(4);
  	l5->SetLineWidth(3);
  	l5->Draw("same");

	auto *legend4 = new TLegend(0.7, 0.7, 0.9, 0.9);

	legend4 -> AddEntry(h_3121, "muon");
	legend4 -> AddEntry(h_3122, "antimuon");
	legend4 -> AddEntry(h_3123, "pion+");
	legend4 -> AddEntry(h_3124, "pion-");
	legend4 -> AddEntry(h_3125, "electron");
	legend4 -> AddEntry(h_3126, "positron");
	legend4 -> AddEntry(h_3127, "proton");
	legend4 -> AddEntry(h_3128, "other");
	legend4 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);
	h_3133 -> Draw("hist");
	h_3137 -> Draw("hist same");
	h_3132 -> Draw("hist same");
	h_3138 -> Draw("hist same");
	h_3136 -> Draw("hist same");
	h_3131 -> Draw("hist same");
	h_3134 -> Draw("hist same");
	h_3135 -> Draw("hist same");

	h_3131 -> SetLineColor(1);
	h_3131 -> SetFillColorAlpha(1, 0.5);
	h_3132 -> SetLineColor(2);
	h_3132 -> SetFillColorAlpha(2, 0.5);
	h_3133 -> SetLineColor(3);
	h_3133 -> SetFillColorAlpha(3, 0.5);
	h_3134 -> SetLineColor(4);
	h_3134 -> SetFillColorAlpha(4, 0.5);
	h_3135 -> SetLineColor(5);
	h_3135 -> SetFillColorAlpha(5, 0.5);
	h_3136 -> SetLineColor(6);
	h_3136 -> SetFillColorAlpha(6, 0.5);
	h_3137 -> SetLineColor(7);
	h_3137 -> SetFillColorAlpha(7, 0.5);
	h_3138 -> SetLineColor(8);
	h_3138 -> SetFillColorAlpha(8, 0.5);

	h_3131 ->  SetFillStyle(style);
	h_3132 ->  SetFillStyle(style);
	h_3133 ->  SetFillStyle(style);
	h_3134 ->  SetFillStyle(style);
	h_3135 ->  SetFillStyle(style);
	h_3136 ->  SetFillStyle(style);
	h_3137 ->  SetFillStyle(style);
	h_3138 ->  SetFillStyle(style);


	ymax = h_3133 -> GetMaximum();
	TLine *l6 = new TLine(-1,0,-1,ymax);
	l6->SetLineColor(4);
  	l6->SetLineWidth(3);
  	l6->Draw("same");

 	TLine *l7 = new TLine(1.5,0,1.5,ymax);
	l7->SetLineColor(4);
  	l7->SetLineWidth(3);
  	l7->Draw("same");

	auto *legend5= new TLegend(0.7, 0.7, 0.9, 0.9);

	legend5 -> AddEntry(h_3131, "muon");
	legend5 -> AddEntry(h_3132, "antimuon");
	legend5 -> AddEntry(h_3133, "pion+");
	legend5 -> AddEntry(h_3134, "pion-");
	legend5 -> AddEntry(h_3135, "electron");
	legend5 -> AddEntry(h_3136, "positron");
	legend5 -> AddEntry(h_3137, "proton");
	legend5 -> AddEntry(h_3138, "other");
	legend5 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);

	h_3215 -> Draw("hist");
	h_3213 -> Draw("hist same");
	h_3212 -> Draw("hist same");
	h_3211 -> Draw("hist same");
	h_3214 -> Draw("hist same");
	h_3216 -> Draw("hist same");
	h_3217 -> Draw("hist same");
	h_3218 -> Draw("hist same");

	h_3211 -> SetLineColor(1);
	h_3212 -> SetLineColor(2);
	h_3213 -> SetLineColor(3);
	h_3214 -> SetLineColor(4);
	h_3215 -> SetLineColor(5);
	h_3216 -> SetLineColor(6);
	h_3217 -> SetLineColor(7);
	h_3218 -> SetLineColor(8);

	auto *legend6 = new TLegend(0.7, 0.7, 0.9, 0.9);

	legend6 -> AddEntry(h_3211, "muon");
	legend6 -> AddEntry(h_3212, "antimuon");
	legend6 -> AddEntry(h_3213, "pion+");
	legend6 -> AddEntry(h_3214, "pion-");
	legend6 -> AddEntry(h_3215, "electron");
	legend6 -> AddEntry(h_3216, "positron");
	legend6 -> AddEntry(h_3217, "proton");
	legend6 -> AddEntry(h_3218, "other");
	legend6 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);

	h_3224 -> Draw("hist");
	h_3225 -> Draw("hist same");
	h_3223 -> Draw("hist same");
	h_3222 -> Draw("hist same");
	h_3221 -> Draw("hist same");
	h_3226 -> Draw("hist same");
	h_3227 -> Draw("hist same");
	h_3228 -> Draw("hist same");

	h_3221 -> SetLineColor(1);
	h_3222 -> SetLineColor(2);
	h_3223 -> SetLineColor(3);
	h_3224 -> SetLineColor(4);
	h_3225 -> SetLineColor(5);
	h_3226 -> SetLineColor(6);
	h_3227 -> SetLineColor(7);
	h_3228 -> SetLineColor(8);

	auto *legend7 = new TLegend(0.7, 0.7, 0.9, 0.9);

	legend7 -> AddEntry(h_3221, "muon");
	legend7 -> AddEntry(h_3222, "antimuon");
	legend7 -> AddEntry(h_3223, "pion+");
	legend7 -> AddEntry(h_3224, "pion-");
	legend7 -> AddEntry(h_3225, "electron");
	legend7 -> AddEntry(h_3226, "positron");
	legend7 -> AddEntry(h_3227, "proton");
	legend7 -> AddEntry(h_3228, "other");
	legend7 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	gPad -> SetLogy(0);

	h_3234 -> Draw("hist");
	h_3235 -> Draw("hist same");
	h_3233 -> Draw("hist same");
	h_3232 -> Draw("hist same");
	h_3231 -> Draw("hist same");
	h_3236 -> Draw("hist same");
	h_3237 -> Draw("hist same");
	h_3238 -> Draw("hist same");

	h_3231 -> SetLineColor(1);
	h_3232 -> SetLineColor(2);
	h_3233 -> SetLineColor(3);
	h_3234 -> SetLineColor(4);
	h_3235 -> SetLineColor(5);
	h_3236 -> SetLineColor(6);
	h_3237 -> SetLineColor(7);
	h_3238 -> SetLineColor(8);

	auto *legend8 = new TLegend(0.7, 0.7, 0.9, 0.9);

	legend8 -> AddEntry(h_3231, "muon");
	legend8 -> AddEntry(h_3232, "antimuon");
	legend8 -> AddEntry(h_3233, "pion+");
	legend8 -> AddEntry(h_3234, "pion-");
	legend8 -> AddEntry(h_3235, "electron");
	legend8 -> AddEntry(h_3236, "positron");
	legend8 -> AddEntry(h_3237, "proton");
	legend8 -> AddEntry(h_3238, "other");
	legend8-> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_611 -> Draw("hist");
	h_612 -> Draw("hist same");

	h_611 -> SetLineColor(1);
	h_612 -> SetLineColor(2);

	auto *legend9 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend9 -> AddEntry(h_611, "pion+", "l");
	legend9 -> AddEntry(h_612, "proton", "l");
	legend9 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_6113 -> Draw("hist");
	h_6111 -> Draw("hist same");
	h_6112 -> Draw("hist same");
	h_6114 -> Draw("hist same");
	h_6115 -> Draw("hist same");
	h_6116 -> Draw("hist same");
	h_6117 -> Draw("hist same");
	h_6118 -> Draw("hist same");

	h_6111 -> SetLineColor(1);
	h_6112 -> SetLineColor(2);
	h_6113 -> SetLineColor(3);
	h_6114 -> SetLineColor(4);
	h_6115 -> SetLineColor(5);
	h_6116 -> SetLineColor(6);
	h_6117 -> SetLineColor(7);
	h_6118 -> SetLineColor(8);

	auto *legend10 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend10 -> AddEntry(h_6111, "muon-", "l");
	legend10 -> AddEntry(h_6112, "muon+", "l"); 
	legend10 -> AddEntry(h_6113, "pion-", "l"); 
	legend10 -> AddEntry(h_6114, "pion-", "l"); 
	legend10 -> AddEntry(h_6115, "e-", "l"); 
	legend10 -> AddEntry(h_6116, "e+", "l"); 
	legend10 -> AddEntry(h_6117, "proton", "l"); 
	legend10 -> AddEntry(h_6118, "other", "l"); 
	legend10 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_6127 -> Draw("hist");
	h_6121 -> Draw("hist same");
	h_6122 -> Draw("hist same");
	h_6124 -> Draw("hist same");
	h_6125 -> Draw("hist same");
	h_6126 -> Draw("hist same");
	h_6123 -> Draw("hist same");
	h_6128 -> Draw("hist same");

	h_6121 -> SetLineColor(1);
	h_6122 -> SetLineColor(2);
	h_6123 -> SetLineColor(3);
	h_6124 -> SetLineColor(4);
	h_6125 -> SetLineColor(5);
	h_6126 -> SetLineColor(6);
	h_6127 -> SetLineColor(7);
	h_6128 -> SetLineColor(8);

	auto *legend11 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend11 -> AddEntry(h_6121, "muon-", "l");
	legend11 -> AddEntry(h_6122, "muon+", "l"); 
	legend11 -> AddEntry(h_6123, "pion-", "l"); 
	legend11 -> AddEntry(h_6124, "pion-", "l"); 
	legend11 -> AddEntry(h_6125, "e-", "l"); 
	legend11 -> AddEntry(h_6126, "e+", "l"); 
	legend11 -> AddEntry(h_6127, "proton", "l"); 
	legend11 -> AddEntry(h_6128, "other", "l"); 
	legend11 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();

	h_6211_1 -> SetLineColor(1);
	h_6211_2 -> SetLineColor(2);
	h_6211_3 -> SetLineColor(3);
	h_6211_4 -> SetLineColor(4);
	h_6211_5 -> SetLineColor(5);
	h_6211_6 -> SetLineColor(6);
	h_6211_7 -> SetLineColor(7);
	h_6211_8 -> SetLineColor(8);
	h_6211_9 -> SetLineColor(9);
	h_6211_10 -> SetLineColor(10);
	h_6211_11 -> SetLineColor(11);
	h_6211_12 -> SetLineColor(12);

	h_6211_3 -> Draw("hist");
	h_6211_2 -> Draw("hist same");
	h_6211_1 -> Draw("hist same");
	h_6211_4 -> Draw("hist same");
	h_6211_5 -> Draw("hist same");
	h_6211_6 -> Draw("hist same");
	h_6211_7 -> Draw("hist same");
	h_6211_8 -> Draw("hist same");
	h_6211_9 -> Draw("hist same");
	h_6211_10 -> Draw("hist same");
	h_6211_11 -> Draw("hist same");
	h_6211_12 -> Draw("hist same");

	auto *legend12 = new TLegend(0.5, 0.5, 0.8, 0.8);

	legend12 -> AddEntry(h_6211_1, "CCQE", "l");
	legend12 -> AddEntry(h_6211_2, "2p2h", "l");
	legend12 -> AddEntry(h_6211_3, "RES", "l");
	legend12 -> AddEntry(h_6211_4, "DIS", "l");
	legend12 -> AddEntry(h_6211_5, "COH", "l");
	legend12 -> AddEntry(h_6211_6, "NC", "l");
	legend12 -> AddEntry(h_6211_7, "CC-#bar{#nu}_{#mu}", "l");
	legend12 -> AddEntry(h_6211_8, "CC-#nu{e},CC-#bar{#nu}_{e}", "l");
	legend12 -> AddEntry(h_6211_9, "other", "l");
	legend12 -> AddEntry(h_6211_10, "out FV", "l");
	legend12 -> AddEntry(h_6211_11, "no truth", "l");
	legend12 -> AddEntry(h_6211_12, "sand #mu", "l");

	legend12 -> Draw();

	c.SaveAs("plots.pdf");

	c.Clear();
	h_6212_1 -> SetLineColor(1);
	h_6212_2 -> SetLineColor(2);
	h_6212_3 -> SetLineColor(3);
	h_6212_4 -> SetLineColor(4);
	h_6212_5 -> SetLineColor(5);
	h_6212_6 -> SetLineColor(6);
	h_6212_7 -> SetLineColor(7);

	h_6212_2 -> Draw("hist");
	h_6212_1 -> Draw("hist same");
	h_6212_3 -> Draw("hist same");
	h_6212_4 -> Draw("hist same");
	h_6212_5 -> Draw("hist same");
	h_6212_6 -> Draw("hist same");
	h_6212_7 -> Draw("hist same");

	auto *legend13 = new TLegend(0.5, 0.5, 0.8, 0.8);

	legend13 -> AddEntry(h_6212_1, "CC-0#pi", "l");
	legend13 -> AddEntry(h_6212_2, "CC-1#pi^{+}", "l");
	legend13 -> AddEntry(h_6212_3, "CC-other", "l");
	legend13 -> AddEntry(h_6212_4, "BKG", "l");
	legend13 -> AddEntry(h_6212_5, "out FV", "l");
	legend13 -> AddEntry(h_6212_6, "no truth", "l");
	legend13 -> AddEntry(h_6212_7, "sand #mu", "l");
	legend13 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();

	h_6221_1 -> SetLineColor(1);
	h_6221_2 -> SetLineColor(2);
	h_6221_3 -> SetLineColor(3);
	h_6221_4 -> SetLineColor(4);
	h_6221_5 -> SetLineColor(5);
	h_6221_6 -> SetLineColor(6);
	h_6221_7 -> SetLineColor(7);
	h_6221_8 -> SetLineColor(8);
	h_6221_9 -> SetLineColor(9);
	h_6221_10 -> SetLineColor(10);
	h_6221_11 -> SetLineColor(11);
	h_6221_12 -> SetLineColor(12);

	h_6221_3 -> Draw("hist");
	h_6221_2 -> Draw("hist same");
	h_6221_1 -> Draw("hist same");
	h_6221_4 -> Draw("hist same");
	h_6221_5 -> Draw("hist same");
	h_6221_6 -> Draw("hist same");
	h_6221_7 -> Draw("hist same");
	h_6221_8 -> Draw("hist same");
	h_6221_9 -> Draw("hist same");
	h_6221_10 -> Draw("hist same");
	h_6221_11 -> Draw("hist same");
	h_6221_12 -> Draw("hist same");

	auto *legend14 = new TLegend(0.5, 0.5, 0.8, 0.8);

	legend14 -> AddEntry(h_6221_1, "CCQE", "l");
	legend14 -> AddEntry(h_6221_2, "2p2h", "l");
	legend14 -> AddEntry(h_6221_3, "RES", "l");
	legend14 -> AddEntry(h_6221_4, "DIS", "l");
	legend14 -> AddEntry(h_6221_5, "COH", "l");
	legend14 -> AddEntry(h_6221_6, "NC", "l");
	legend14 -> AddEntry(h_6221_7, "CC-#bar{#nu}_{#mu}", "l");
	legend14 -> AddEntry(h_6221_8, "CC-#nu{e},CC-#bar{#nu}_{e}", "l");
	legend14 -> AddEntry(h_6221_9, "other", "l");
	legend14 -> AddEntry(h_6221_10, "out FV", "l");
	legend14 -> AddEntry(h_6221_11, "no truth", "l");
	legend14 -> AddEntry(h_6221_12, "sand #mu", "l");
	legend14 -> Draw();

	c.SaveAs("plots.pdf");

	c.SaveAs("plots.pdf");

	c.Clear();
	h_6222_1 -> SetLineColor(1);
	h_6222_2 -> SetLineColor(2);
	h_6222_3 -> SetLineColor(3);
	h_6222_4 -> SetLineColor(4);
	h_6222_5 -> SetLineColor(5);
	h_6222_6 -> SetLineColor(6);
	h_6222_7 -> SetLineColor(7);

	h_6222_2 -> Draw("hist");
	h_6222_1 -> Draw("hist same");
	h_6222_3 -> Draw("hist same");
	h_6222_4 -> Draw("hist same");
	h_6222_5 -> Draw("hist same");
	h_6222_6 -> Draw("hist same");
	h_6222_7 -> Draw("hist same");

	auto *legend15 = new TLegend(0.5, 0.5, 0.8, 0.8);

	legend15 -> AddEntry(h_6222_1, "CC-0#pi", "l");
	legend15 -> AddEntry(h_6222_2, "CC-1#pi^{+}", "l");
	legend15 -> AddEntry(h_6222_3, "CC-other", "l");
	legend15 -> AddEntry(h_6222_4, "BKG", "l");
	legend15 -> AddEntry(h_6222_5, "out FV", "l");
	legend15 -> AddEntry(h_6222_6, "no truth", "l");
	legend15 -> AddEntry(h_6222_7, "sand #mu", "l");
	legend15 -> Draw();
	c.SaveAs("plots.pdf");

	c.SaveAs("plots.pdf]");
}