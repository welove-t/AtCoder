#include <stdio.h>

int main()
{
    int n;
    long p = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        p *= i;
        p = p % (10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7);
    }
    printf("%ld\n", p);
    return 0;
}