#include <stdio.h>

int main()
{
    char s[3][11];
    char p[3];

    scanf("%s %s %s", s[0], s[1], s[2]);

    for (int i = 0; i < 3; i++)
        p[i] = s[i][0] - 32;

    printf("%s\n", p);
    return 0;
}