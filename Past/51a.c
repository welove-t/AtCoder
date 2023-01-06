#include <stdio.h>

int main()
{
    char s[20];

    scanf("%s", s);

    for (int i = 0; i < 19; i++)
    {
        if (i == 5 || i == 13)
            s[i] = ' ';
        printf("%c", s[i]);
    }
    putchar('\n');
    return 0;
}