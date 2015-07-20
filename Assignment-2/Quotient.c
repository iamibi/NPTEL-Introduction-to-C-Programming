/*
 * ASSIGNMENT 2
 *
 * PROBLEM 1
 * 
 * Program that returns the quotient
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>

int divide();

// main function already defined by the NPTEL
int main()
{
    int a,b,d;

    scanf("%d%d",&a,&b);
    d = divide(a,b);
    printf("%d",d);
    return 0;
}

// divide function definition
int divide(int a, int b)
{
    // if b is 0 then the division would be infinite
    // and if a % b is not equal to zero i.e., it is not a factor
    // return -1
    if (b == 0 || a % b != 0)
        return -1;

    // return the division of a / b
    return (a / b);
}
