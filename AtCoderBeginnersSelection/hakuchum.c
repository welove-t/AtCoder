#include <stdio.h>
#include <string.h>

#define MAX 100001

int main()
{
    char S[MAX];
    int i = 0;
    int strcnt;

    scanf("%s", S);
    strcnt = strlen(S);

    while (i < strcnt)
    {
        if (strncmp(&S[i], "dreameraser", 11) == 0)
            i += 11;
        else if (strncmp(&S[i], "dreamerase", 10) == 0)
            i += 10;
        else if (strncmp(&S[i], "dreamer", 7) == 0)
            i += 7;
        else if (strncmp(&S[i], "eraser", 6) == 0)
            i += 6;
        else if ((strncmp(&S[i], "dream", 5) == 0) || (strncmp(&S[i], "erase", 5) == 0))
            i += 5;
        else
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}