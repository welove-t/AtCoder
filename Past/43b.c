#include <stdio.h>
#include <string.h>

int main()
{
    char s[11];
    char t[11];
    int i;
    int j = 0;

    scanf("%s", s);
    t[0] = '\0';
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'B')
        {
            if (i == 0 || t[0] == '\0')
                ;
            else
                t[j-- - 1] = '\0';
        }
        else
            t[j++] = s[i];
    }
    t[j] = '\0';
    printf("%s\n", t);
    return 0;
}