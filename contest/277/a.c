#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int p[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        if (p[i] == x)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    return 0;
}