#pragma once
#include "Participant.h"
#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

class Player : public Participant
{
public:
    Player(string n);
    bool playTurn(Deck &deck) override;
};