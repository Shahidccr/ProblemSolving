
#include<stdio.h>
#include<math.h>
#define max 33000
char prime[max+1];
//int p[3540];
int sum[1000000];
void sieve()
{
    int i,j,k=0;
    for(i=2; i<max; i++)prime[i]=1;
    for(i=2; i<=sqrt(max);)
    {
        for(j=i*2; j<=max; j+=i)
        {
            prime[j]=0;
        }
        i++;
        for(; !prime[i]; i++);
    }
    for(i=1; i<=max; i++)
    {
        if(prime[i])
        {
            for(j=i; j<=max; j++)
            {
                if(prime[j])
                {
                    sum[i+j]++;
                }
            }
        }
    }
}
int main()
{
    sieve();
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        printf("%d\n",sum[n]);
    }
    return 0;
}
