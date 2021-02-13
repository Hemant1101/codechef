#include <stdio.h>
int main()
{
    int h,p;
    scanf("%d %d",&h,&p);
    for(int i=0;i<h;i++)
    {
        h=h-p;
        p=p/2;
        if(p==0 || p<0)
        {
            break;
        }
    }
    if (h==0 || h<0)
    {
        printf("chef wins");
    }
    if (p==0 || p<0)
    {
        printf("darth wins");
    }
    return 0;
}