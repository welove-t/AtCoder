#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int h[n], max = 0, imax = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);

    for (int i = 0; i < n; i++)
    {
        if (max < h[i])
        {
            max = h[i];
            imax = i + 1;
        }
    }

    printf("%d\n", imax);
    return 0;
}