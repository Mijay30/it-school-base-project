#include "Player.h"
#include "Deck.h"

// transmite numele jucatorilui catre Participant
Player::Player(string n) : Participant(n) {}

// bucla de decizie pentru jucator: hit sau stand
bool Player::playTurn(Deck &deck)
{
    char choice;
    while (!isBusted())
    {
        cout << "\nHit (h) sau Stand (s)? ";
        try
        {
            cin >> choice;
            // verificam daca inputul este valid
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

        // gasim orice exceptie legata de input sau de pachetul gol
        catch (const exception &e)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Eroare: " << e.what() << "\n";
        }
    }
    return false;
}