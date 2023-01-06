#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (a == b)
        puts("Draw");
    else if (a == 1)
        puts("Alice");
    else if (b == 1)
        puts("Bob");
    else if (a > b)
        puts("Alice");
    else if (a < b)
        puts("Bob");
    return 0;
}