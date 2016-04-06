
/*
    Example code for primitive data types and console input/output

    This is how you write block comments -- use them generously!
*/


// This is how you write single line comments
// Here we are just including our ability to output to console

#include <iostream>
using namespace std;


/*
    The computer will always start executing code at the beginning of int main()
        and will continue executing until the end of int main() unless told otherwise.  
*/

int main()
{
    // The computer starts executing here at run time!

    cout << "Here's a quick program about primitive data types!" << endl;

    /*
        Primitive data types:
            Integral Number:

                Signed:

                    short                        –32,768 to 32,767
                    int                            –2,147,483,648 to 2,147,483,647
                    long                        –2,147,483,648 to 2,147,483,647
                    long long               –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

                Unsigned:

                    unsigned short         0 to 65,535
                    unsigned int             0 to 4,294,967,295
                    unsigned long           0 to 4,294,967,295

                Other Integrals:

                    char                             0 to 255
                    bool                            0 = false, everything else = true

            Real Numbers:

                float                           3.4E +/- 38 (7 digits)
                double                      1.7E +/- 308 (15 digits)
    */


    // So let's make some data

    int myAge = 21;

    /*
        What happened here???
        Here is the format the C++ follows:
            <data type> <name of variable> = <value>;

        This is called declaration and assignment.  
    */

    // You can also just declare a variable

    double myGPA;

    // And assign a value later

    myGPA = 3.87;

    // Here are some character variables
    // You can chain together declarations/Assignments of the same data type
    // Use SINGLE QUOTES to initialize character

    char myFirstInitial = 'N', mySecondInitial = 'M';

    // You can also reassign variables that already exist
    // This overwrites the previous value, forgetting it entirely

    myGPA = 3.94;

    // Let's try out boolean values
    // Remember that these are either true or false
    // We can use the keywords "true" and "false"
    //      or we can use values - 0 = false, all other #s = true

    bool iAmATeacher = true;
    bool iAmATeenager;

    iAmATeenager = 0;

    /*
        We will use cout to output whatever we want to the console.  
        We will learn more about this later, but for now settle for the knowledge
        that it is an output stream that will let us stick things into a window to view
        output.  

        You must be using #include<iostream> to use cout!!!!!

        cout is follows by double less thans for each statement
        Separate each variable inclusion by <<, as well as separate string 
                statements

        endl means end of line, and creates a line break

        "\" means the next character is a special character
                \n makes a new line
                \t makes a tab
    */

    cout << "Hi there!" << endl;
    cout << "My initials are " << myFirstInitial << mySecondInitial << endl;
    cout << "I am " << myAge << " years old" << endl;
    cout << "My GPA is " << myGPA << endl;
    cout << "Am I a teacher? (0=false, 1=true): " << iAmATeacher << endl;
    cout << "Am I a teenager? (0=false, 1=true): " << iAmATeenager << endl;
    cout << "\tPeace out girlscout\n\n\n";
    cout << "\t\tSee you later alligator\n\n\n";


    /*
        You can also use console input!

        Use cin to grab input from the user!

        We need double greater thans for this!
            cin >> variable;


        Let's ask the user what school year they are in
    */

    // First we need a place to store the user's input
    // So we will declare a variable to hold their input, but not assign it!

    unsigned short schoolYear;

    // Prompt the user first so they know what to do!

    cout << "Hey you, please enter your school year (9-12):\t";

    // Now grab input from the user
    // This pauses program execution

    cin >> schoolYear;

    // Let them know you got the data

    cout << "Wow!  You're in the " << schoolYear << "th grade!  Very neat." << endl;


    return 0;
}





