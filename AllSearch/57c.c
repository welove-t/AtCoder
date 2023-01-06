#include <stdio.h>

int cnt_digit(long num)
{
    int cnt = 0;

    while (num > 0)
    {
        num /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    long n, a, b;
    int f, ans, def;
    int ad = 0, bd = 0;
    scanf("%ld", &n);

    a = 0;
    f = 0;
    ans = cnt_digit(n);
    def = cnt_digit(n);
    for (b = 1; b * b <= n; b++)
    {
        if (n % b == 0)
        {
            a = n / b;
            ad = cnt_digit(a);
            bd = cnt_digit(b);
            f = ad > bd ? ad : bd;
            ans = ans > f ? f : ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}