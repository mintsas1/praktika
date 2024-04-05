#include <iostream>
#include <string>

using namespace std;


struct BankAccount {
    string owner_name;
    string account_number;
    double balance;

    
    void deposit(double amount) {
        balance += amount;
        cout << "Money deposited successfully. New balance: " << balance << endl;
    }

   
    void display_balance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

   
    account.owner_name = "David Key";
    account.account_number = "1234567890";
    account.balance = 1000.0;

    
    account.display_balance(); 

    account.deposit(500.0); 
    account.deposit(200.0); 
    account.display_balance(); 

    return 0;
}


