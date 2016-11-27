
#include<stdio.h>
int main()
{
    long int ans,cas,n;
    while(scanf("%ld",&cas)==1)
    {
        for(int i=1; i<=cas; i++)
        {
            scanf("%ld",&n);
            n=n*567;
            n=n/9;
            n+=7492;
            n=n*235;
            n=n/47;
            n-=498;
            n=n/10;
            ans=n%10;
            if(ans<0) ans=ans*(-1);
            printf("%ld\n",ans);
        }
    }
    return 0;
}
