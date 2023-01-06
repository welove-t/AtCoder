#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = 1000, max = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("%d\n", max - min);
    return 0;
}