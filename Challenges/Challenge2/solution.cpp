
// Challenge2
// As done by Nate Moon

#include <iostream>
using namespace std;

int main()
{
    // Set up all of my variables
    
    double cashierBalance = 300, walletBalance = 29, price;
    
    // Simulate
    
    cout << "Welcome to my cashier" << endl;
    cout << "I see that you would like to buy an Ehiorobo CD." << endl;
    cout << "How much does the price tag say?\t";
    cin >> price;
    walletBalance -= price;
    cashierBalance += price;
    cout << "Just in case you wanted to know..." << endl;
    cout << "I have $" << cashierBalance << " in my cashier" << endl;
    cout << "And I can see that you have $" << walletBalance << " in your wallet" << endl;
    cout << "Have a great day" << endl << endl;
    
    
    
    return 0;
}





