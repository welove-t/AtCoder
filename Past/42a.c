#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == 7)
    {
        if (b == 5 && c == 5)
            puts("YES");
        else
            puts("NO");
    }
    else if (a == 5)
    {
        if ((b == 5 && c == 7) || (b == 7 && c == 5))
            puts("YES");
        else
            puts("NO");
    }
    else
        puts("NO");
    return 0;
}