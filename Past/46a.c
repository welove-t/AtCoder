#include <stdio.h>

int main()
{
    int a, b, c, n;
    int count = 1;

    scanf("%d%d%d", &a, &b, &c);

    n = a;
    if (a != b)
        count++;
    if (a != c && b != c)
        count++;
    printf("%d\n", count);
    return 0;
}