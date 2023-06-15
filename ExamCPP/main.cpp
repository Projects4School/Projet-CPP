//
//  main.cpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include <iostream>

#include "Combat.hpp"

using namespace Boxe;

int main(int argc, const char * argv[]) {

    // Init Boxeur
    Boxeur boxeur_1 = Boxeur("Box_1", 75);
    std::cout << "Adresse : " << &boxeur_1 << " Nom : " << boxeur_1.GetNom() << " Poids : " << boxeur_1.GetPoids() << std::endl;
    
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    std::cout << "Adresse : " << boxeur_2 << " Nom : " << boxeur_2->GetNom() << " Poids : " << boxeur_2->GetPoids() << std::endl;
    
    // Init combat
    Combat combat_1 = Combat("Comb_1_1/8");
    std::cout << "Adresse : " << &combat_1 << " Nom : " << combat_1.GetNiveau() << std::endl;
    
    // App
    combat_1.SetCoinBleu(&boxeur_1);
    combat_1.SetCoinRouge(boxeur_2);
    
    // Deinit
    delete boxeur_2;
    
    return 0;
}
