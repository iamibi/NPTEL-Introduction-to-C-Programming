/*
 * ASSIGNMENT 2
 *
 * PROBLEM 7
 * 
 * Program to check whether the given number is palindrome or not
 *
 * By Ibrahim
 *
 * Date: 20/07/2015
*/

#include <stdio.h>
#include <string.h>

int checkPalindrome(const char*, const int);

int main()
{
    char n[100];
    int t;

    // I considered that the number is also a string
    scanf ("%s", n);
    t = strlen(n);

    if (checkPalindrome(n, t))
        printf ("yes\n");
    else
        printf ("no\n");

    return 0;
}

// This function checks whether the given "string" is palindrome or not
int checkPalindrome(const char* ptr, const int len)
{
    // here ptr is a pointer that points to the first element of string currently
    int i, j;

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        // if the i'th element is not equal to the j'th element,
        // then the string is not palindrome
        if (ptr[i] != ptr[j])
            return 0;
    }
    // else the string is palindrome.
    return 1;
}
