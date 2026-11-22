#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int choice, computer;
    int wins = 0, loses = 0;
    int round = 1;

    string options[] = {"", "Rock", "Paper", "Scissors"};

    while (true) {

        cout << "\n========================================"<<endl;
        cout << "          ROCK PAPER SCISSORS            "<<endl;
        cout << "========================================"<<endl;
        cout << "              ROUND " << round << "\n\n";

        cout << "CHOOSE YOUR MOVE:"<<endl;
        cout << "[1] Rock"<<endl;
        cout << "[2] Paper"<<endl;
        cout << "[3] Scissors"<<endl;
        cout << "[4] Exit"<<endl;

        cout << "\nYour choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input! Please enter a number."<<endl;
            continue;
        }

        if (choice == 4)
            break;

        if (choice < 1 || choice > 3) {
            cout << "\nInvalid choice! Try again."<<endl;
            continue;
        }

        computer = rand() % 3 + 1;

        cout << "\n------------- ROUND RESULT -------------"<<endl;

        cout << "Your move: " << options[choice] << endl;
        cout << "Computer's move: " << options[computer] << endl;

        if (choice == computer) {
            cout << "\nIt's a Draw!"<<endl;
        }
        else if ((choice == 1 && computer == 3) ||
                 (choice == 2 && computer == 1) ||
                 (choice == 3 && computer == 2)) {

            cout << "\nExcellent move! You won this round!"<<endl;
            wins++;
        }
        else {
            cout << "\nComputer takes this round!"<<endl;
            loses++;
        }

        cout << "\n--------------- CURRENT SCORE ---------------"<<endl;
        cout << "Player Wins: " << wins << endl;
        cout << "Computer Wins: " << loses << endl;
        cout << "----------------------------------------------"<<endl;

        round++;
    }

    cout << "\n========================================"<<endl;
    cout << "               FINAL SCORE              "<<endl;
    cout << "========================================"<<endl;

    cout << "Total Rounds Played: " << round - 1 << endl;
    cout << "Player Wins: " << wins << endl;
    cout << "Computer Wins: " << loses << endl;

    cout << "\nThank you for playing!"<<endl;
    cout << "========================================"<<endl;

    return 0;
}
