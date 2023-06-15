//
//  Combat.cpp
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include "Combat.hpp"

using namespace Boxe;

Combat::Combat(std::string niveau)
    : m_niveau(niveau)
    , m_pCoinBleu(NULL)
    , m_pCoinRouge(NULL)
    , m_pVainqueur(NULL)
{};

Combat::~Combat() {};
