#include "Deck.h"

Deck::Deck()
{
    initDeck();
}

void Deck::initDeck()
{
    cards.clear();
    Suit suits[] = {HEARTS, DIAMONDS, CLUBS, SPADES};
    Rank ranks[] = {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

    // cream toate cele 52 de carti
    for (Suit s : suits)
    {
        for (Rank r : ranks)
        {
            cards.push_back(Card(s, r));
        }
    }
}

void Deck::shuffle()
{
    random_device rd; // pentru a obtine un seed bazat pe hardware
    mt19937 g(rd());  // generator de numere aleatoarii bazat pe Mersenne Twister
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::drawCard()
{
    if (cards.empty())
    {
        throw std::out_of_range("Pachetul este gol!");
    }

    // luam ultima carte din pachet si o eliminam
    Card drawn = cards.back();
    cards.pop_back();
    return drawn;
}