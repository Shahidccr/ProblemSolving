
#include<stdio.h>
int main()
{
    int c,i,j,a,b;
    while(scanf("%d",&c)==1)
    {
        for(i=1; i<=c; i++)
        {
            scanf("%d%d",&a,&b);
            if(b<a)
            {
                int temp=a;
                a=b;
                b=temp;
            }
            int sum=0;
            for(j=a; j<=b; j++)
            {
                if(j%2==1) sum+=j;
            }
            printf("Case %d: %d\n",i,sum);
        }
    }
    return 0;
}
