void plot()
{
	TFile f("out.root");
	gStyle -> SetOptStat(0);

	TH1F *h_1111 = (TH1F*)f.Get("h_1111");
	TH1F *h_1112 = (TH1F*)f.Get("h_1112");
	TH1F *h_1113 = (TH1F*)f.Get("h_1113");
	TH1F *h_1114 = (TH1F*)f.Get("h_1114");
	TH1F *h_1115 = (TH1F*)f.Get("h_1115");
	TH1F *h_1116 = (TH1F*)f.Get("h_1116");
	TH1F *h_1117 = (TH1F*)f.Get("h_1117");
	TH1F *h_1118 = (TH1F*)f.Get("h_1118");

	TH1F *h_1121 = (TH1F*)f.Get("h_1121");
	TH1F *h_1122 = (TH1F*)f.Get("h_1122");
	TH1F *h_1123 = (TH1F*)f.Get("h_1123");
	TH1F *h_1124 = (TH1F*)f.Get("h_1124");
	TH1F *h_1125 = (TH1F*)f.Get("h_1125");
	TH1F *h_1126 = (TH1F*)f.Get("h_1126");
	TH1F *h_1127 = (TH1F*)f.Get("h_1127");
	TH1F *h_1128 = (TH1F*)f.Get("h_1128");

	TH1F *h_1131 = (TH1F*)f.Get("h_1131");
	TH1F *h_1132 = (TH1F*)f.Get("h_1132");
	TH1F *h_1133 = (TH1F*)f.Get("h_1133");
	TH1F *h_1134 = (TH1F*)f.Get("h_1134");
	TH1F *h_1135 = (TH1F*)f.Get("h_1135");
	TH1F *h_1136 = (TH1F*)f.Get("h_1136");
	TH1F *h_1137 = (TH1F*)f.Get("h_1137");
	TH1F *h_1138 = (TH1F*)f.Get("h_1138");

	TH1F *h_1211 = (TH1F*)f.Get("h_1211");
	TH1F *h_1212 = (TH1F*)f.Get("h_1212");
	TH1F *h_1213 = (TH1F*)f.Get("h_1213");
	TH1F *h_1214 = (TH1F*)f.Get("h_1214");
	TH1F *h_1215 = (TH1F*)f.Get("h_1215");
	TH1F *h_1216 = (TH1F*)f.Get("h_1216");
	TH1F *h_1217 = (TH1F*)f.Get("h_1217");
	TH1F *h_1218 = (TH1F*)f.Get("h_1218");

	TH1F *h_211 = (TH1F*)f.Get("h_211");
	TH1F *h_212 = (TH1F*)f.Get("h_212");
	TH1F *h_213 = (TH1F*)f.Get("h_213");
	TH1F *h_214 = (TH1F*)f.Get("h_214");
	TH1F *h_215 = (TH1F*)f.Get("h_215");
	TH1F *h_216 = (TH1F*)f.Get("h_216");
	TH1F *h_217 = (TH1F*)f.Get("h_217");
	TH1F *h_218 = (TH1F*)f.Get("h_218");

	TH1F *h_221 = (TH1F*)f.Get("h_221");
	TH1F *h_222 = (TH1F*)f.Get("h_222");
	TH1F *h_223 = (TH1F*)f.Get("h_223");
	TH1F *h_224 = (TH1F*)f.Get("h_224");
	TH1F *h_225 = (TH1F*)f.Get("h_225");
	TH1F *h_226 = (TH1F*)f.Get("h_226");
	TH1F *h_227 = (TH1F*)f.Get("h_227");
	TH1F *h_228 = (TH1F*)f.Get("h_228");

	TH1F *h_231 = (TH1F*)f.Get("h_231");
	TH1F *h_232 = (TH1F*)f.Get("h_232");
	TH1F *h_233 = (TH1F*)f.Get("h_233");
	TH1F *h_234 = (TH1F*)f.Get("h_234");
	TH1F *h_235 = (TH1F*)f.Get("h_235");
	TH1F *h_236 = (TH1F*)f.Get("h_236");
	TH1F *h_237 = (TH1F*)f.Get("h_237");
	TH1F *h_238 = (TH1F*)f.Get("h_238");

	TH1F *h_311_1 = (TH1F*)f.Get("h_311_1");
	TH1F *h_311_2 = (TH1F*)f.Get("h_311_2");
	TH1F *h_311_3 = (TH1F*)f.Get("h_311_3");
	TH1F *h_311_4 = (TH1F*)f.Get("h_311_4");
	TH1F *h_311_5 = (TH1F*)f.Get("h_311_5");
	TH1F *h_311_6 = (TH1F*)f.Get("h_311_6");
	TH1F *h_311_7 = (TH1F*)f.Get("h_311_7");
	TH1F *h_311_8 = (TH1F*)f.Get("h_311_8");
	TH1F *h_311_9 = (TH1F*)f.Get("h_311_9");
	TH1F *h_311_10 = (TH1F*)f.Get("h_311_10");
	TH1F *h_311_11 = (TH1F*)f.Get("h_311_11");
	TH1F *h_311_12 = (TH1F*)f.Get("h_311_12");

	TH1F *h_3121 = (TH1F*)f.Get("h_3121");
	TH1F *h_3122 = (TH1F*)f.Get("h_3122");
	TH1F *h_3123 = (TH1F*)f.Get("h_3123");
	TH1F *h_3124 = (TH1F*)f.Get("h_3124");
	TH1F *h_3125 = (TH1F*)f.Get("h_3125");
	TH1F *h_3126 = (TH1F*)f.Get("h_3126");
	TH1F *h_3127 = (TH1F*)f.Get("h_3127");

	TH1F *h_321_1 = (TH1F*)f.Get("h_321_1");
	TH1F *h_321_2 = (TH1F*)f.Get("h_321_2");
	TH1F *h_321_3 = (TH1F*)f.Get("h_321_3");
	TH1F *h_321_4 = (TH1F*)f.Get("h_321_4");
	TH1F *h_321_5 = (TH1F*)f.Get("h_321_5");
	TH1F *h_321_6 = (TH1F*)f.Get("h_321_6");
	TH1F *h_321_7 = (TH1F*)f.Get("h_321_7");
	TH1F *h_321_8 = (TH1F*)f.Get("h_321_8");
	TH1F *h_321_9 = (TH1F*)f.Get("h_321_9");
	TH1F *h_321_10 = (TH1F*)f.Get("h_321_10");
	TH1F *h_321_11 = (TH1F*)f.Get("h_321_11");
	TH1F *h_321_12 = (TH1F*)f.Get("h_321_12");

	TH1F *h_3221 = (TH1F*)f.Get("h_3221");
	TH1F *h_3222 = (TH1F*)f.Get("h_3222");
	TH1F *h_3223 = (TH1F*)f.Get("h_3223");
	TH1F *h_3224 = (TH1F*)f.Get("h_3224");
	TH1F *h_3225 = (TH1F*)f.Get("h_3225");
	TH1F *h_3226 = (TH1F*)f.Get("h_3226");
	TH1F *h_3227 = (TH1F*)f.Get("h_3227");

	TH1F *h_4_1 = (TH1F*)f.Get("h_4_1");
	TH1F *h_4_2 = (TH1F*)f.Get("h_4_2");
	TH1F *h_4_3 = (TH1F*)f.Get("h_4_3");
	TH1F *h_4_4 = (TH1F*)f.Get("h_4_4");
	TH1F *h_4_5 = (TH1F*)f.Get("h_4_5");
	TH1F *h_4_6 = (TH1F*)f.Get("h_4_6");
	TH1F *h_4_7 = (TH1F*)f.Get("h_4_7");
	TH1F *h_4_8 = (TH1F*)f.Get("h_4_8");
	TH1F *h_4_9 = (TH1F*)f.Get("h_4_9");
	TH1F *h_4_10 = (TH1F*)f.Get("h_4_10");
	TH1F *h_4_11 = (TH1F*)f.Get("h_4_11");
	TH1F *h_4_12 = (TH1F*)f.Get("h_4_12");

	TH1F *h_513 = (TH1F*)f.Get("h_513");
	TH1F *h_523 = (TH1F*)f.Get("h_523");
	TH1F *h_533 = (TH1F*)f.Get("h_533");


	TCanvas c;
	c.SaveAs("plots.pdf[");

	h_1111 -> Draw("hist");
	h_1112 -> Draw("hist same");
	h_1113 -> Draw("hist same");
	h_1114 -> Draw("hist same");
	h_1115 -> Draw("hist same");
	h_1116 -> Draw("hist same");
	h_1117 -> Draw("hist same");
	h_1118 -> Draw("hist same");

	h_1111 -> SetLineColor(1);
	h_1112 -> SetLineColor(2);
	h_1113 -> SetLineColor(3);
	h_1114 -> SetLineColor(4);
	h_1115 -> SetLineColor(5);
	h_1116 -> SetLineColor(6);
	h_1117 -> SetLineColor(7);
	h_1118 -> SetLineColor(8);

	auto *legend1 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend1 -> AddEntry(h_1111, "pi+", "l");
	legend1 -> AddEntry(h_1112, "pi-", "l");
	legend1 -> AddEntry(h_1113, "mu+", "l");
	legend1 -> AddEntry(h_1114, "mu-", "l");
	legend1 -> AddEntry(h_1115, "proton", "l");
	legend1 -> AddEntry(h_1116, "e-", "l");
	legend1 -> AddEntry(h_1117, "e+", "l");
	legend1 -> AddEntry(h_1118, "other", "l");
	legend1 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_1121 -> Draw("hist");
	h_1122 -> Draw("hist same");
	h_1123 -> Draw("hist same");
	h_1124 -> Draw("hist same");
	h_1125 -> Draw("hist same");
	h_1126 -> Draw("hist same");
	h_1127 -> Draw("hist same");
	h_1128 -> Draw("hist same");

	h_1121 -> SetLineColor(1);
	h_1122 -> SetLineColor(2);
	h_1123 -> SetLineColor(3);
	h_1124 -> SetLineColor(4);
	h_1125 -> SetLineColor(5);
	h_1126 -> SetLineColor(6);
	h_1127 -> SetLineColor(7);
	h_1128 -> SetLineColor(8);

	auto *legend2 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend2 -> AddEntry(h_1121, "pi+", "l");
	legend2 -> AddEntry(h_1122, "pi-", "l");
	legend2 -> AddEntry(h_1123, "mu+", "l");
	legend2 -> AddEntry(h_1124, "mu-", "l");
	legend2 -> AddEntry(h_1125, "proton", "l");
	legend2 -> AddEntry(h_1126, "e-", "l");
	legend2 -> AddEntry(h_1127, "e+", "l");
	legend2 -> AddEntry(h_1128, "other", "l");
	legend2 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_1131 -> Draw("hist");
	h_1132 -> Draw("hist same");
	h_1133 -> Draw("hist same");
	h_1134 -> Draw("hist same");
	h_1135 -> Draw("hist same");
	h_1136 -> Draw("hist same");
	h_1137 -> Draw("hist same");
	h_1138 -> Draw("hist same");

	h_1131 -> SetLineColor(1);
	h_1132 -> SetLineColor(2);
	h_1133 -> SetLineColor(3);
	h_1134 -> SetLineColor(4);
	h_1135 -> SetLineColor(5);
	h_1136 -> SetLineColor(6);
	h_1137 -> SetLineColor(7);
	h_1138 -> SetLineColor(8);

	auto *legend3 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend3 -> AddEntry(h_1131, "pi+", "l");
	legend3 -> AddEntry(h_1132, "pi-", "l");
	legend3 -> AddEntry(h_1133, "mu+", "l");
	legend3 -> AddEntry(h_1134, "mu-", "l");
	legend3 -> AddEntry(h_1135, "proton", "l");
	legend3 -> AddEntry(h_1136, "e-", "l");
	legend3 -> AddEntry(h_1137, "e+", "l");
	legend3 -> AddEntry(h_1138, "other", "l");
	legend3 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_1211 -> Draw("hist");
	h_1212 -> Draw("hist same");
	h_1213 -> Draw("hist same");
	h_1214 -> Draw("hist same");
	h_1215 -> Draw("hist same");
	h_1216 -> Draw("hist same");
	h_1217 -> Draw("hist same");
	h_1218 -> Draw("hist same");

	h_1211 -> SetLineColor(1);
	h_1212 -> SetLineColor(2);
	h_1213 -> SetLineColor(3);
	h_1214 -> SetLineColor(4);
	h_1215 -> SetLineColor(5);
	h_1216 -> SetLineColor(6);
	h_1217 -> SetLineColor(7);
	h_1218 -> SetLineColor(8);

	auto *legend4 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend4 -> AddEntry(h_1211, "pi+", "l");
	legend4 -> AddEntry(h_1212, "pi-", "l");
	legend4 -> AddEntry(h_1213, "mu+", "l");
	legend4 -> AddEntry(h_1214, "mu-", "l");
	legend4 -> AddEntry(h_1215, "proton", "l");
	legend4 -> AddEntry(h_1216, "e-", "l");
	legend4 -> AddEntry(h_1217, "e+", "l");
	legend4 -> AddEntry(h_1218, "other", "l");
	legend4 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_211 -> Draw("hist");
	h_212 -> Draw("hist same");
	h_213 -> Draw("hist same");
	h_214 -> Draw("hist same");
	h_215 -> Draw("hist same");
	h_216 -> Draw("hist same");
	h_217 -> Draw("hist same");
	h_218 -> Draw("hist same");

	h_211 -> SetLineColor(1);
	h_212 -> SetLineColor(2);
	h_213 -> SetLineColor(3);
	h_214 -> SetLineColor(4);
	h_215 -> SetLineColor(5);
	h_216 -> SetLineColor(6);
	h_217 -> SetLineColor(7);
	h_218 -> SetLineColor(8);

	auto *legend5 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend5 -> AddEntry(h_211, "pi+", "l");
	legend5 -> AddEntry(h_212, "pi-", "l");
	legend5 -> AddEntry(h_213, "mu+", "l");
	legend5 -> AddEntry(h_214, "mu-", "l");
	legend5 -> AddEntry(h_215, "proton", "l");
	legend5 -> AddEntry(h_216, "e-", "l");
	legend5 -> AddEntry(h_217, "e+", "l");
	legend5 -> AddEntry(h_218, "other", "l");
	legend5 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_221 -> Draw("hist");
	h_222 -> Draw("hist same");
	h_223 -> Draw("hist same");
	h_224 -> Draw("hist same");
	h_225 -> Draw("hist same");
	h_226 -> Draw("hist same");
	h_227 -> Draw("hist same");
	h_228 -> Draw("hist same");

	h_221 -> SetLineColor(1);
	h_222 -> SetLineColor(2);
	h_223 -> SetLineColor(3);
	h_224 -> SetLineColor(4);
	h_225 -> SetLineColor(5);
	h_226 -> SetLineColor(6);
	h_227 -> SetLineColor(7);
	h_228 -> SetLineColor(8);

	auto *legend6 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend6 -> AddEntry(h_221, "pi+", "l");
	legend6 -> AddEntry(h_222, "pi-", "l");
	legend6 -> AddEntry(h_223, "mu+", "l");
	legend6 -> AddEntry(h_224, "mu-", "l");
	legend6 -> AddEntry(h_225, "proton", "l");
	legend6 -> AddEntry(h_226, "e-", "l");
	legend6 -> AddEntry(h_227, "e+", "l");
	legend6 -> AddEntry(h_228, "other", "l");
	legend6 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_231 -> Draw("hist");
	h_232 -> Draw("hist same");
	h_233 -> Draw("hist same");
	h_234 -> Draw("hist same");
	h_235 -> Draw("hist same");
	h_236 -> Draw("hist same");
	h_237 -> Draw("hist same");
	h_238 -> Draw("hist same");

	h_231 -> SetLineColor(1);
	h_232 -> SetLineColor(2);
	h_233 -> SetLineColor(3);
	h_234 -> SetLineColor(4);
	h_235 -> SetLineColor(5);
	h_236 -> SetLineColor(6);
	h_237 -> SetLineColor(7);
	h_238 -> SetLineColor(8);

	auto *legend7 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend7 -> AddEntry(h_231, "pi+", "l");
	legend7 -> AddEntry(h_232, "pi-", "l");
	legend7 -> AddEntry(h_233, "mu+", "l");
	legend7 -> AddEntry(h_234, "mu-", "l");
	legend7 -> AddEntry(h_235, "proton", "l");
	legend7 -> AddEntry(h_236, "e-", "l");
	legend7 -> AddEntry(h_237, "e+", "l");
	legend7 -> AddEntry(h_238, "other", "l");
	legend7 -> Draw();
	c.SaveAs("plots.pdf");
	
	c.Clear();
	h_311_1 -> SetLineColor(1);
	h_311_2 -> SetLineColor(2);
	h_311_3 -> SetLineColor(3);
	h_311_4 -> SetLineColor(4);
	h_311_5 -> SetLineColor(5);
	h_311_6 -> SetLineColor(6);
	h_311_7 -> SetLineColor(7);
	h_311_8 -> SetLineColor(8);
	h_311_9 -> SetLineColor(9);
	h_311_10 -> SetLineColor(10);
	h_311_11 -> SetLineColor(11);
	h_311_12 -> SetLineColor(12);

	h_311_3 -> Draw("hist");
	h_311_1 -> Draw("hist same");
	h_311_2 -> Draw("hist same");
	h_311_4 -> Draw("hist same");
	h_311_5 -> Draw("hist same");
	h_311_6 -> Draw("hist same");
	h_311_7 -> Draw("hist same");
	h_311_8 -> Draw("hist same");
	h_311_9 -> Draw("hist same");
	h_311_10 -> Draw("hist same");
	h_311_11 -> Draw("hist same");
	h_311_12 -> Draw("hist same");
	
	auto *legend8 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend8 -> AddEntry(h_311_1, "CCQE");
	legend8 -> AddEntry(h_311_2, "2p2h");
	legend8 -> AddEntry(h_311_3, "RES");
	legend8 -> AddEntry(h_311_4, "DIS");
	legend8 -> AddEntry(h_311_5, "COH");
	legend8 -> AddEntry(h_311_6, "NC");
	legend8 -> AddEntry(h_311_7, "CC-#bar{#nu}_{#mu}");
	legend8 -> AddEntry(h_311_8, "cc-#nu_{e}, CC-#bar{#nu}_{e}");
	legend8 -> AddEntry(h_311_9, "other");
	legend8 -> AddEntry(h_311_10, "out FV");
	legend8 -> AddEntry(h_311_11, "no truth");
	legend8 -> AddEntry(h_311_12, "sand #mu");
	legend8 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_3122 -> Draw("hist");
	h_3121 -> Draw("hist same");
	h_3123 -> Draw("hist same");
	h_3124 -> Draw("hist same");
	h_3125 -> Draw("hist same");
	h_3126 -> Draw("hist same");
	h_3127 -> Draw("hist same");

	h_3121 -> SetLineColor(1);
	h_3122 -> SetLineColor(2);
	h_3123 -> SetLineColor(3);
	h_3124 -> SetLineColor(4);
	h_3125 -> SetLineColor(5);
	h_3126 -> SetLineColor(6);
	h_3127 -> SetLineColor(7);


	auto *legend9 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend9 -> AddEntry(h_3121, "CC-0#pi");
	legend9 -> AddEntry(h_3122, "CC-1#pi^{+}");
	legend9 -> AddEntry(h_3123, "CC-other");
	legend9 -> AddEntry(h_3124, "BKG");
	legend9 -> AddEntry(h_3125, "out FV");
	legend9 -> AddEntry(h_3126, "no truth");
	legend9 -> AddEntry(h_3127, "sand #mu");
	legend9 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_321_1 -> SetLineColor(1);
	h_321_2 -> SetLineColor(2);
	h_321_3 -> SetLineColor(3);
	h_321_4 -> SetLineColor(4);
	h_321_5 -> SetLineColor(5);
	h_321_6 -> SetLineColor(6);
	h_321_7 -> SetLineColor(7);
	h_321_8 -> SetLineColor(8);
	h_321_9 -> SetLineColor(9);
	h_321_10 -> SetLineColor(10);
	h_321_11 -> SetLineColor(11);
	h_321_12 -> SetLineColor(12);

	h_321_3 -> Draw("hist");
	h_321_1 -> Draw("hist same");
	h_321_2 -> Draw("hist same");
	h_321_4 -> Draw("hist same");
	h_321_5 -> Draw("hist same");
	h_321_6 -> Draw("hist same");
	h_321_7 -> Draw("hist same");
	h_321_8 -> Draw("hist same");
	h_321_9 -> Draw("hist same");
	h_321_10 -> Draw("hist same");
	h_321_11 -> Draw("hist same");
	h_321_12 -> Draw("hist same");

	auto *legend10 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend10 -> AddEntry(h_321_1, "CCQE");
	legend10 -> AddEntry(h_321_2, "2p2h");
	legend10 -> AddEntry(h_321_3, "RES");
	legend10 -> AddEntry(h_321_4, "DIS");
	legend10 -> AddEntry(h_321_5, "COH");
	legend10 -> AddEntry(h_321_6, "NC");
	legend10 -> AddEntry(h_321_7, "CC-#bar{#nu}_{#mu}");
	legend10 -> AddEntry(h_321_8, "cc-#nu_{e}, CC-#bar{#nu}_{e}");
	legend10 -> AddEntry(h_321_9, "other");
	legend10 -> AddEntry(h_321_10, "out FV");
	legend10 -> AddEntry(h_321_11, "no truth");
	legend10 -> AddEntry(h_321_12, "sand #mu");
	legend10 -> Draw();
	c.SaveAs("plots.pdf");

	c.Clear();
	h_3222 -> Draw("hist");
	h_3221 -> Draw("hist same");
	h_3223 -> Draw("hist same");
	h_3224 -> Draw("hist same");
	h_3225 -> Draw("hist same");
	h_3226 -> Draw("hist same");
	h_3227 -> Draw("hist same");

	h_3221 -> SetLineColor(1);
	h_3222 -> SetLineColor(2);
	h_3223 -> SetLineColor(3);
	h_3224 -> SetLineColor(4);
	h_3225 -> SetLineColor(5);
	h_3226 -> SetLineColor(6);
	h_3227 -> SetLineColor(7);


	auto *legend11 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend11 -> AddEntry(h_3221, "CC-0#pi");
	legend11 -> AddEntry(h_3222, "CC-1#pi^{+}");
	legend11 -> AddEntry(h_3223, "CC-other");
	legend11 -> AddEntry(h_3224, "BKG");
	legend11 -> AddEntry(h_3225, "out FV");
	legend11 -> AddEntry(h_3226, "no truth");
	legend11 -> AddEntry(h_3227, "sand #mu");
	legend11 -> Draw();
	c.SaveAs("plots.pdf");
/*
	c.Clear();
	h_4_1 -> SetLineColor(1);
	h_4_2 -> SetLineColor(2);
	h_4_3 -> SetLineColor(3);
	h_4_4 -> SetLineColor(4);
	h_4_5 -> SetLineColor(5);
	h_4_6 -> SetLineColor(6);
	h_4_7 -> SetLineColor(7);
	h_4_8 -> SetLineColor(8);
	h_4_9 -> SetLineColor(9);
	h_4_10 -> SetLineColor(10);
	h_4_11 -> SetLineColor(11);
	h_4_12 -> SetLineColor(12);


	h_4_3 -> Draw("hist");
	h_4_1 -> Draw("hist same");
	h_4_2 -> Draw("hist same");
	h_4_4 -> Draw("hist same");
	h_4_5 -> Draw("hist same");
	h_4_6 -> Draw("hist same");
	h_4_7 -> Draw("hist same");
	h_4_8 -> Draw("hist same");
	h_4_9 -> Draw("hist same");
	h_4_10 -> Draw("hist same");
	h_4_11 -> Draw("hist same");
	h_4_12 -> Draw("hist same");

	auto *legend12 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend12 -> AddEntry(h_4_1, "CCQE");
	legend12 -> AddEntry(h_4_2, "2p2h");
	legend12 -> AddEntry(h_4_3, "RES");
	legend12 -> AddEntry(h_4_4, "DIS");
	legend12 -> AddEntry(h_4_5, "COH");
	legend12 -> AddEntry(h_4_6, "NC");
	legend12 -> AddEntry(h_4_7, "CC-#bar{#nu}_{#mu}");
	legend12 -> AddEntry(h_4_8, "cc-#nu_{e}, CC-#bar{#nu}_{e}");
	legend12 -> AddEntry(h_4_9, "other");
	legend12 -> AddEntry(h_4_10, "out FV");
	legend12 -> AddEntry(h_4_11, "no truth");
	legend12 -> AddEntry(h_4_12, "sand #mu");
	legend12 -> Draw();
	c.SaveAs("plots.pdf");
*/
	c.Clear();
	h_533 -> Draw("hist");
	h_523 -> Draw("hist same");
	h_513 -> Draw("hist same");

	h_513 -> SetLineColor(1);
	h_523 -> SetLineColor(2);
	h_533 -> SetLineColor(3);


	auto *legend13 = new TLegend(0.7, 0.7, 0.9, 0.9);
	legend13 -> AddEntry(h_513, "muon");
	legend13 -> AddEntry(h_523, "proton");
	legend13 -> AddEntry(h_533, "pion+");

	legend13->Draw();
	c.SaveAs("plots.pdf");

	c.SaveAs("plots.pdf]");
}