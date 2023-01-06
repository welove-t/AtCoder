#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    int *heap[n];
    int s[q], t[q];
    int l[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l[i]);
        heap[i] = (int *)malloc(sizeof(int) * l[i]);
        for (int j = 0; j < l[i]; j++)
            scanf("%d", &heap[i][j]);
    }
    for (int i = 0; i < q; i++)
        scanf("%d%d", &s[i], &t[i]);

    for (int i = 0; i < q; i++)
        printf("%d\n", heap[s[i] - 1][t[i] - 1]);

    return 0;
}