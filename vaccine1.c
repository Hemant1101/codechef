#include <stdio.h>
int main()
{
    int day = 1, d1, v1, d2, v2, p, d, cv = 0;
    scanf("%d %d %d %d %d", &d1, &v1, &d2, &v2, &p);
    while (cv <= p)
    {
        day++;
        if (d1 <= day)
        {
            cv = cv + v1;
        }
        if (d2 <= day)
        {
            cv = cv + v2;
        }
    }
    d = day;
    printf("%d", d);
    return 0;
}