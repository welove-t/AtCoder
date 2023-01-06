#include <stdio.h>

int main()
{
    int A, B;
    int time = 0;

    scanf("%d%d", &A, &B);

    time = A + B < 24 ? A + B : (A + B) - 24;
    printf("%d\n", time);
    return 0;
}