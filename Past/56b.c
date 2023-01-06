#include <stdio.h>

int main()
{
    int W, a, b;
    int ans = 0;
    scanf("%d%d%d", &W, &a, &b);

    if ((a >= b && a <= b + W) || (a + W >= b && a + W <= b + W))
        ans = 0;
    else if (a < b)
        ans = b - (W + a);
    else if (b < a)
        ans = a - (W + b);

    printf("%d\n", ans);
    return 0;
}