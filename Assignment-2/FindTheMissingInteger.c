/*
 * ASSIGNMENT 2
 *
 * PROBLEM 3
 * 
 * Program to find missing integer
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0, current = 0, res = 0;

    scanf ("%d", &n);
    
    for (i = 1; i < n; i++)
    {
        scanf ("%d", &current);

        // compute the maximum sum
        sum = sum + current;
    }

    // the total sum of n numbers is (n * (n + 1)) / 2
    res = (n * (n + 1)) / 2;

    // subtract the resultant sum with the calculated sum
    printf ("%d\n", res - sum);
    return 0;
}
