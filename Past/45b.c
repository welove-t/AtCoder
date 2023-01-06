#include <stdio.h>

int main()
{
    char s[3][101];
    int i, j, k;
    char n;

    for (i = 0; i < 3; i++)
        scanf("%s", s[i]);

    n = s[0][0];
    i = 0;
    j = 0;
    k = 0;
    while (1)
    {
        if (n == 'a')
        {
            if (s[0][i] == '\0')
            {
                puts("A");
                return 0;
            }
            else
                n = s[0][i++];
        }
        if (n == 'b')
        {
            if (s[1][j] == '\0')
            {
                puts("B");
                return 0;
            }
            else
                n = s[1][j++];
        }
        if (n == 'c')
        {
            if (s[2][k] == '\0')
            {
                puts("C");
                return 0;
            }
            else
                n = s[2][k++];
        }
    }
    return 0;
}