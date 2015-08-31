#include <stdio.h>
#include <string.h>

int main()
{
    char num[100], temp[150];
    int i, j, len, k = 0;
    
    scanf ("%s", num);
    len = strlen(num);
    i = j = len - 1;
    while (i >= 0)
    {
        if (j == len - 4)
        {
            temp[k] = ',';
            k++;
            break;
        }
        else
        {
            temp[k] = num[i];
            k++;
        }
            
        i--;
        j--;
    }
    j = 0;
    while (i >= 0)
    {
        if (j % 2 == 0 && j != 0)
        {
            temp[k] = ',';
            k++;
            j = 0;
        }
        else
        {
            temp[k] = num[i];
            i--;
            j++;
            k++;
        }
    }
    temp[k] = '\0';
    for (i = strlen(temp) - 1; i >= 0; i--)
        printf ("%c", temp[i]);
    printf ("\n");
    return 0;
}
