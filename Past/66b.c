#include <stdio.h>
#include <string.h>

int main()
{
    char s[201];
    int len;

    scanf("%s", s);
    len = strlen(s);

    for (int i = len - 1; i > 1; i--)
    {
        if (i % 2 != 0)
            continue;
        if (strncmp(&s[0], &s[i / 2], i / 2) == 0)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}