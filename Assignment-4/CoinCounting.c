#include <stdio.h>

int CoinCount(int [], int, int);

int main()
{
    // Since we have 1, 3, 5 coins only
    int t, i, n, res;
    int arr[] = {1, 3, 5};

    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf ("%d", &n);
        res = CoinCount(arr, 3, n);
        printf ("%d\n", res);
    }
    return 0;
}

// Coin Counting using recursion
int CoinCount(int arr[], int len_arr, int n)
{
    if (0 == n)
        return 1;
    if (0 > n)
        return 0;
    if (len_arr <= 0 && 1 <= n)
        return 0;

    // call CoinCount(arr, len_arr - 1, n) for the minimal coin that can be used
    // and similarly call CoinCount(arr, len_arr, n - arr[len_arr-1]) for maximum size coin
    return (CoinCount(arr, len_arr - 1, n) + CoinCount(arr, len_arr, n - arr[len_arr-1]));
}
