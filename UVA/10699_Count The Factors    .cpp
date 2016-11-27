
#include<stdio.h>
#define max 10000002
char prime[max+1];
void sieve()
{
    int i,j,p,k;
    prime[0]=prime[1]=0;
    prime[2]=1;
    for(i=3; i<=max; i+=2)prime[i]=1,prime[i+1]=0;
    for(i=3; i<=max; i+=2)
    {
        if(prime[i]==1)
        {
            for(j=i+2*i; j<=max; j+=2*i)
            {
                prime[j]=0;
            }
        }
    }
}
int main()
{
    sieve();
    long int r,num,fac,i;
    while(scanf("%ld",&num)==1)
    {
        if(num==0)break;
        fac=0;
        r=num/2;
        if(prime[num]==1)fac=1;
        else
        {
            for(i=2; i<=r; i++)
            {
                if(prime[i]==1 && num%i==0)fac++;
            }
        }
        printf("%ld : %ld\n",num,fac);
    }
    return 0;
}
