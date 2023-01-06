#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
    {
        if (n % i == 0 && 1 <= n / i && n / i <= 9)
        {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}
