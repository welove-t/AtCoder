#include <stdio.h>

int main()
{
    int n;
    int i = 0, cnt = 0;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    i = 0;
    while (s[i])
    {
        if (s[i] == 'A' && s[i + 1] != '\0' && s[i + 1] == 'B' && s[i + 2] != '\0' && s[i + 2] == 'C')
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
    return 0;
}