#include <stdio.h>
#include <string.h>

int main()
{
    char w[101];
    int cnt;

    scanf("%s", w);

    for (int i = 0; i < strlen(w); i++)
    {
        cnt = 0;
        for (int j = 0; j < strlen(w); j++)
        {
            if (w[i] == w[j])
                cnt++;
        }
        if (cnt % 2 != 0)
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}