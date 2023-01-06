#include <stdio.h>

int main()
{
    int n, k, x, y;
    int i;
    int sum = 0;
    scanf("%d%d%d%d", &n, &k, &x, &y);

    k = n < k ? n : k;
    for (i = 1; i <= k; i++)
        sum += x;
    for (i = 1; i <= n - k; i++)
        sum += y;
    printf("%d\n", sum);
    return 0;
}