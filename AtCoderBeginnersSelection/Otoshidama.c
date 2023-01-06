#include <stdio.h>

int main()
{
    int N;
    long Y;
    int x, y, z;
    int flag = 0;

    scanf("%d %ld", &N, &Y);

    for (x = 0; x <= N; x++)
    {
        for (y = 0; y <= N; y++)
        {
            if (x + y > N || 10000 * x + 5000 * y > Y)
                break;
            for (z = 0; z <= N; z++)
            {
                if (x + y + z > N || 10000 * x + 5000 * y + 1000 * z > Y)
                    break;
                if (x + y + z == N && 10000 * x + 5000 * y + 1000 * z == Y)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        printf("%d %d %d\n", x, y, z);
    else
        puts("-1 -1 -1");
    return 0;
}