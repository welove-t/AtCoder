#include <stdio.h>

int main()
{
    char s[11];
    int i = 0, j, cnt, max = 0;
    scanf("%s", s);

    while (s[i])
    {
        cnt = 0;
        j = i;
        while (s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T')
        {
            j++;
            cnt++;
        }
        max = cnt > max ? cnt : max;
        i++;
    }
    printf("%d\n", max);
    return 0;
}