
#include<stdio.h>
int main()
{
    long double b,p;
    while(scanf("%Lf",&b)==1)
    {
        if(b==0) break;
        long double x=0,y=1,p=0;
        for(int i=1; i<=b; i++)
        {
            p=x+y;
            x=y;
            y=p;
        }
        printf("%.0Lf\n",p);
    }
    return 0;
}
