#include "tableau.h"
#include <iostream>
#include <random>
#include <iomanip>

int main()
{
	int cases;
	int valeurs;
	Usetab use;
	use.afficher();
	std::cout << std::endl << "Voici la valeurs minimale : " << use.minimum() << std::endl;
	std::cout << "Voici la valeurs maximale : " << use.maximum() << std::endl;
	std::cout << "Veillez saisir 10 valeurs" << std::endl;
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
	return 0;


}

