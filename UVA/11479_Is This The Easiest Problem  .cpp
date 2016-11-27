
#include<stdio.h>
int main()
{
    long int a,max,b,c,kase;
    while(scanf("%ld",&kase)==1)
    {
        for(int i=1; i<=kase; i++)
        {
            max=0;
            scanf("%ld%ld%ld",&a,&b,&c);
            if(a>max) max=a;
            if(b>max) max=b;
            if(c>max) max=c;
            if((a+b+c-max)<=max) printf("Case %d: Invalid\n",i);
            else if(a==b && a==c) printf("Case %d: Equilateral\n",i);
            else if (a==b ||a==c || b==c) printf("Case %d: Isosceles\n",i);
            else if(a!=b && b!=c && c!=a)printf("Case %d: Scalene\n",i);

        }
    }
    return 0;
}
