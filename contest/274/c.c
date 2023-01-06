#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[2 * n + 1];
    int cnt;
    int num;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        b[2 * i - 1] = 2 * a[i - 1];
        b[2 * i] = 2 * a[i - 1] + 1;
    }

    printf("%d\n", 0);
    for (int i = 1; i <= 2 * n; i++)
    {
        cnt = 0;
        num = b[i];
        while (num > 1)
        {
            num /= 2;
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}