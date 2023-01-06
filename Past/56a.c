#include <stdio.h>

int main()
{
    char a, b;

    scanf("%c %c", &a, &b);

    if (a == 'H' && b == 'H')
        puts("H");
    else if (a == 'D' && b == 'H')
        puts("D");
    else if (a == 'H' && b == 'D')
        puts("D");
    else if (a == 'D' && b == 'D')
        puts("H");
    return 0;
}