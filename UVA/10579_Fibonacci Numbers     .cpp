
#include<stdio.h>
#define max 5002
#define len 1020
int fbn[max][len];
void fibonacci()
{
    int i,j,k;
    fbn[0][0]=0;
    fbn[1][0]=1;
    for(i=2; i<max; i++)
    {
        for(j=0; j<len; j++)
        {
            fbn[i][j]+=fbn[i-1][j]+fbn[i-2][j];
            if(fbn[i][j]>9)
            {
                fbn[i][j+1]+=fbn[i][j]/10;
                fbn[i][j]%=10;
            }
        }
    }
}
int main()
{
    fibonacci();
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=len-1; i>0; i--)
        {
            if(fbn[n][i]!=0)break;
        }
        for(; i>=0; i--)
            printf("%d",fbn[n][i]);
        printf("\n");
    }
    return 0;
}
