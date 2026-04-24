#pragma once
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include <iostream>
using namespace std;

class Game
{
private:
    Deck deck;
    Player player;
    Dealer dealer;

    Game();

public:
    Game(const Game &) = delete;
    void operator=(const Game &) = delete;

    static Game &getInstance();

    void start();
    void determineWinner() const;
};