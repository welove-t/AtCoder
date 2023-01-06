#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b + c || b == a + c || c == a + b)
        puts("Yes");
    else
        puts("No");
    return 0;
}