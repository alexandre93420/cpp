#include "funct.h"
#include <iostream>

using namespace std;

bool isInt(double v)
{

    int n1 = (int)v;
    double n2 = (double)n1;

    if (v == n2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Factorial function
int fact(int n)
{

    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    if (n == 0)
    {
        return 1;
    }
}