#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("%d\n", 1);
        return 0;
    }

    i = 1;
    while (n > 0)
    {
        i *= n;
        n--;
    }
    printf("%d\n", i);
    return 0;
}