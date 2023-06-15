//
//  Combat.hpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#ifndef Combat_hpp
#define Combat_hpp

#include <stdio.h>
#include <string>

#include "Boxeur.hpp"

namespace Boxe {

class Combat
{
public:
    Combat(std::string niveau);
    ~Combat();
    
    Boxeur* GetCoinBleu() { return m_pCoinBleu; };
    void    SetCoinBleu(Boxeur* boxeur) { m_pCoinBleu = boxeur; };
    
    Boxeur* GetCoinRouge() { return m_pCoinRouge; };
    void    SetCoinRouge(Boxeur* boxeur) { m_pCoinRouge = boxeur; };
    
    Boxeur* GetVainqueur() { return m_pVainqueur; };
    void    DesignerVainqueur(Boxeur* boxeur) { m_pVainqueur = boxeur; };
    
private:
    std::string m_niveau;
    Boxeur*     m_pCoinBleu;
    Boxeur*     m_pCoinRouge;
    Boxeur*     m_pVainqueur;
};

}; // namespace Boxe

#endif /* Combat_hpp */
