#include <iostream>;
#include "tableau.h"

int max = 0;
int min = 9999;

Usetab::Usetab(void)
{
	tab[0] = 4;
	tab[1] = 7;
	tab[2] = 8;
	tab[3] = 6;
	tab[4] = 3;
	tab[5] = 2;
	tab[6] = 1;
	tab[7] = 9;
	tab[8] = 5;
	tab[9] = 8;
}

int Usetab::ecrire(int cases, int valeurs)
{
	tab[cases] = valeurs;
	return tab[cases];
}

void Usetab::modifier()
{	
	for (int i = 0; i < 10 - 0; i++)
	{
		std::cin >> tab[i];
	}

}



int Usetab::lire(int cases)
{
	return tab[cases-1];
}

void Usetab::afficher()
{

	std::cout << "tableau : ";
	for (int i(0); i<10 - 0; ++i)
	{
		std::cout << " || " << tab[i];
		if (min > tab[i])
		{
			min = tab[i];
		}

		if (max < tab[i])
		{
			max = tab[i];
		}
	}
	std::cout << std::endl;
}


int Usetab::minimum()
{
	return min;
}

int Usetab::maximum()
{
	return max;
}

void Usetab::tri()
{
	int passage = 0;
	bool permutation = true;
	int en_cours;
	while (permutation == true)
	{
		permutation = false;
		passage++;
		for (en_cours = 0; en_cours < 10 - passage; en_cours++)
		{
			if (tab[en_cours]>tab[en_cours + 1])
			{
				permutation = true;
				int temp = tab[en_cours];// on echange les deux elements
				tab[en_cours] = tab[en_cours + 1];
				tab[en_cours + 1] = temp;
			}
		}
	}
}
