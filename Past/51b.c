#include <stdio.h>

int main()
{
    int k, s;
    int cnt = 0;
    scanf("%d%d", &k, &s);

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if ((s - i - j) >= 0 && (s - i - j) <= k && (i + j + (s - i - j) == s))
                cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}