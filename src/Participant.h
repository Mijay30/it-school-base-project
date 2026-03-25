#pragma once
#include "Card.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Deck;

class Participant
{
protected:
    string name;
    vector<Card> hand;

public:
    Participant(string n);
    virtual ~Participant() = default;

    void addCard(const Card &c);
    int calculateScore() const;
    bool isBusted() const;
    void showHand() const;

    virtual bool playTurn(Deck &deck) = 0;
};