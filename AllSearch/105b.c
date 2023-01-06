#include <stdio.h>

int main()
{
    int n;
    int yakusu_cnt, match_cnt = 0;
    scanf("%d", &n);

    for (int i = i; i <= n; i++)
    {
        yakusu_cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                yakusu_cnt++;
        }
        if (i % 2 != 0 && yakusu_cnt == 8)
            match_cnt++;
    }
    printf("%d\n", match_cnt);
    return 0;
}