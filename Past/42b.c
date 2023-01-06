#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char z = *a;
    *a = *b;
    *b = z;
}

int main()
{
    int N, L;
    int i, j;
    scanf("%d %d", &N, &L);
    char s[N + 1][L + 1];

    for (i = 0; i < N; i++)
        scanf("%s", s[i]);

    // for (i = 0; i < N; i++)
    // {
    //     for (j = i + 1; j < N; j++)
    //     {
    //         if (strcmp(s[i], s[j]) > 0)
    //             swap(s[i], s[j]);
    //     }
    // }
    qsort(s, N, sizeof(s[0]), strcmp);
    for (i = 0; i < N; i++)
        printf("%s", s[i]);

    putchar('\n');
    return 0;
}