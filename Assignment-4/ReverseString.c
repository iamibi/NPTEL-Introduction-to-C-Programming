#include <stdio.h>

void reverse();

int main()
{
    reverse();
    printf ("\n");
    return 0;
}

// Reverse string using recursion
void reverse()
{
    char c;

    // Had to use getchar() or else it was giving runtime error with scanf
    c = getchar();
    if (c != '\n' && c != EOF)
    {
        reverse();
        printf ("%c", c);
    }
}
