#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n][11];

    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    for (int i = n - 1; i >= 0; i--)
        printf("%s\n", s[i]);
    return 0;
}
