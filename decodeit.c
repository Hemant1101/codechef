// author:Hemant1101
// lang: C
// topic: codechef problem ( file name is the problem code )


#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y = 4, i, m = 0;
        scanf("%d", &n);
        x = n / 4;
        int g = x;
        char s[n], f[y], a[g];
        scanf("%s", s);
        while (x--)
        {
            for (i = m; i < m + 4; i++)
            {
                f[i - m] = s[i];
            }
            if (f[0] == '0' && f[1] == '0' && f[2] == '0' && f[3] == '0')
            {
                a[x] = 'a';
                // printf("a");
            }
            if (f[0] == '0' && f[1] == '0' && f[2] == '0' && f[3] == '1')
            {
                a[x] = 'b';
            }
            // printf("b");
            if (f[0] == '0' && f[1] == '0' && f[2] == '1' && f[3] == '0')
            {
                a[x] = 'c';
            }
            // printf("c");
            if (f[0] == '0' && f[1] == '0' && f[2] == '1' && f[3] == '1')
            {
                a[x] = 'd';
            }
            // printf("d");
            if (f[0] == '0' && f[1] == '1' && f[2] == '0' && f[3] == '0')
            {
                a[x] = 'e';
            }
            // printf("e");
            if (f[0] == '0' && f[1] == '1' && f[2] == '0' && f[3] == '1')
            {
                a[x] = 'f';
            }
            // printf("f");
            if (f[0] == '0' && f[1] == '1' && f[2] == '1' && f[3] == '0')
            {
                a[x] = 'g';
            }
            // printf("g");
            if (f[0] == '0' && f[1] == '1' && f[2] == '1' && f[3] == '1')
            {
                a[x] = 'h';
            }
            // printf("h");
            if (f[0] == '1' && f[1] == '0' && f[2] == '0' && f[3] == '0')
            {
                a[x] = 'i';
            }
            // printf("i");
            if (f[0] == '1' && f[1] == '0' && f[2] == '0' && f[3] == '1')
            {
                a[x] = 'j';
            }
            // printf("j");
            if (f[0] == '1' && f[1] == '0' && f[2] == '1' && f[3] == '0')
            {
                a[x] = 'k';
            }
            // printf("k");
            if (f[0] == '1' && f[1] == '0' && f[2] == '1' && f[3] == '1')
            {
                a[x] = 'l';
            }
            // printf("l");
            if (f[0] == '1' && f[1] == '1' && f[2] == '0' && f[3] == '0')
            {
                a[x] = 'm';
            }
            // printf("m");
            if (f[0] == '1' && f[1] == '1' && f[2] == '0' && f[3] == '1')
            {
                a[x] = 'n';
            }
            // printf("n");
            if (f[0] == '1' && f[1] == '1' && f[2] == '1' && f[3] == '0')
            {
                a[x] = 'o';
            }
            // printf("o");
            if (f[0] == '1' && f[1] == '1' && f[2] == '1' && f[3] == '1')
            {
                a[x] = 'p';
            }
            // printf("p");

            m = i;
        }
        // strrev(a);
        // printf("%s", a);
        for (int l = g - 1; l >= 0; l--)
        {
            printf("%c", a[l]);
        }
        printf("\n");
    }
    return 0;
}
