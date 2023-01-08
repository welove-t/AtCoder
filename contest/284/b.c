#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    int n[t];
    int ans[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
        int a[n[i]];
        int cnt = 0;
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] % 2 != 0)
                cnt++;
        }
        ans[i] = cnt;
    }
    for (int i = 0; i < t; i++)
        printf("%d\n", ans[i]);
    return 0;
}