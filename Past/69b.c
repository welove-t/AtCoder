#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];

    scanf("%s", s);
    printf("%c%lu%c\n", s[0], strlen(s) - 2, s[strlen(s) - 1]);
    return 0;
}