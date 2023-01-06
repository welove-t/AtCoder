#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char t[101];

    scanf("%s", s);
    scanf("%s", t);

    if (strstr(s, t) != NULL)
        puts("Yes");
    else
        puts("No");
    return 0;
}