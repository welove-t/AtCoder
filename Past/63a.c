#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a + b > 9)
        puts("error");
    else
        printf("%d\n", a + b);
    return 0;
}