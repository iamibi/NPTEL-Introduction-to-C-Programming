#include <stdio.h>
#include <string.h>

int GetString(char *, char *);

int main()
{
    int n, i;
    char current[100], previous[100];

    scanf ("%d", &n);
    // Taking in the '\n' character and removing from the buffer
    getchar();
    // First string input.
    // Also the fgets puts '\n' automatically
    fgets(current, 100, stdin);
    for (i = 2; i <= n; i++)
    {
        // Setting the previous string to the current string
        strcpy(previous, current);
        GetString(previous, current);
    }
    printf ("%s", current);
    return 0;
}

// Pointer to the string as string or 'char' is basically containing the address of first letter
int GetString(char *previous_str, char *current_str)
{
    char rest_str[100];
    int num, i, j;

    // Taking input the number with which its starting
    scanf ("%d", &num);
    getchar();
    // Rest of the string input
    fgets(rest_str, 100, stdin);
    int rest_len = strlen(rest_str);

    // Copying the common prefix from previous to current string
    for (i = 0; i < num; i++)
        current_str[i] = previous_str[i];

    // Copying the common suffix from the resulting string to the current string
    for (j = 0; j < rest_len; j++)
        current_str[i+j] = rest_str[j];

    // Putting the terminator in the end of the string
    current_str[i+j] = '\0';
    return 0;
}
