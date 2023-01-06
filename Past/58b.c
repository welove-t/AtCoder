#include <stdio.h>

int main()
{
    char O[51], E[51];
    int i = 0, j = 0, cnt = 0;

    scanf("%s", O);
    scanf("%s", E);

    while (!(O[i] == '\0' && E[j] == '\0'))
    {
        if (cnt % 2 == 0 && O[i] != '\0')
        {
            printf("%c", O[i]);
            i++;
        }
        else if (E[j] != '\0')
        {
            printf("%c", E[j]);
            j++;
        }
        else
            ;
        cnt++;
    }
    putchar('\n');
    return 0;
}