#include <stdio.h>

int main()
{
    int W, H, N;
    int i, j, k;
    int area = 0;
    scanf("%d%d%d", &W, &H, &N);
    int x[N], y[N], n[N];

    for (i = 0; i < N; i++)
        scanf("%d%d%d", &x[i], &y[i], &n[i]);
    int square[W][H];
    for (j = 0; j < W; j++)
    {
        for (k = 0; k < H; k++)
            square[j][k] = 0;
    }
    for (i = 0; i < N; i++)
    {
        if (n[i] == 1)
        {
            for (j = 0; j < x[i]; j++)
            {
                for (k = 0; k < H; k++)
                    square[j][k] = 1;
            }
        }
        if (n[i] == 2)
        {
            for (j = x[i]; j < W; j++)
            {
                for (k = 0; k < H; k++)
                    square[j][k] = 1;
            }
        }
        if (n[i] == 3)
        {
            for (j = 0; j < W; j++)
            {
                for (k = 0; k < y[i]; k++)
                    square[j][k] = 1;
            }
        }
        if (n[i] == 4)
        {
            for (j = 0; j < W; j++)
            {
                for (k = y[i]; k < H; k++)
                    square[j][k] = 1;
            }
        }
    }
    for (j = 0; j < W; j++)
    {
        for (k = 0; k < H; k++)
        {
            if (square[j][k] == 0)
                area++;
        }
    }
    printf("%d\n", area);

    return 0;
}