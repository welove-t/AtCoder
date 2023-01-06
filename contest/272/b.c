#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int *heap[m];
    int k[m];
    int check = 0;
    int ptn[10000];
    int d = 0;
    int ptn_max = (n * (n - 1)) / 2;

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &k[i]);
        heap[i] = (int *)malloc(sizeof(int) * k[i]);
        for (int j = 0; j < k[i]; j++)
            scanf("%d", &heap[i][j]);
    }
    for (int j = 1; j <= n; j++)
    {
        for (int l = j + 1; l <= n; l++)
        {
            ptn[d] = 10 * j + l;
            d++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k[i]; j++)
        {
            for (int l = j + 1; l < k[i]; l++)
            {
                for (int p = 0; p < ptn_max; p++)
                {
                    if (ptn[p] == heap[i][j] * 10 + heap[i][l])
                        ptn[p] = 0;
                }
            }
        }
    }
    for (int i = 0; i < ptn_max; i++)
    {
        if (ptn[i] != 0)
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}