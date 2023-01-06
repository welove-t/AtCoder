#include <stdio.h>

int main()
{
    int a, b, c, d;
    int start = 0, end = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (c <= a)
        start = a;
    else if (a < c)
        start = c;

    if (d <= b)
        end = d;
    else if (b < d)
        end = b;

    if (end - start <= 0)
        printf("%d\n", 0);
    else
        printf("%d\n", end - start);
    return 0;
}