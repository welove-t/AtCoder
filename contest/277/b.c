#include <stdio.h>
#include <string.h>

int main()
{
    int n, flg = 0;
    scanf("%d", &n);
    char s[n][3];
    char t[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
        if (!(s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S'))
            flg = 1;
        if (!(s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6' || s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K'))
            flg = 1;
        strcpy(t[i], s[i]);
        for (int j = 0; j < i; j++)
        {
            if (strcmp(s[i], t[j]) == 0)
                flg = 1;
        }
    }
    if (flg == 1)
        puts("No");
    else
        puts("Yes");
    return 0;
}