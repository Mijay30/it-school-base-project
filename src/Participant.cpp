#include "Participant.h"

Participant::Participant(string n) : name(n) {}

void Participant::addCard(const Card &c)
{
    hand.push_back(c);
}

int Participant::calculateScore() const
{
    int score = 0;
    int aces = 0;
    for (const auto &card : hand)
    {
        score += card.getValue();
        if (card.getRank() == ACE)
            aces++;
    }
    while (score > 21 && aces > 0)
    {
        score -= 10;
        aces--;
    }
    return score;
}

bool Participant::isBusted() const
{
    return calculateScore() > 21;
}

void Participant::showHand() const
{
    cout << name << " are in mana: ";
    for (const auto &card : hand)
    {
        cout << card << " ";
    }
    cout << " (Scor: " << calculateScore() << ")" << endl;
}