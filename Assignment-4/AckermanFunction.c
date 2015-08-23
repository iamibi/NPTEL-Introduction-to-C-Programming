#include <stdio.h>

// static count will keep the value holding to it until the execution is complete
static int count = 0;

long int Ackerman(long int, long int);

int main()
{
    long int m, n, res;

    scanf ("%ld%ld", &m, &n);
    res = Ackerman(m, n);
    printf ("%ld %d\n", res, count);
    return 0;
}

// Ackerman Function recursive definition
long int Ackerman(long int m, long int n)
{
    count++;
    if (0 == m)
        return (n + 1);
    else if (m > 0 && 0 == n)
        return (Ackerman(m - 1, 1));
    return (Ackerman(m - 1, Ackerman(m, n - 1)));
}
