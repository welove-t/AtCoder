#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[m], b[m];
    int cnt;

    for (int i = 0; i < m; i++)
        scanf("%d%d", &a[i], &b[i]);

    for (int i = 1; i <= n; i++)
    {
        cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (i == a[j] || i == b[j])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}