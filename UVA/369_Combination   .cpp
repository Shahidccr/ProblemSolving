
#include<stdio.h>
long double fact(long double num)
{
    if(num==0) return 1;
    else return (num*fact(num-1));
}
int main()
{
    long double m,n,c;
    while(scanf("%Lf%Lf",&n,&m)==2)
    {
        if(n==0 && m==0)break;
        c=fact(n)/(fact(n-m)*fact(m));
        printf("%.0Lf things taken %.0Lf at a time is %.0Lf exactly.\n",n,m,c);
    }
    return 0;
}

