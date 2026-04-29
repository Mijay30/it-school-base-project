# Proiect Blackjack C++

Joc de carti Blackjack (21) implementat in C++, jucat in consola impotriva unui Dealer.

## 🚀 Compilare si Rulare (CMake)

```bash
mkdir build
cd build
cmake ..
cmake --build .
./blackjack

🃏 Functionalitati
Joc Complet: Impartire carti, optiuni Hit/Stand si calcul scor.

Logica Asului: Valoarea Asului se schimba automat (11 sau 1) pentru a evita bust-ul.

Dealer Automat: Trage carti pana la scorul de 17.

Amestecare: Pachet de 52 de carti amestecat aleatoriu la fiecare joc.

🛠️ Concepte OOP folosite
Mostenire: Clasele Player si Dealer deriva din Participant.

Polimorfism: Functii virtuale pentru gestionarea randului fiecarui jucator.

Singleton: Clasa Game asigura o singura instanta a jocului.

STL: Utilizarea vector pentru carti si algoritmi de amestecare.

Error Handling: Validarea input-ului cu blocuri try-catch.

📂 Structura Fisierelor
main.cpp - Intrarea in program.

src/ - Implementarea claselor (Card, Deck, Participant, Player, Dealer, Game).

CMakeLists.txt - Configurarea pentru build.