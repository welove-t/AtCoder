#include <stdio.h>

int main()
{
    int n, k;
    int count = 1;

    scanf("%d%d", &n, &k);

    if (n == 1)
        count = k;
    else
    {
        for (int i = 0; i < n - 1; i++)
            count *= k - 1;
        count *= k;
    }
    printf("%d\n", count);
    return 0;
}