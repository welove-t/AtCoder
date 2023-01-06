#include <stdio.h>

int main()
{
    int n, m;
    int t[100];
    int p[100], x[100];
    int i, j;
    long cnt;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d%d", &p[i], &x[i]);

    for (i = 0; i < m; i++)
    {
        cnt = 0;
        for (j = 0; j < n; j++)
        {
            if (p[i] - 1 == j)
                cnt += x[i];
            else
                cnt += t[j];
        }
        printf("%ld\n", cnt);
    }
    return 0;
}