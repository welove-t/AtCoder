#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d  %d", &h, &m);
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;

    if (!(a == 2 && c >= 4) && b <= 5)
        printf("%d%d %d%d\n", a, b, c, d);
    else if (a == 2 && b == 3)
        printf("%d %d\n", 0, 0);
    else if ((a == 0 || a == 1) && b >= 6)
        printf("%d%d %d%d\n", a + 1, 0, 0, 0);
    else
        printf("%d %d\n", h + 1, 0);
    return 0;
}