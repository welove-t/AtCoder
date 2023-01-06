#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if ((n - i) % 2 == 0)
            b[n - (n - i) / 2] = a;
        else
            b[(n - i) / 2] = a;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    putchar('\n');
    return 0;
}