// author:Hemant1101
// lang: C
// topic: codechef problem ( file name is the problem code )

//without using function
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, d;
        int day;
        int max;
        scanf("%d %d %d", &n, &k, &d);
        int sum = 0;
        int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum = sum + a;
        }
        max = sum / k;
        if (max < d)
        {
            day = max;
        }
        else
        {
            day = d;
        }

        printf("%d\n", day);
    }
    return 0;
}

// using function

/*
#include <stdio.h>

int maxday(int sum, int n, int k, int d)
{
    int day = 0;
    if (sum >= (d * k))
    {
        return d;
    }
    else
    {
        while ((d * k) > sum)
        {
            d--;
            day = d;
        }
    }
    return day;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, d;
        int day;
        scanf("%d %d %d", &n, &k, &d);
        int sum = 0;
        int a;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum = sum + a;
        }
        day = maxday(sum, n, k, d);
        printf("%d\n", day);
    }
    return 0;
}
*/
