#include<iostream>
#include<iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    
    double balance = 123;
    int choice = 0;

    cin.clear();
    fflush(stdin);

    do
    {
        cout << "\nSelect from the following menu\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1: showBalance(balance);
                break;

            case 2: balance += deposit();
                    showBalance(balance);
                break;

            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;

            case 4: cout << "\nThanks for visiting!\n";
                break;
            
            default: cout << "\nInvalid choice!\n";
                break;
        }
        
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance){
    cout << "\nYour balance is: $" << setprecision(2) << fixed <<balance << '\n';
}

double deposit(){
    double amount = 0;

    cout << "\nEnter amount to be deposited: $";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else{
        cout << "\nEnter valid amount!\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance){

    double amount = 0;

    cout << "\nEnter amount to be withdrawn: $";
    cin >> amount;

    if (amount > balance)
    {
        cout << "\nInsufficient Funds!\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "\nEnter valid amount\n";
        return 0;
    }
    else{
        return amount;
    }

    return amount;

    return 0;
}

