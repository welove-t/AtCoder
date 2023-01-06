#include <stdio.h>

int main()
{
    int x, y, z;
    int ans = 0;
    scanf("%d%d%d", &x, &y, &z);

    if (0 < y && y < x && y < z)
        ans = -1;
    else if (z < y && x < y && y < 0)
        ans = -1;
    else if ((y < 0 && 0 < x) || (0 < x && x < y))
        ans = x;
    else if ((x < 0 && 0 < y) || (x < 0 && y < x))
        ans = -x;
    else if (0 < z && z < y && y < x)
        ans = x;
    else if (x < y && y < z && z < 0)
        ans = -x;
    else if (z < 0 && 0 < y && y < x)
        ans = (-z) * 2 + x;
    else if (x < y && y < 0 && 0 < z)
        ans = z * 2 - x;

    printf("%d\n", ans);
    return 0;
}