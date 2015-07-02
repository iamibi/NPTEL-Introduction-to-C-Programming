#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int sn1, sn2, sn3;

    scanf("%d%d%d", &n1, &n2, &n3);
    sn1 = n1 * n1;
    sn2 = n2 * n2;
    sn3 = n3 * n3;

    if(((sn1 + sn2) == sn3) || ((sn1 + sn3) == sn2) || ((sn2 + sn3) == sn1))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
