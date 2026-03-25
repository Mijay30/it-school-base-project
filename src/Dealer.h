#pragma once
#include "Participant.h"
#include <iostream>
using namespace std;

class Dealer : public Participant
{
public:
    Dealer();
    bool playTurn(Deck &deck) override;
};