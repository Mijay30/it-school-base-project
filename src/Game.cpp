#include "Game.h"

Game::Game() : player("Jucator") {}

Game &Game::getInstance()
{
    static Game instance;
    return instance;
}

void Game::start()
{
    cout << "=== Bine ai venit la Blackjack! ===\n\n";
    deck.shuffle();

    player.addCard(deck.drawCard());
    dealer.addCard(deck.drawCard());
    player.addCard(deck.drawCard());
    dealer.addCard(deck.drawCard());

    player.showHand();
    player.playTurn(deck);

    if (player.isBusted())
    {
        cout << "\nAi depasit 21 (Bust)! Dealerul castiga.\n";
        return;
    }

    dealer.playTurn(deck);
    determineWinner();
}

void Game::determineWinner() const
{
    cout << "\n=== REZULTATE ===\n";
    int playerScore = player.calculateScore();
    int dealerScore = dealer.calculateScore();

    cout << "Scor Final Jucator: " << playerScore << "\n";
    cout << "Scor Final Dealer: " << dealerScore << "\n";

    if (dealer.isBusted() || playerScore > dealerScore)
    {
        cout << "Felicitari! Ai castigat!\n";
    }
    else if (playerScore < dealerScore)
    {
        cout << "Dealerul castiga!\n";
    }
    else
    {
        cout << "Egalitate (Push)!\n";
    }
}