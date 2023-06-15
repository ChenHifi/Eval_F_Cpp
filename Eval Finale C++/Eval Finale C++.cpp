using namespace std;
#include "Boxeur.h"
#include <iostream>
#include "Combat.h"

int main() {
    Boxeur boxeur_1("Box_1", 75);
    std::cout << "Adresse de boxeur_1 : " << &boxeur_1 << ", Nom : " << boxeur_1.getNom() << ", Poids : " << boxeur_1.getPoids() << std::endl;

    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    std::cout << "Adresse de boxeur_2 : " << boxeur_2 << ", Nom : " << boxeur_2->getNom() << ", Poids : " << boxeur_2->getPoids() << std::endl;

    Combat combat_1("Comb_1_1/8");
    std::cout << "Adresse de combat_1 : " << &combat_1 << ", Niveau : " << combat_1.getNiveau() << std::endl;

    combat_1.setCoinBleu(&boxeur_1);
    combat_1.setCoinRouge(boxeur_2);

    std::cout << "Boxeur dans le coin bleu : " << combat_1.getCoinBleu()->getNom() << std::endl;
    std::cout << "Boxeur dans le coin rouge : " << combat_1.getCoinRouge()->getNom() << std::endl;

    Boxeur* vainqueur = combat_1.getVainqueur();
    if (vainqueur != nullptr) {
        std::cout << "Vainqueur : " << vainqueur->getNom() << std::endl;
    }
    else {
        std::cout << "Aucun vainqueur désigné." << std::endl;
    }

    delete boxeur_2;

    return 0;
}
