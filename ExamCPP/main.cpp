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

    // Boxeur tests
    Boxeur boxeur_1 = Boxeur("Box_1", 75);
    std::cout << "Adresse : " << &boxeur_1 << " Nom : " << boxeur_1.GetNom() << " Poids : " << boxeur_1.GetPoids() << std::endl;
    
    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    std::cout << "Adresse : " << boxeur_2 << " Nom : " << boxeur_2->GetNom() << " Poids : " << boxeur_2->GetPoids() << std::endl;
    
    delete boxeur_2;
    
    // Combat tests
    Combat combat_1 = Combat("Comb_1_1/8");
    std::cout << "Adresse : " << &combat_1 << " Nom : " << combat_1.GetNiveau() << std::endl;
    
    return 0;
}
