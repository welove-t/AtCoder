#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt = 1;
    int flag = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == cnt)
        {
            cnt++;
            flag = 0;
        }
        else
        {
            for (int j = n - 1; j > n - 3; j--)
            {
                if (i != j)
                    a[j] == 0;
            }
        }
    }
    return 0;
}