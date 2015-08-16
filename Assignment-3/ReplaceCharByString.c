#include <stdio.h>

int main()
{
    int i;
    char PS[100], C, S[10];

    scanf ("%s\n%c\n%s", PS, &C, S);
    for (i = 0; PS[i] != '\0'; i++)
    {
        // If the current character is not C, the replacable character then
        // print the character as it is
        if (C != PS[i])
            printf ("%c", PS[i]);
        // Else print the replacable string
        else if (C == PS[i])
            printf ("%s", S);
    }
    printf ("\n");
    return 0;
}
