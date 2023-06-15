//
//  Boxeur.hpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#ifndef Boxeur_hpp
#define Boxeur_hpp

#include <stdio.h>
#include <string>

namespace Boxe
{

class Boxeur
{
public:
    Boxeur(std::string nom, double poids);
    ~Boxeur();
    
    const std::string&  GetNom() { return m_nom; };
    const double        GetPoids() { return m_poids; };
    void                SetPoids(double poids) { m_poids = poids; };
private:
    std::string m_nom;
    double      m_poids;
};

}; // namespace Boxe

#endif /* Boxeur_hpp */
