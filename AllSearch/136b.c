#include <stdio.h>

int main()
{
    int n, tmp, digit;
    int cnt = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        tmp = i;
        digit = 0;
        while (tmp != 0)
        {
            tmp /= 10;
            digit++;
        }
        if (digit % 2 != 0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}