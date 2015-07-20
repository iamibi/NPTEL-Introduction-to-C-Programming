/*
 * ASSIGNMENT 2
 *
 * PROBLEM 4
 * 
 * Program to compute LCM of N numbers
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>

int GetLCM(int, int, int);

int main()
{
    int n, i, lcm = 0;

    scanf ("%d", &n);
    int arr[n+1];

    scanf ("%d", &arr[0]);

    // LCM of one element is itself
    lcm = arr[0];
    for (i = 1; i < n; i++)
    {
        scanf ("%d", &arr[i]);

        // compute LCM of N numbers
        if (lcm < arr[i])
            lcm = GetLCM(arr[i], lcm, arr[i]);
        else
            lcm = GetLCM(lcm, arr[i], lcm);
    }
    printf ("%d\n", lcm);
    return 0;
}

int GetLCM(int a, int b, int c)
{
    // successive addition to find LCM
    if (a % b)
        return (GetLCM (a + c, b, c));
    return a;
}
