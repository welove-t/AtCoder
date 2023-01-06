#include <stdio.h>

int main()
{
    long a, b, x;
    long cnt = 0;
    scanf("%ld%ld%ld", &a, &b, &x);

    if (a > 0)
        cnt = b / x - (a - 1) / x;
    else
        cnt = b / x - a / x;
    if (a == 0)
        cnt++;
    printf("%ld\n", cnt);
    return 0;
}