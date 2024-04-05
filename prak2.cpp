#include <iostream>

using namespace std;

int main() {
    int number;
    int* ptr = nullptr; 

    cout << "Enter a number: ";
    cin >> number;

    ptr = &number; 

    
    cout << "Initial value of the number: " << number << endl;
    cout << "Address of the variable: " << ptr << endl;

  
    *ptr = 100;

   
    cout << "New value of the number: " << number << endl;
    cout << "Address of the variable: " << ptr << endl;

    return 0;
}

