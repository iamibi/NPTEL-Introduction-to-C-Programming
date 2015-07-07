/*
 * This program computes the sum of adjacent numbers.
*/

#include <stdio.h>

int main()
{
    int current, sum = 0, prev = 0;

    scanf ("%d", &current);

    // The first element is the current and the previous element.
    prev = current;

    // Keeping the record of sum.
    sum = sum + prev;

    while (1)
    {
        // Taking more consecutive numbers.
        scanf ("%d", &current);

        // End if -1 is encountered.
        if (current == -1)
            break;

        // Compute the sum by adding previous and the current number.
        sum = prev + current;

        // Set the previous number to current.
        prev = current;
        printf ("%d ", sum);
    }
    printf ("\n");
    return 0;
}
