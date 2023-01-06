#include <stdio.h>

int main()
{
    int h, w, count_s = 0, count_tt = 0;
    scanf("%d%d", &h, &w);
    char s[h][w], t[h][w], letter = '.';
    for (int i = 0; i < h * w; i++)
        scanf(" %c", &s[i / w][i % w]);
    for (int i = 0; i < h * w; i++)
        scanf(" %c", &t[i / w][i % w]);

    for (int i = 0; i < h * w; i++)
    {
        if (s[i / w][i % w] == letter)
            count_s++;
        if (t[i / w][i % w] == letter)
            count_tt++;
        if (i % w == w - 1)
        {
            if (count_s != count_tt)
            {
                printf("No\n");
                return 0;
            }
            count_s = 0, count_tt = 0;
        }
    }
    printf("Yes\n");
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int h, w;
//     scanf("%d %d", &h, &w);
//     char s[w + 1][h + 1];
//     char t[w + 1][h + 1];
//     char a[h + 1][w + 1];
//     char b[h + 1][w + 1];
//     int eqflg[w];
//     int flg;
//     memset(eqflg, 0, sizeof eqflg);
//     // input s
//     for (int i = 0; i < h; i++)
//     {
//         scanf("%s", s[i]);
//         for (int j = 0; j < w; j++)
//             a[j][i] = s[i][j];
//     }
//     for (int i = 0; i < w; i++)
//         a[i][h] = '\0';

//     // input t
//     for (int i = 0; i < h; i++)
//     {
//         scanf("%s", t[i]);
//         for (int j = 0; j < w; j++)
//             b[j][i] = t[i][j];
//     }
//     for (int i = 0; i < w; i++)
//         b[i][h] = '\0';

//     for (int i = 0; i < w; i++)
//     {
//         flg = 0;
//         for (int j = 0; j < w; j++)
//         {
//             if (strcmp(a[i], b[j]) == 0 && eqflg[j] == 0)
//             {
//                 eqflg[j] = 1;
//                 flg = 1;
//                 break;
//             }
//         }
//         if (flg == 0)
//         {
//             puts("No");
//             return 0;
//         }
//     }
//     puts("Yes");
//     return 0;
// }