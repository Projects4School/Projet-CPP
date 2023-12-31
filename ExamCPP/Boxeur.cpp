//
//  Boxeur.cpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include <iostream>

#include "config.h"
#include "Boxeur.hpp"

using namespace Boxe;

Boxeur::Boxeur(std::string nom, double poids)
    : m_nom(nom)
    , m_poids(poids)
{
#ifdef TRACE
    TRACE_START();
#endif
};

Boxeur::~Boxeur()
{
#ifdef TRACE
    TRACE_END();
#endif
};
