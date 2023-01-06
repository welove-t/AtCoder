#include <stdio.h>
#include <stdlib.h>

int f(const void *a, const void *b)
{
    const int *A = a;
    const int *B = b;
    if (*A > *B)
        return 1;
    if (*A == *B)
        return 0;
    return -1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100001], b[100001];
    int *map[100001];
    int gd[100001] = {};
    int cnt[100001] = {};

    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        gd[a[i]]++;
        gd[b[i]]++;
    }
    for (int i = 1; i <= n; i++)
        map[i] = (int *)malloc(sizeof(int) * gd[i]);
    for (int i = 1; i <= m; i++)
    {
        map[a[i]][cnt[a[i]]] = b[i];
        map[b[i]][cnt[b[i]]] = a[i];
        cnt[a[i]]++;
        cnt[b[i]]++;
    }

    for (int i = 1; i <= n; i++)
        qsort(map[i], gd[i], sizeof(int), f);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", gd[i]);
        for (int j = 0; j < gd[i]; j++)
            printf("%d ", map[i][j]);
        putchar('\n');
    }
    return 0;
}

// time over
//    for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= m; j++)
//             printf("%d ", map[i][j]);
//         putchar('\n');
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         int set[100001];
//         k = 0;
//         for (int j = 0; j < m; j++)
//         {
//             if (i == a[j] || i == b[j])
//             {
//                 if (i == a[j])
//                     set[k++] = b[j];
//                 if (i == b[j])
//                     set[k++] = a[j];
//             }
//         }
//         for (int j = 0; j < k; j++)
//         {
//             for (int l = j + 1; l < k; l++)
//             {
//                 if (set[j] > set[l])
//                 {
//                     tmp = set[j];
//                     set[j] = set[l];
//                     set[l] = tmp;
//                 }
//             }
//         }
//         printf("%d ", k);
//         for (int j = 0; j < k; j++)
//             printf("%d ", set[j]);
//         putchar('\n');
//     }

//     return 0;