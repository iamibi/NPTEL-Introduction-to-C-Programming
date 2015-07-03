#include <stdio.h>

int main()
{
    int n;
    int sum = 0, i = 0, fourth = 0;

    scanf("%d", &n);

    if((n < 0) || (n > 40))
        return 1;

    while (i <= n)
    {
        fourth = i * i * i * i;
        sum = sum + fourth;
        i++;
    }

    printf("%d\n", sum);
    return 0;
}
