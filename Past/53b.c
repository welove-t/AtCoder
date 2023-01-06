#include <stdio.h>
#include <string.h>

int main()
{
    char s[200001];
    int i, start = 0, end = 0;

    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A')
        {
            start = i;
            break;
        }
    }
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'Z')
            end = i;
    }
    printf("%d\n", end - start + 1);
    return 0;
}