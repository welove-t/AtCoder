#include <stdio.h>

int main()
{
    int x, a, b;

    scanf("%d%d%d", &x, &a, &b);

    if (a >= b)
        puts("delicious");
    else if (a + x >= b)
        puts("safe");
    else
        puts("dangerous");
    return 0;
}