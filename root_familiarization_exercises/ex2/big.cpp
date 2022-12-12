#include "MyClass.h"
#include "MyClass.C"	
//extern Long64_t jentry;

void big(){

	TFile *f = new TFile("~/Desktop/PPSS2021/ROOT 2021/ex1/data/pumpkins_big.root", "read");
	TTree *tree = (TTree*)f->Get("transactions");

	Int_t entries = tree->GetEntries();

	MyClass *m = new MyClass;

	Int_t farmer_max[] = {0, 0};	//	{index, pumpkins}
	Float_t farmer_heaviest[] = {0.0, 0.0};	// {index, weight}
	Float_t mass_white = 0;
	Int_t farmer_all = 0;
	Float_t farmer_red[] = {0, 0};	//{index, max_average}

	for (int i = 0; i < entries; i++)
	{	

		m->Show(i);
		if(m->n >= farmer_max[1])
		{	
			farmer_max[1] = m->n;
			farmer_max[0] = i;
		}

		for (int j = 0; j < m->n; j++)
		{
			if(m->mass[j] >= farmer_heaviest[1])
			{	
				farmer_heaviest[1] = m->mass[j];
				farmer_heaviest[0] = i;
			}
		}

		for (int j = 0; j < m->n; j++)
		{
			if(m->color[j] == 4)
				mass_white = mass_white + m->mass[j];
		}
		
		Int_t ctr[] = {0, 0, 0, 0, 0};

		for (int j = 0; j < m->n; j++)
		{
			if(m->color[j] == 0)
				ctr[0]++;
			else if (m->color[j] == 1)
				ctr[1]++;
			else if (m->color[j] == 2)
				ctr[2]++;
			else if (m->color[j] == 3)
				ctr[3]++;		
			else if (m->color[j] == 4)
				ctr[4]++;
		}
		
		if((ctr[0] > 0) && (ctr[1] > 0) && (ctr[2] > 0) && (ctr[3] > 0) && (ctr[4] > 0))
			farmer_all++;

		Float_t red_pumpkin[] = {0, 0};	//number, mass

		for(int j = 0; j < m->n; j++)
		{
			if(m->color[j] == 3){
				red_pumpkin[1] = red_pumpkin[1] + m->mass[j];
				red_pumpkin[0]++;
			}
		}

		if(red_pumpkin[1]/red_pumpkin[0] > farmer_red[1])
		{
			farmer_red[1] = red_pumpkin[1]/red_pumpkin[0];
			farmer_red[0] = i;
		}

	}

	cout << "\n\n\n\n\n\n\n\n\n";
	cout << "The Farmer with the most pumpkins:\n";
	cout << "Farmer # : " << farmer_max[0] <<"\t and Pumpkins : " << farmer_max[1] << "\n";

	cout << "The Farmer with the heaviest pumpkin:\n";
	cout << "Farmer # : " << farmer_heaviest[0] <<"\t and Pumpkin's weight : " << farmer_heaviest[1] << "\n";

	cout << "The total weight of white pumpkins is: " << mass_white << "\n";

	cout << "The number of farmers with all pumpkins is: " << farmer_all <<"\n";

	cout << "The farmer with the best red pumpkins is: " << farmer_red[0] <<"\t and red average: " << farmer_red[1] << "\n";

	m->Loop();
}

int main()
{
	big();
}
