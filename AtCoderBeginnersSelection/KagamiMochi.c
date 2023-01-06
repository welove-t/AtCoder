#include <stdio.h>

#define MAX 100

int main()
{
    int n, i, j;
    int d[MAX];
    int count = 1;
    int temp = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &d[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (d[i] < d[j])
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (d[i] != d[i + 1])
            count++;
    }
    printf("%d\n", count);
    return 0;
}