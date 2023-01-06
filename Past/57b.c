#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int a[N], b[N], c[M], d[M];
    int min_point, min_num;
    for (int i = 0; i < N; i++)
        scanf("%d%d", &a[i], &b[i]);
    for (int i = 0; i < M; i++)
        scanf("%d%d", &c[i], &d[i]);

    for (int i = 0; i < N; i++)
    {
        min_point = abs(a[i] - c[0]) + abs(b[i] - d[0]);
        min_num = 1;
        for (int j = 1; j < M; j++)
        {
            if (min_point > abs(a[i] - c[j]) + abs(b[i] - d[j]))
            {
                min_point = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                min_num = j + 1;
            }
        }
        printf("%d\n", min_num);
    }
    return 0;
}