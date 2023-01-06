#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    char s[n][16];

    for (i = 0; i < n; i++)
        scanf("%s", s[i]);

    for (i = 0; i < n; i++)
    {
        j = 0;
        while (strcmp(s[i], s[j]) != 0 && j < i)
            j++;
        if (j == i)
            printf("%d\n", i + 1);
    }
    return 0;
}