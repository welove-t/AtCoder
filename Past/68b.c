#include <stdio.h>

int main()
{
    int n;
    int cnt, tmp, max = 0, ans = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        cnt = 0;
        tmp = i;
        while (tmp % 2 == 0 && tmp != 0)
        {
            cnt++;
            tmp /= 2;
        }
        if (max < cnt)
        {
            max = cnt;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}