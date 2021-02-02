// author:Hemant1101
// lang: C
// topic: codechef problem ( file name is the problem code )

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int k;
    for (k = 0; k < t; k++)
    {
        int n, i, j, count, x;
        count = 0;
        char str[130];
        scanf("%d", &n);
        scanf("%s", str);
        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count = count + 1;
            }
        }
        x = 100 * ((120 - n) + count) / 120;
        if (x >= 75)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
