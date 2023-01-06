#include <stdio.h>

int main()
{
    int N;
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 1)
            cnt_1++;
        else if (A[i] == 2)
            cnt_2++;
        else if (A[i] == 3)
            cnt_3++;
        else
            ;
    }
    printf("%d\n", ((cnt_1 * (cnt_1 - 1)) / 2) + ((cnt_2 * (cnt_2 - 1)) / 2) + ((cnt_3 * (cnt_3 - 1)) / 2));
    return 0;
}