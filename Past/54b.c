#include <stdio.h>
#include <string.h>

#define MAX 51

int main()
{
    int n, m;
    int i, j, si, sj, k, l;
    int flag;
    char a[MAX][MAX], b[MAX][MAX];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);
    for (i = 0; i < m; i++)
        scanf("%s", b[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == b[0][0])
            {
                si = i;
                k = 0;
                while (k < m && si < n)
                {
                    sj = j;
                    l = 0;
                    while (l < m && sj < n)
                    {
                        if (a[si][sj] == b[k][l])
                        {
                            flag = 1;
                            l++;
                            sj++;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag == 1 && l == m)
                    {
                        k++;
                        si++;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }

            if (flag == 1 && k == m && l == m)
            {
                puts("Yes");
                return 0;
            }
        }
    }
    puts("No");
    return 0;
}