

// Example code for switch statements


#include <iostream>
using namespace std;

int main()
{
    /*
     
     Coding if/else statements can get pretty tedious... 
     What if there are dozens of if conditions involved in a decision?
     
     Well it turns out that C++ offers a shorthand for some types of if/else 
     situations. 
     
     It's called the switch statement.
     
     Here's how it goes...
     
     switch(variable)
     {
        case 1:
        {
            [code to be executed]
            break;
        }
        case 2:
        {
            [code to be executed]
            break;
        }
        .   
        .
        .
        .
        case n:
        {
            [code to be executed at the nth case]
            break;
        }
        default:
        {
            [code to be executed by default]
        }
     }
     
     The switch statement tests the give variable (in the first line)
     against all of the different cases.
     
     THE VARIABLE MUST BE AN INTEGER.
     
     ^ Read that line again
     
     ^ Yes the line in all caps
     
     The break statements cause the code to exit the switch after a matching case is found
     
     
     !!! Keep in mind that characters are actually integers !!!
     
     
     */
    
    
    
    // Suppose that we want to present the user with a menu
    
    // Make a variable to hold input
    
    int input;
    
    // Give the user the menu
    
    cout << "Which mysterbox would you like to open? (1-5): ";
    cin >> input;
    
    // Now decide which mystery box to open for them
    
    switch (input)
    {
        case 1:
        {
            cout << "You got a bunny!" << endl;
            break;
        }
        case 2:
        {
            cout << "You got a sword!" << endl;
            break;
        }
        case 3:
        {
            cout << "You got an amulet!" << endl;
            break;
        }
        case 4:
        {
            cout << "You got a shield!" << endl;
            break;
        }
        case 5:
        {
            cout << "You got a dragon!" << endl;
            break;
        }
        default:
        {
            cout << "You didn't choose a valid box so you don't get diddly squat" << endl;
        }
        
    }

    
    
    return 0;
}








