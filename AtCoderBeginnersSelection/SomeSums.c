#include <stdio.h>

int main()
{
    int n, a, b;
    int num;
    int chk_sum;
    int sum = 0;

    scanf("%d %d %d", &n, &a, &b);

    for (int i = 1; i <= n; i++)
    {
        num = i;
        chk_sum = 0;
        while (num > 0)
        {
            chk_sum += num % 10;
            num /= 10;
        }
        if (a <= chk_sum && chk_sum <= b)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}