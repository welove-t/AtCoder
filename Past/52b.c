#include <stdio.h>

int main()
{
    int n;
    int x = 0;
    int max = 0;
    scanf("%d", &n);
    char s[n + 1];

    scanf("%s", s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
            x++;
        else
            x--;
        max = max < x ? x : max;
    }
    printf("%d\n", max);

    return 0;
}