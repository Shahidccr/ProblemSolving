
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int strt[40000],dis,i,j,k,r,t,d,min,temp,loc;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&r);
            for(j=1; j<=r; j++)
            {
                scanf("%d",&strt[j]);
            }
            for(j=1; j<=r; j++)
            {
                for(k=1; k<r; k++)
                {
                    if(strt[k]>strt[k+1])
                    {
                        temp=strt[k];
                        strt[k]=strt[k+1];
                        strt[k+1]=temp;
                    }
                }
            }
            for(j=1; j<=r; j++)
            {
                dis=0;
                for(k=1; k<=r; k++)
                {
                    dis+=abs(strt[k]-strt[j]);
                }
                if(j==1)min=dis;
                if(dis<min)min=dis;
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
