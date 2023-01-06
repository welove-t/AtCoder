#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long x;
    int k;
    long ans;
    int mod;

    scanf("%lu %d", &x, &k);

    ans = x;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < i; j++)
        {
            mod = x % 10;
            x /= 10;
        }
        if (mod > 4)
            ans += (long)(powl(10, i - 1) * (10 - mod));
        else
            ans -= (long)(powl(10, i - 1) * mod);
        x = ans;
    }
    printf("%lu\n", ans);
    return 0;
}