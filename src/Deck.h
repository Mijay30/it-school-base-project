#pragma once
#include "Card.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <stdexcept>
using namespace std;

class Deck
{
private:
    vector<Card> cards;

public:
    Deck();
    void initDeck();
    void shuffle();
    Card drawCard();
};