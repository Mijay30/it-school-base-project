#include "Card.h"
#include <string>
using namespace std;

// costructor pentru card, simbol si rang
Card::Card(Suit s, Rank r) : suit(s), rank(r) {}

int Card::getValue() const
{
    return rank;
}

Rank Card::getRank() const
{
    return rank;
}

// suprascriere operator << pentru a afisa cardul in formatul dorit
ostream &operator<<(ostream &os, const Card &c)
{
    string suits[] = {"Inima Rosie", "Romb", "Trefla", "Inima Neagra"};

    // conversie rang in string pentru afisare
    string rankStr = (c.rank >= 2 && c.rank <= 10 && c.rank != ACE) ? to_string(c.rank) : "";
    if (c.rank == JACK)
        rankStr = "J";
    if (c.rank == QUEEN)
        rankStr = "Q";
    if (c.rank == KING)
        rankStr = "K";
    if (c.rank == ACE)
        rankStr = "A";

    os << "[" << rankStr << " de " << suits[c.suit] << "]";
    return os;
}