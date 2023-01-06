#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    if (A <= C && C <= B)
        puts("Yes");
    else
        puts("No");
    return 0;
}