#include <TH1F.h>
#include <TLegend.h>

void big_market(){

	TFile *f = new TFile("~/Desktop/PPSS2021/ROOT 2021/ex1/data/pumpkins_big.root", "read");
	TTree *tree = (TTree*)f->Get("transactions");
	//TCanvas c("c1", "Canvas 1", 1024, 768);

	int entries = tree->GetEntries();
	Int_t n[entries];
	Float_t color[entries];
	Float_t mass[entries];
	tree->SetBranchAddress("n", &n);
	tree->SetBranchAddress("color", &color);
	tree->SetBranchAddress("mass", &mass);
	
	TH1F* hist_all = new TH1F("hist_all", ";pumpkin mass [kg];number of pumpkins / 50 g", 240, 0, 14);
	tree->Draw("mass>>hist_all");
	hist_all->SetLineColor(1);


	TH1F* hist_orange = new TH1F("hist_orange", "", 240, 0, 14);
	tree->Draw("mass>>hist_orange", "color == 0");
	hist_orange->SetLineColor(2);

	TH1F* hist_green = new TH1F("hist_green", "", 240, 0, 14);
	tree->Draw("mass>>hist_green", "color == 1");
	hist_green->SetLineColor(4);

	TH1F* hist_yellow = new TH1F("hist_yellow", "", 240, 0, 14);
	tree->Draw("mass>>hist_yellow", "color == 2");
	hist_yellow->SetLineColor(6);


	TH1F* hist_red= new TH1F("hist_red", "", 240, 0, 14);
	tree->Draw("mass>>hist_red", "color == 3");
	hist_red->SetLineColor(7);


	TH1F* hist_white = new TH1F("hist_white", "", 240, 0, 14);
	tree->Draw("mass>>hist_white", "color == 4");
	hist_white->SetLineColor(9);

	gStyle -> SetOptStat(0);

	hist_all->Draw();
	hist_orange->Draw("same");
	hist_green->Draw("same");
	hist_yellow->Draw("same");
	hist_red->Draw("same");
	hist_white->Draw("same");

	auto* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
	
	legend->AddEntry(hist_orange, "orange", "l");
	legend->AddEntry(hist_green, "green", "l");
	legend->AddEntry(hist_yellow, "yellow", "l");
	legend->AddEntry(hist_red, "red", "l");
	legend->AddEntry(hist_white, "white", "l");
	legend->AddEntry(hist_all, "all", "l");

	legend->Draw();


	//cout << "\n";

	//tree->ls();


	//cout << "\n\nTotal number of transactions: " << entries << endl << endl;


	//tree->Print();	//Structure of the tree and the compression
	
	//gPad->SetLogy(1);
	//tree->Draw("n");

	//gStyle->SetFillColor(kRed);
}	

int main(){
	big_market();
}	