#include <stdio.h>

int main()
{
    int a, b, n;
    int min = 0;
    int cnt = 0;

    scanf("%d %d %d", &a, &b, &n);

    min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            cnt++;
        if (cnt == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}