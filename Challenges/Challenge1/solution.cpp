
// Challenge1
// As done by Nate Moon

#include <iostream>
using namespace std;

int main()
{
    // Create all of the variables that I need
    
    char firstIntial, secondInitial;
    double bestTime;
    int age, numTeammates;
    bool willCompete;
    
    // Get the user's initials
    
    cout << "What are your initials?\t";
    cin >> firstIntial >> secondInitial;

    // Get the best mile time
    
    cout << "What is your best mile time?\t";
    cin >> bestTime;
    
    // Get the user's age
    
    cout << "What is your age?\t";
    cin >> age;
    
    // Get willCompete
    
    cout << "Are you going to compete in the next competition? (1=true/0=false):\t";
    cin >> willCompete;

    // Get number of teammates
    
    cout << "How many teammates do you have?\t";
    cin >> numTeammates;
    
    // Now output everything
    
    cout << "Here is all of your information:" << endl;
    cout << "\tInitials: " << firstIntial << secondInitial << endl;
    cout << "\tBest Time: " << bestTime << " seconds" << endl;
    cout << "\tAge: " << age << " years old" << endl;
    
    // Use your Google foo to figure this one out
    cout << "Will compete in next meet: " << (willCompete ? "Yes":"No") << endl;
    
    cout << "Number of teammates: " << numTeammates << endl;
    
    cout << endl;
    
    
    
    return 0;
}






