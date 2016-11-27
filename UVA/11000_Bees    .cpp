
#include<stdio.h>
long int srs[1000];
int main()
{
    long unsigned year,x,y;
    while(scanf("%lu",&year)==1)
    {
        if(year==-1)break;
        else
        {
            long int a,b,c,i;
            a=srs[0]=1;
            b=srs[1]=2;
            for(i=2; i<=year+1; i++)
            {
                srs[i]=c=a+b;
                a=b;
                b=c;
            }
            printf("%lu %lu\n",srs[year]-1,srs[year+1]-1);
        }
    }
    return 0;
}
