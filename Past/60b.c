#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    for (int i = 1; i < 100000000; i++)
    {
        if ((i * A) % B == C)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}