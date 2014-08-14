#include <iostream>
#include<stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string figures[] = {"Scissor", "Paper", "Rock"};

    srand (time(NULL));
    int computerChoice = rand() % 3;
    int playerChoice;

    cout << "Enter your choice --> scissor (0), rock (1), paper (2) : ";
    cin >> playerChoice;

    if (playerChoice >= 0 && playerChoice <=2) {
        cout<<"\n";
        if ((computerChoice + 1)%3 == playerChoice)
            cout<<"The computer is "<<figures[computerChoice]<<". You are "<<figures[playerChoice]<<". You lost";
        else if (playerChoice == computerChoice)
            cout<<"The computer is "<<figures[computerChoice]<<". You are "<<figures[playerChoice]<<". It a draw";
        else
            cout<<"The computer is "<<figures[computerChoice]<<". You are "<<figures[playerChoice]<<". You won";
    }

    cout<<"\n";
    return 0;
}
