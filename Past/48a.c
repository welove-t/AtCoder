#include <stdio.h>

int main()
{
    char a[101];
    char x[101];
    char c[101];
    scanf("%s%s%s", a, x, c);
    printf("A%cC\n", x[0]);
    return 0;
}