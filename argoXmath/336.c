#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int cnt_a = 0, cnt_b = 0, cnt_c = 0, cnt_d = 0;

    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < N; i++)
    {
        if (A[i] == 100)
            cnt_a++;
        else if (A[i] == 200)
            cnt_b++;
        else if (A[i] == 300)
            cnt_c++;
        else if (A[i] == 400)
            cnt_d++;
        else
            ;
    }
    printf("%d\n", cnt_a * cnt_d + cnt_b * cnt_c);
    return 0;
}