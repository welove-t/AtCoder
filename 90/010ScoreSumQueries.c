#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d", &n);
    int i, j;
    int c[n], p[n];
    int sum1, sum2;

    for (i = 0; i < n; i++)
        scanf("%d %d", &c[i], &p[i]);

    scanf("%d", &q);
    int l[q], r[q];
    for (i = 0; i < q; i++)
        scanf("%d %d", &l[i], &r[i]);

    for (i = 0; i < q; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for (j = l[i] - 1; j <= r[i] - 1; j++)
        {
            if (c[j] == 1)
                sum1 += p[j];
            else
                sum2 += p[j];
        }
        printf("%d %d\n", sum1, sum2);
    }

    return 0;
}