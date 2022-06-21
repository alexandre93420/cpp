#include <iostream>
#include <cmath>
#include "funct.h"

using namespace std;

// I create this function to know if a number is a int or no to do the factorial function and the modulo 
//It is a double translation in fact if the n2 is different of the v number that implies the decimal part was deleted during the int translation

int main()
{
    double first, second; // declare new variables
    char operation;
    //The code read to left to the righ so the first is a number and the second is an operator
    cin >> first >> operation;
    while ((operation != '=') && (operation != NULL))
    {
        //test to know if the number is a int to do the fact function
        if (operation == '!')
        {
            if (isInt(first))
            {
                first = fact(first);
            }
            else
            {
                cout << "Error factorial!" << endl;
                return 3;
            }
        }
        else
        {

            cin >> second;
            switch (operation)
            {
            case '+':
                first = first + second;
                break;
            case '-':
                first = first - second;
                break;
            case '*':
                first = first * second;
                break;
            case '/':
                first = first / second;
                break;
            case '%':
            {
                //if the two number are int, the code can do the modulo and if not its print an error
                if (isInt(first) && isInt(second))
                {
                    first = (int)first % (int)second;
                }
                else
                {
                    cout << "Modulo error!" << endl;
                    return 2;
                }
                break;
            }
            case '^':
                first = pow(first, second);
                break;
            default:
                cout << "Input error!" << endl;
                return 1;
            }
        }
        //in all cases, the code have to check if there is a additionnal number
        operation = NULL;
        cin >> operation;
    }
    cout << "\n";
    cout << "The result is : " << first << endl;
    return 0;
}