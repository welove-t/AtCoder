#include <stdio.h>

#define MAX 100

int main()
{
    int n, i, j, a[MAX];
    int temp = 0;
    int result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            result += a[i];
        else
            result -= a[i];
    }
    printf("%d\n", result);

    return 0;
}