//
//  main.cpp
//  hat_game
//
//  Created by Isabella Wloch on 6/3/21.
//

#include <iostream>
using namespace std;


int getNumPlayers();
bool numValid();
char playerColors[10];
void printOutcomes();
int numPlayers;
string colorString;

int main() {
    cout << "Welcome to the hat game possibilities simulator!" << endl;
    numPlayers = getNumPlayers();
    bool valid = numValid();
    if (!(valid)){
        return 0;
    }
    else {
        cout << "Choose " << numPlayers << " colors (enter the first letter ie R = red, and enter without spaces! (RGB not R G B)" << endl;
        cin >> colorString;
        for (int a = 0; a < colorString.size(); a++){
            playerColors[a] = colorString.at(a);
        }
        cout << " ---------------------------------- " << endl;
        cout << "Here are all the possibilities for the game!" << endl;
        printOutcomes();
    }
}

int getNumPlayers() {
    int numPlayers;
    cout << "Please enter the number of players (Max number is 10)" << endl;
    cin >> numPlayers;
    return numPlayers;
}

bool numValid(){
    if (numPlayers >= 0 && numPlayers <= 10){
        return true;
    }
    else {
        return false;
    }
}

void printOutcomes(){
    for (int i = 0; i < numPlayers; i++){
        for (int j = 0; j < numPlayers; j++){
            for (int k = 0; k < numPlayers; k++){
                cout << playerColors[i] << playerColors[j] << playerColors[k] << endl;
            }
        }
    }
    return;
}
