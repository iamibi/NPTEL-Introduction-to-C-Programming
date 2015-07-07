/*
 * This program computes the sum of adjacent numbers.
*/

#include <stdio.h>

int main()
{
    int current, sum = 0, prev;

    // Take in the first values
    scanf ("%d", &prev);
    scanf ("%d", &current);

    // Repeat until the current value is -1.
    while (current != -1)
    {
        // Calculate the Sum of previous and next
        sum = prev + current;
        printf ("%d", sum);

        // Set previous to current.
        prev = current;

        // Again take in the input.
        scanf ("%d", &current);

        if (current == -1)
            break;

        printf (" ");
    }
    printf ("\n");
    return 0;
}
