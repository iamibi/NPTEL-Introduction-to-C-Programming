#include <stdio.h>
#include <string.h>

int checkPalindrome(char *, int);

int main()
{
    int n, i, j, count = 0, k, temp1, temp2;

    scanf ("%d", &n);
    char str[n+1];
    int ar1[2*n], ar2[2*n];

    scanf ("%s", str);
    
    // If the string entered is already a palindrome
    if (checkPalindrome(str, n) == 1)
    {
        printf ("%d\n", 0);
        return 0;
    }

    for (i = 0; i < 2 * n - 1; i++)
        ar1[i] = 0;
    k = 2 * n - 1;

    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            temp1 = 12345;
            if (str[i] == str[i+j])
                ar2[2*i] = ar1[2*i+1];
            else
            {
                temp1 = ar1[2*i] + 1;
                temp2 = ar1[2*i+2] + 1;
                ar2[2*i] = (temp1 < temp2) ? temp1 : temp2;
            }
        }
        k = k - 2;
        for (i = 0; i < k; i = i + 2)
        {
            ar1[i+1] = ar1[i+2];
            ar1[i] = ar2[i];
        }
    }
    printf ("%d\n", ar1[0]);
    return 0;
}

int checkPalindrome(char* ptr, int len)
{
    int i, j;

    for (i = 0, j = len - 1; i <= len/2 && j >= len / 2; i++, j--)
    {
        if (ptr[i] != ptr[j])
            return 0;
    }
    return 1;
}
