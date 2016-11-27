
#include<stdio.h>
int main()
{
    long long n,odd,sum;
    while(scanf("%lld",&n)==1)
    {
        odd=(n*(n+2))/2;
        sum=3*odd-6;
        printf("%lld\n",sum);
    }
    return 0;
}
