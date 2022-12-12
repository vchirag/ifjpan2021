void small_market(){

	TFile *input = new TFile("~/Desktop/PPSS2021/ROOT 2021/ex1/data/pumpkins_small.root", "read");
	TTree *tree = (TTree*)input->Get("transactions");

	cout << "\n";

	tree->ls();
	
	int entries = tree->GetEntries();
	cout << "\n\nTotal number of transactions: " << entries << endl << endl;

	Int_t n[entries];
	Float_t color[entries];
	Float_t mass[entries];
	
	tree->SetBranchAddress("n", &n);
	tree->SetBranchAddress("color", &color);
	tree->SetBranchAddress("mass", &mass);
	
	cout << "\nThe sales of the 10th farmer: " << endl;		
	tree->Show(9);	//sales of the 10th farmer

	cout << "\n# of farmers that sold exactly 2 pumpkins:" << endl;
	tree->Scan("n", "n == 2");
	cout<<endl;
}

int main(){
	small_market();
}