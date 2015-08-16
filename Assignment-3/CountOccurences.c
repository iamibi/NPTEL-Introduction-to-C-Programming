#include <stdio.h>
#include <string.h>

int main()
{
    char S[8192], P[8192];
    int i, j, count = 0, true_count = 0;

    scanf ("%s\n%s", S, P);
    i = j = 0;

    int len_P = strlen(P);

    // Repeat for the whole string
    while (S[i] != '\0')
    {
        // If the test string character is not null
        if (P[j] != '\0')
        {
            // If the main string current character is not equal to the test string current character
            if (S[i] != P[j])
            {
                // To check if only few characters were similar not all
                if (count > 0)
                    i--;
                // Set counter j and count to zero
                j = count = 0;
            }
            // Else the main string current character is equal to test string current character
            else
            {
                // Increment pointer j by one and check whether the count has actually reached the True Count
                j++;
                count++;
                if (count == len_P)
                {
                    true_count++;
                    i--;
                    j = count = 0;
                }
            }
        }
        // If by any chance the test string reaches to NULL
        else
            j = 0;
        i++;
    }
    printf ("%d\n", true_count);
    return 0;
}
