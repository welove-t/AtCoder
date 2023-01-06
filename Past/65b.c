#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1], b[n + 1];
    int i = 1;
    int cnt;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = 0;
    }
    i = 1;
    cnt = 0;
    while (1)
    {
        if (b[i] == 0)
        {
            cnt++;
            b[i] = 1;
        }
        else
        {
            cnt = -1;
            break;
        }
        if (a[i] == 2)
            break;
        i = a[i];
    }
    printf("%d\n", cnt);
    return 0;
}