/*
 * ASSIGNMENT 2
 *
 * PROBLEM 2
 * 
 * Program to choose k objects from n distinct objects
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>

int factorial(int);

int main()
{
    int n, k, res, N, R, R1;

    scanf ("%d%d", &n, &k);

    // if k is greater than n, then result is 0
    if (k > n)
        printf ("0\n");

    // else calculate nCr
    else
    {
        res = factorial(n) / (factorial(k) * factorial(n - k));
        printf ("%d\n", res);
    }
    return 0;
}

// Function to calculate the factorial of a given number x
int factorial(int x)
{
    if (x <= 0)
        return 1;
    return (x * factorial(x - 1));
}
