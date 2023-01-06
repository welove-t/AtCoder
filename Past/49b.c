#include <stdio.h>

int main()
{
    int h, w;
    int i, j;
    scanf("%d%d", &h, &w);
    char c[h][w + 1];

    for (int i = 0; i < h; i++)
    {
        scanf("%s", c[i]);
        printf("%s\n", c[i]);
        printf("%s\n", c[i]);
    }

    return 0;
}