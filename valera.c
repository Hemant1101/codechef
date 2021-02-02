#include <stdio.h>
int main()
{
    int y, k;
    long int n;
    int l = -1;
    int x = 1;
    int count = 0;
    scanf("%d %d %Ld", &y, &k, &n);
    while ((x + y) <= n)
    {
        if ((x + y) % k == 0)
        {
            printf("%d ", x);
            count++;
        }
        x++;
    }
    if (count == 0)
    {
        printf("%d", l);
    }

    return 0;
}