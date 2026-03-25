#include "Dealer.h"
#include "Deck.h"

Dealer::Dealer() : Participant("Dealer") {}

bool Dealer::playTurn(Deck &deck)
{
    cout << "Randul Dealerului " << endl;
    showHand();
    while (calculateScore() < 17)
    {
        cout << "Dealerul trage o carte...\n";
        addCard(deck.drawCard());
        showHand();
    }
    if (!isBusted())
    {
        cout << "Dealerul se opreste la scorul " << calculateScore() << endl;
    }
    return false;
}