#pragma once
#include <iostream>
using namespace std;

enum Suit
{
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
};

enum Rank
{
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK = 10,
    QUEEN = 10,
    KING = 10,
    ACE = 11
};

class Card
{
private:
    Suit suit;
    Rank rank;

public:
    Card(Suit s, Rank r);
    int getValue() const;
    Rank getRank() const;

    friend ostream &operator<<(ostream &os, const Card &c);
};
