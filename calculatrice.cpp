#include <iostream>
#include <string>

int main()
{
	int valeur1;
	int operateur;
	int valeur2;
	int result;
	std::string respond;

	do {
		std::cout << "Choissisez l'operation a realiser :" << std::endl;
		std::cout << "1 pour +" << std::endl;
		std::cout << "2 pour -" << std::endl;
		std::cout << "3 pour *" << std::endl;
		std::cout << "4 pour /" << std::endl;
		std::cin >> operateur;
		std::cout << "Choissisez la premiere valeur :" << std::endl;
		std::cin >> valeur1;
		std::cout << "Choissisez la deuxieme valeur :" << std::endl;
		std::cin >> valeur2;

		if (operateur == 1) {
			std::cout << valeur1 << " + " << valeur2 << std::endl;
			result = valeur1 + valeur2;
			std::cout << result << std::endl;
		}
		else if (operateur == 2) {
			std::cout << valeur1 << " - " << valeur2 << std::endl;
			result = valeur1 - valeur2;
			std::cout << result << std::endl;
		}
		else if (operateur == 3) {
			std::cout << valeur1 << " * " << valeur2 << std::endl;
			result = valeur1 * valeur2;
			std::cout << result << std::endl;
		}
		else if (operateur == 4) {
			std::cout << valeur1 << " / " << valeur2 << std::endl;
			result = valeur1 / valeur2;
			std::cout << result << std::endl;
		}
		else {
			std::cout << "Erreur syntaxe" << std::endl;
		}
		std::cout << "Veux tu continuer ?" << std::endl;
		std::cin >> respond;
	} while (respond != "non");
	return 0;
}
