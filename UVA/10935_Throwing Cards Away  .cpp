
#include<stdio.h>
#include<math.h>
int main()
{
    int c,p,deck[55],n,i,j,k,x,r;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        if(n==1)printf("Discarded cards:\nRemaining card: 1\n");
        else
        {
            printf("Discarded cards: 1");
            for(i=1; i<=n; i++)deck[i]=1;
            deck[1]=0;
            x=1;
            c=0;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(deck[j]==1)c++;
                    if(x==n-1)break;
                    if(c==2)
                    {
                        deck[j]=0;
                        printf(", %d",j);
                        c=0;
                        x++;
                    }
                }
            }
            for(i=1;; i++)
            {
                if(pow(2,i)>=n)
                {
                    p=(long)pow(2,i);
                    break;
                }
            }
            r=p-((p-n)*2);
            printf("\nRemaining card: %d\n",r);
        }
    }
    return 0;
}
