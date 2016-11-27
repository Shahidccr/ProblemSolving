
#include<stdio.h>
int main()
{
    long int prem,kase,farm,a,b,c;
    while(scanf("%ld",&kase)==1)
    {
        for(int i=1; i<=kase; i++)
        {
            prem=0;
            scanf("%ld",&farm);
            {
                for(int j=1; j<=farm; j++)
                {
                    scanf("%ld%ld%ld",&a,&b,&c);
                    prem+=a*c;
                }
                printf("%ld\n",prem);
            }
        }
    }
    return 0;
}
