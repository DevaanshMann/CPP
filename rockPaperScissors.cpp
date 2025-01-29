#include<iostream>
#include<ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "\nYour choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's Choice: ";
    showChoice(computer);

    cout << "\n";
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    
    char player;
    cout << "ROCK-PAPER-SCISSORS GAME!\n";

    do
    {
        cout << "Choose one of the following!\n";
        cout << "*************************\n";
        cout << "'r' for ROCK\n";
        cout << "'p' for PAPER\n";
        cout << "'s' for SCISSORS\n\n";

    cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice(){

    srand(time(nullptr));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    
    default: return 'e';
    }
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r': cout << "ROCK\n";
        break;
    case 'p': cout << "PAPER\n";
        break;
    case 's': cout << "SCISSORS\n";
        break;
    
    default: cout << "Invalid choice!";
        break;
    }
}

void chooseWinner(char player, char computer){

    switch (player)
    {

    // Case 'r'
    case 'r': if (computer == 'r')
    {
        cout << "Its a tie!\n";
    }
    else if (computer == 'p')
    {
        cout << "You lose!\n";
    }
    else{
        cout << "You win!\n";
    }
        break;
    
    // Case 'p'
    case 'p': if (computer == 'r')
    {
        cout << "You win!\n";
    }
    else if (computer == 'p')
    {
        cout << "Its a tie!\n";
    }
    else{
        cout << "You lose!\n";
    }
        break;

    // Case 's'
    case 's': if (computer == 'r')
    {
        cout << "You lose!\n";
    }
    else if (computer == 'p')
    {
        cout << "You win!\n";
    }
    else{
        cout << "Its a tie!\n";
    }
        break;
    
    default:
        break;
    }
}