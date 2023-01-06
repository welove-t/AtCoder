#include <stdio.h>

int main()
{
    int a, b, c, d;
    int ans = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    ans = a * b < c * d ? c * d : a * b;
    printf("%d\n", ans);
    return 0;
}