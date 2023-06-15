//
//  Combat.cpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include <iostream>

#include "config.h"
#include "Combat.hpp"

using namespace Boxe;

Combat::Combat(std::string niveau)
    : m_niveau(niveau)
    , m_pCoinBleu(NULL)
    , m_pCoinRouge(NULL)
    , m_pVainqueur(NULL)
{
#ifdef TRACE
    TRACE_START();
#endif
};

Combat::~Combat()
{
#ifdef TRACE
    TRACE_END();
#endif
};

void Combat::SetCoinBleu(Boxeur *boxeur)
{
    if(boxeur != m_pCoinRouge)
        m_pCoinBleu = boxeur;
};

void Combat::SetCoinRouge(Boxeur *boxeur)
{
    if(boxeur != m_pCoinBleu)
        m_pCoinRouge = boxeur;
};
