#include <stdio.h>

int main()
{
    int h, w;
    scanf("%d%d", &h, &w);
    char a[h][w + 1];

    for (int i = 0; i < h; i++)
        scanf("%s", a[i]);

    for (int i = 0; i < w + 2; i++)
        putchar('#');
    putchar('\n');

    for (int i = 0; i < h; i++)
        printf("#%s#\n", a[i]);

    for (int i = 0; i < w + 2; i++)
        putchar('#');
    putchar('\n');
    return 0;
}
