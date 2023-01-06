#include <stdio.h>

int main()
{
    unsigned long a, b, c, d, e, f;
    long double aa, bb, cc, dd, ee, ff;
    unsigned long ans;
    long double dbans;

    scanf("%lu %lu %lu %lu %lu %lu", &a, &b, &c, &d, &e, &f);

    aa = (long double)a / 100;
    bb = (long double)b / 100;
    cc = (long double)c / 100;
    dd = (long double)d / 100;
    ee = (long double)e / 100;
    ff = (long double)f / 100;

    dbans = ((aa * bb * cc) - (dd * ee * ff));
    ans = (unsigned long)(dbans * 1000000);

    printf("%lu\n", ans);
    printf("%Lf\n", dbans);
    return 0;
}

// unsigned long a, b, c, d, e, f;
// long double aa, bb, cc, dd, ee, ff;
// long double pa;
// long double pd;
// long double pz;
// unsigned long ans;
// scanf("%lu %lu %lu %lu %lu %lu", &a, &b, &c, &d, &e, &f);
// ans = ((a * b * c) - (d * e * f)) % 998244353;

// aa = (long double)a / 1000000;
// bb = (long double)b / 1000000;
// cc = (long double)c / 1000000;
// dd = (long double)d / 1000000;
// ee = (long double)e / 1000000;
// ff = (long double)f / 1000000;

// pa = aa * bb * cc;
// pd = dd * ee * ff;
// pz = pa - pd;
// ans = (unsigned long)pz * 1000000 * 1000000 *1000000 ;
// ans %= 998244353;
// printf("%lu\n", ans);