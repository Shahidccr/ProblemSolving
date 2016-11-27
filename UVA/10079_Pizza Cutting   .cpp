
#include<stdio.h>
int main()
{
    long int n,p;
    while(scanf("%ld",&n)==1)
    {
        if(n<0) break;
        p=(n*(n+1)/2)+1;
        printf("%ld\n",p);
    }
    return 0;
}
