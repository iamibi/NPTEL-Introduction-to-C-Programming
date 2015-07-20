/*
 * ASSIGNMENT 2
 *
 * PROBLEM 5
 * 
 * Program to find the co-prime numbers
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>

int GCD(int, int);

int main()
{
    int n, i, count = 1;

    scanf ("%d", &n);
    for (i = 2; i < n; i++)
    {
        // if GCD of current number and n is one, then increment counter
        if (GCD(n, i) == 1)
            count++;
    }
    printf ("%d\n", count);
    return 0;
}

// calculate the GCD of two numbers
int GCD(int x, int y)
{
    int t;

    while (y != 0)
    {
        t = x;
        x = y;
        y = t % y;
    }
    return x;
}
