
#include<stdio.h>
#include<math.h>
int main()
{
    long N,n,kase=1;
    while(scanf("%ld",&N)==1)
    {
        if(N==0)break;
        n=ceil((3+sqrt(9+8*N))/2);
        printf("Case %ld: %ld\n",kase,n);
        kase++;
    }
    return 0;
}
