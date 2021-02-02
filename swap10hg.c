// author:Hemant1101
// lang: C
// topic:Codechef problems ( file name is the problem code )

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int counta = 0, countb = 0;
        scanf("%d", &n);
        char strs[n];
        char strp[n];
        scanf("%s", strs);
        scanf("%s", strp);
        for (int i = 0; i < n; i++)
        {
            if (strs[i] == '0')
            {
                counta++;
            }
            if (strp[i] == '0')
            {
                countb++;
            }
        }
        if (counta == countb)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        printf("\n");
    }
    return 0;
}
