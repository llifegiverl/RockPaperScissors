#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
    srand(time(NULL));
    char ai;
    char user;
    char autoLose;
    int timesToPlay = 0;
    cout << "How many Times do you want to play?" << endl;
    cin >> timesToPlay;
    
    for (int j = 0; j < timesToPlay; j++) {
        int i = rand() % 3 +1;
        cout << "Enter Character For What You Want To Play" << endl;
        cout << "R For Rock, S For Scissors, P For Paper " << endl;
        cin >> user;
        if (user != 'R' && user != 'S' && user != 'P') {
            cout << "Wrong Entry! Have Fun Losing!" << endl;
            user = autoLose;
        }
        switch(i) {

            case 1:
            ai = 'R';
            autoLose = 'S';
            break;

            case 2:
            ai = 'S';
            autoLose = 'P';
            break;

            case 3:
            ai = 'P';
            autoLose = 'R';
            break;

            default:
            break;

        }

        
        if (ai == 'R') {
            if (user == 'R')
                cout << "Tie Game!" << endl;
            else if (user == 'P')
                cout << "You Win!" << endl;
            else if (user == 'S')
                cout << "You Lost!" << endl;
        }
        else if (ai == 'P') {
            if (user == 'R')
                cout << "You Lost!" << endl;
            else if (user == 'P')
                cout << "Tie Game!" << endl;
            else if (user == 'S')
                cout << "You Win!" << endl;
        }
        else if (ai == 'S') {
            if (user == 'R')
                cout << "You Win" << endl;
            else if (user == 'S')
                cout << "Tie Game!" << endl;
            else if (user == 'P')
                cout << "You Lose!" << endl;
        }
        cout << i << endl;
    }
}