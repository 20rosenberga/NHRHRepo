
/*
    Here we shall learn about how C++ employs arithmetic operators.

    What are arithmetic operators??
    The same stuff you've been doing since you were learning how to spell
        e.g. +, -, *, /, %

    So let's see how this stuff works

*/

#include<iostream>
using namespace std;


int main()
{
    // Let's make ourselves some variables to work with
    // Let's pretend you have a wallet with 80 dollars in it

    int wallet = 80;

    /*
        C++ evaluates each arithmetic operation as an expression.
        Each expression produces a result.
        You must use the result to have valid syntax.

        For example:
            80 + 4;               // this is not valid code
            int x = 80 + 4;     // This is valid code because we used the result

            The computer evaluates 80 + 4 first and computes that it is in fact 84 and
                then proceeds to assign 84 to x

        Arithmetic operations follow the same order of operations as normal math!!!!!!

        We can change this by using parentheses:
            int x = 3 + 4 * 10;         // Assigns 43 to x
            int y = (3 + 4) * 10        // Assigns 70 to y

    */

    // Cool!  You just found two dollars on the ground!
    // Let's add 2 to the current value of our wallet

    wallet = wallet + 2;

    // Now your friend Teddy pays you 13 dollars because you bought him Panera yesterday
    // Let's add two variables together

    int teddysDebt = 13;

    wallet = wallet + teddysDebt;
    
    // As it happens there is a short hand for adding a value to variable like we just did
    // Let's say that Sally also owes you for that chocolate milk last week
    // This is exactly the same as the Tedd'ys debt operation!

    int sallysDebt = 4;

    wallet += sallysDebt;

    // Now let's spend two dollars on coffee

    wallet -= 2;

    // Oh and the money fairy came and doubled your money!

    wallet *= 2;

    // Just kidding there's no such thing as a money fairy

    wallet /= 2;

    /*
        Incrementation is a very common operation in computer science.

        Incrementation and decrementation are where we increase or decrease
            a variable by a constant value

        What if we want only odd numbers? We can keep incrementing 1 by 2

            int x = 1;
            x = x + 2;  // x is now 3
            x += 2;      // x is now 5

        Decrement, too

            x -= 2;

        There is a short hand for incrementing and decrementing by one

            int i = 10;
            i++;            // i is now 11
            i++;            // i is now 12
            i--;            // i is now 11
            i--;            // i is 10 again

    */

    // Let's drop four silver dollars into our wallet one by one

    wallet++;
    wallet++;
    wallet++;
    wallet++;

    // Now let's take one out and buy some gum

    wallet--;

    
    /*
     
        Now let's talk about modulus:
            
                % <---- this guy is modulus
     
        Modulus is like division, but it gives you the remainder instead of the quotient
        Modulus can only be used with integrals!
     
        For example:
            
            7 % 2 = 1
     
        Here's how we can use it:
     
            int mod = 15 % 4;   // mod now equals 3
    
     
     */

    // Assume that you have 83 dollars in your wallet
    
    wallet = 83;
    
    // Now you need to split it evenly between four friends
    // How much will you have left over and how much will each friend have?
    
    int friendMoney = wallet / 4;
    int leftOver = wallet % 4;
    
    
    // Very cool!  We'll see a ton of different uses for modulus

    return 0;
}