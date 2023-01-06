#include <stdio.h>

int main()
{
    int h, w;

    scanf("%d%d", &h, &w);
    char c[h][w + 1];
    int a[10001] = {};

    for (int i = 0; i < h; i++)
        scanf("%s", c[i]);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (c[i][j] == '#')
                a[j] += 1;
        }
    }
    for (int i = 0; i < w; i++)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}