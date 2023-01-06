#include <stdio.h>
#include <string.h>

int main()
{
    char s[27];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                puts("no");
                return 0;
            }
        }
    }
    puts("yes");
    return 0;
}