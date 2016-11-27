
#include<stdio.h>
#define max 380
#define len 1000
int num[max][len];
void fact()
{
    int i,j;
    num[0][0]=num[1][0]=1;
    for(i=2; i<max; i++)
        for(j=0; j<len; j++)
        {
            num[i][j]+=num[i-1][j]*i;
            if(num[i][j]>9)
            {
                num[i][j+1]+=num[i][j]/10;
                num[i][j]%=10;
            }
        }
}
int main()
{
    fact();
    int n,i,j,fre[10];
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        for(i=0; i<=9; i++)fre[i]=0;
        for(i=len-1; i>0; i--)if(num[n][i]!=0)break;
        printf("%d! --\n",n);
        for(; i>=0; i--)
        {
            j=num[n][i];
            fre[j]++;
        }
        printf("    (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",fre[0],fre[1],fre[2],fre[3],fre[4]);
        printf("    (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",fre[5],fre[6],fre[7],fre[8],fre[9]);
    }
    return 0;
}
