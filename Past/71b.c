#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[100001];
    char *alph = "abcdefghijklmnopqrstuvwxyz";
    scanf("%s", s);
    int len = strlen(s);
    int flg;

    while (*alph)
    {
        flg = 0;
        for (int j = 0; j < len; j++)
        {
            if (s[j] == *alph)
                flg = 1;
        }
        if (flg == 0)
        {
            printf("%c\n", *alph);
            return 0;
        }
        alph++;
    }
    puts("None");
    return 0;
}