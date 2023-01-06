#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    long int digit_a = 1, digit_b = 1;

    scanf("%s", A);
    scanf("%s", B);

    digit_a = strlen(A);
    digit_b = strlen(B);

    if (digit_a > digit_b)
    {
        puts("GREATER");
        return 0;
    }
    else if (digit_a < digit_b)
    {
        puts("LESS");
        return 0;
    }
    else
    {
        for (int i = 0; i < digit_a; i++)
        {
            if (strcmp(&A[i], &B[i]) > 0)
            {
                puts("GREATER");
                return 0;
            }
            else if (strcmp(&A[i], &B[i]) < 0)
            {
                puts("LESS");
                return 0;
            }
            else
                ;
        }
    }
    puts("EQUAL");
    return 0;
}