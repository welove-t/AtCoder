#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int a = -1;
    int max;

    scanf("%s", s);
    max = strlen(s);

    for (int i = 0; i < max; i++)
    {
        if (s[i] == 'a')
            a = i + 1;
    }
    printf("%d\n", a);
    return 0;
}