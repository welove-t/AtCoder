#include <stdio.h>
int min(int a, int b)
{
    return (a < b ? a : b);
}
int main(void)
{
    int a, b, c, x, y;
    scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
    int ab = min(x, y);
    int ans = ab * min(a + b, 2 * c);
    x -= ab;
    y -= ab;
    if (x > 0)
        ans += x * min(a, c * 2);
    if (y > 0)
        ans += y * min(b, c * 2);
    printf("%d\n", ans);
}

// #include <stdio.h>

// int main()
// {
//     long long a, b, c, x, y;
//     scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &x, &y);

//     if ((a + b) < 2 * c)
//         printf("%lld\n", (a * x) + (b * y));
//     else if (2 * c < a && 2 * c < b)
//         printf("%lld\n", x > y ? 2 * c * x : 2 * c * y);
//     else
//     {
//         if (x > y)
//             printf("%lld\n", (2 * c * y) + (a * (x - y)));
//         else
//             printf("%lld\n", (2 * c * x) + (b * (y - x)));
//     }

//     return 0;
// }