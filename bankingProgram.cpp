// user name, id, account no, 
// account type
// deposit, withdrawal, loan, interest, credit limit, credit


#include<iostream>

using namespace std;

void userDetails(string Name, int ID, int accNo){
    cout << "The User Details are:" << '\n' << "Name: " << Name << '\n'<< "User ID: " << ID << '\n' << "Account Number: " << accNo << '\n';
}

void accountType(string Checking, string Savings){
    cout << "Select account type: " ;

}

void tranctionType(){

}

void loan(){

}

void credit(){

}

int main(){

    cout << "**********BANKING SYSTEM**********" << '\n';


    string Name = "Devaansh";
    int ID = 11125434;
    int accNo = 778473546;


    string Checking = "Checking";
    string Savings = "Savings";



    userDetails(Name, ID, accNo);
    accountType(Checking, Savings);
    tranctionType();
    loan();
    credit();


    return 0;
}



