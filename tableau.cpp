#include "tableau.h"
#include <iostream>
#include <random>
#include <iomanip>

int main()
{
	int cases;
	int valeurs;

	// modif de code 
	Usetab use;
	use.afficher();
	std::cout << std::endl << "Voici la valeurs minimale : " << use.minimum() << std::endl;
	std::cout << "Voici la valeurs maximale : " << use.maximum() << std::endl;
	std::cout << "Veillez saisir 10 valeurs" << std::endl;				// demande et écrit dans le tableau
	use.modifier();
	use.afficher();
	std::cout << "Quelle case voulez-vous afficher ?" << std::endl;
	std::cin >> cases;
	std::cout << "Voici la valeur de votre cases : " << use.lire(cases) << std::endl;
	std::cout << "quelle case du tableau voulez-vous modifier" << std::endl;
	std::cin >> cases;
	std::cout << " quelle est votre valeur" << std::endl;
	std::cin >> valeurs;
	use.ecrire(cases, valeurs);
	use.tri();
	use.afficher();
	std::cout << std::endl << "Voici la valeurs minimale : " << use.minimum() << std::endl;
	std::cout << "Voici la valeurs maximale : " << use.maximum() << std::endl;
	//

//	std::cout << std::endl << std::endl << std::endl << std::endl;
//	int nombre = 0;
//	srand(time(NULL));
//	int T[3][4] = {};
//			for (int i(0); i < 3; i++)
//			{
//				for (int j(0); j < 4; j++)
//				{
//					nombre = rand() % 2;
//					T[i][j] = nombre;
//				}
//			}

//	for (int i(0); i < 3 ; i++)
//	{
//		for (int j (0); j < 4; j++)
//		{
//			std::cout << " || " << T[i][j];
//		}
//		std::cout << std::endl;
//	}
	return 0;


}

