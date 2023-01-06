#include <stdio.h>

int main()
{
    int n;
    int flg1 = 0, j = 0, max = 0, tmp = 0, p = 0;
    scanf("%d", &n);
    long long a[n], b[n];
    long long start1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a[i], &b[i]);
        if (a[i] == 1 || b[i] == 1)
        {
            flg1 = 1;
            start1[j++] = i;
        }
    }
    if (flg1 != 1)
    {
        printf("%d\n", 1);
        return 0;
    }
    for (int i = 0; i < j; i++)
    {
        tmp = a[start1[i]] > b[start1[i]] ? a[start1[i]] : b[start1[i]];
        p = 0;
        while (a[p] == tmp || b[p] == tmp || p < n)
        {
            if (a[p] != 1 || b[p] != 1)
            {
                p++;
                break;
            }
                }
    }
    return 0;
}