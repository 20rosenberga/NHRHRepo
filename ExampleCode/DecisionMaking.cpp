/*
    Here we shall learn about how computers make decision.
 
    The most fundamental mechanism is the if/else statement
 
    This is what we are going to learn right now.
 
 */

#include <iostream>
using namespace std;

int main()
{
    
    /*
        Basics of if/else statements
     
        Here is the syntax:
            
            if( [condition] )
            {
                [code to execute if condition is true]
            }
            else
            {
                [code to execute if condition is false]
            }
     
        NOTE:  The else block is optional!!!!
     
        The computer evaluates the condition that is inside the if statement.
        If the condition is true, it executes the code in the if statement.
        If the condition is false, it executes the code in the else statement.
        It then continutes to execute the program. We can choose to omit the else block.
     
        We can also have else if:
     
            if( [condition] )
            {
                [code to execute if condition is true]
            }
            else if( [another condition] )
            {
     
            }
            else
            {
                [code to execute if condition is false]
            }
     
        This just allows us to add more and more options to the if else
     
    
        Here is a list of operators to use in comparison.
        Statements with these will evaluate to true or false:
     
        Comparison Operators: (assume a = 3 and b = 4)
            ==  Equals          Ex. a == b  -> false
            !=  Not Equals      Ex. a != b  -> true
            <   Less than       Ex. a < b   -> true
            >   Greater than    Ex. a > b   -> false
            <=  LT or equal to  Ex. a <= b  -> true
            >=  GT or equal to  Ex. a >= b  -> false
     
     
        Use them like this:
    
            if ( a <= b )
            {
                // Code to execute
            }
     
            
        If you have a boolean variable, then it is already true or false.  
        You can use it like so:
     
            bool myBoolean = true;
     
            if(myBoolean) -> evaluates to true
            { ... }
            
            Or negate it with the ! operator:
     
            if(!myBoolean) -> evaluates to false
            { ... }
     
     
        Now let's write some code...
     
     
     
     */
    
    
    /*
        Consider the case of an invitation to a masquerade.
        We are going to ask the user if they are going to the masquerade.
        Depending on their answer, we will ask more questions...
     */
    
    
    // Let's make some variables
    
    bool willAttend;
    char input, mealChoice;
    
    
    // Ask the user if they are going to attend
    // Have them enter y for yes and n for no
    
    cout << "Are you going to the masquerade? (y/n): ";
    cin >> input;
    
    // Use the input to deduce if they are going or not
    
    if (input == 'y')
    {
        willAttend = true;
    }
    else
    {
        willAttend = false;
    }
    
    
    // If they aren't attending, just end the program
    
    if(!willAttend)
    {
        cout << "Oh well! See you next time ..." << endl;
        
        // Here we can end the program early
        return 0;
    }

    // If they are attending, get the type of meal that they want
    
    cout << "Choose a type of meal do you want?" << endl;
    cout << "\tc: Chicken" << endl;
    cout << "\ts: Steak" << endl;
    cout << "\tb: Burger" << endl;
    cout << "\tv: Vegan Option" << endl;
    cout << "\tm: McDonald's" << endl;
    cout << "Choice:";
    cin >> mealChoice;
    
    
    if (mealChoice == 'c')
    {
        cout << "So you want the Chicken! Thanks!" << endl;
    }
    else if (mealChoice == 's')
    {
        cout << "So you want the Steak! Thanks!" << endl;
    }
    else if (mealChoice == 'b')
    {
        cout << "So you want the Burger! Thanks!" << endl;
    }
    else if (mealChoice == 'v')
    {
        cout << "So you want the Vegan Option! Thanks!" << endl;
    }
    else if (mealChoice == 'm')
    {
        cout << "So you want the McDonald's! Thanks!" << endl;
    }
    else
    {
        cout << "You didn't choose a valid option ... looks like you don't get to eat" << endl;
    }
    
    
    cout << "See you at the masquerade!" << endl;

    return 0;
}






