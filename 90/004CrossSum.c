#include <stdio.h>

int main()
{
    int h, w;
    scanf("%d%d", &h, &w);
    int i, j;
    int a[h][w];
    int hsum[w], wsum[h];

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            wsum[i] = 0;
            hsum[j] = 0;
        }
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            scanf("%d", &a[i][j]);
            wsum[i] += a[i][j];
            hsum[j] += a[i][j];
        }
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("%d", wsum[i] + hsum[j] - a[i][j]);
            if (j == w - 1)
                putchar('\n');
            else
                putchar(' ');
        }
    }

    return 0;
}