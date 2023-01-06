#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    long long a[200][200] = {0};
    int l[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l[i]; j++)
            printf("%lld ", a[i][j]);
        putchar('\n');
    }

    return 0;
}