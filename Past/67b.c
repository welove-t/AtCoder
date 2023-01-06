#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int l[n];
    int tmp, sum = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &l[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (l[i] < l[j])
            {
                tmp = l[i];
                l[i] = l[j];
                l[j] = tmp;
            }
        }
    }
    for (int i = 0; i < k; i++)
        sum += l[i];

    printf("%d\n", sum);
}