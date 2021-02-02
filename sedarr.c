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
        int n, k;
        int count = 0;
        int sum = 0;
        int rem;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
        }
        if (sum % k == 0)
        {
            printf("%d\n", count);
        }
        else
        {
            count = 1;
            printf("%d\n", count);
        }
    }
    return 0;
}
