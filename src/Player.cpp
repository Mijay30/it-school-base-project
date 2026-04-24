#include "Player.h"
#include "Deck.h"

Player::Player(string n) : Participant(n) {}

bool Player::playTurn(Deck &deck)
{
    char choice;
    while (!isBusted())
    {
        cout << "\nHit (h) sau Stand (s)? ";
        try
        {
            cin >> choice;
            if (cin.fail())
                throw invalid_argument("Input invalid");

            if (choice == 'h' || choice == 'H')
            {
                Card drawn = deck.drawCard();
                addCard(drawn);
                cout << "Ai tras: " << drawn << "\n";
                showHand();
            }
            else if (choice == 's' || choice == 'S')
            {
                return false;
            }
            else
            {
                cout << "Optiune invalida.\n";
            }
        }
        catch (const exception &e)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Eroare: " << e.what() << "\n";
        }
    }
    return false;
}