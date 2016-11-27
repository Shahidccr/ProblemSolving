
#include<stdio.h>
#include<math.h>
int main()
{
    long int input,p,i,x;
    while(scanf("%ld",&input)==1)
    {
        if(input==0) break;
        for(i=0; i<=19; i++)
        {
            p=(long)pow(2,i);
            if(input<=p)break;
        }
        x=p-(p-input)*2;
        printf("%ld\n",x);
    }
    return 0;
}
