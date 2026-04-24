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
    random_device rd;
    mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::drawCard()
{
    if (cards.empty())
    {
        throw std::out_of_range("Pachetul este gol!");
    }
    Card drawn = cards.back();
    cards.pop_back();
    return drawn;
}