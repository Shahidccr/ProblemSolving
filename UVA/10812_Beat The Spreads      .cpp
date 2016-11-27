
#include<stdio.h>
int main()
{
    int c,s,d,a,b;
    scanf("%d",&c);
    for(int i=1; i<=c; i++)
    {
        scanf("%d%d",&s,&d);
        a=s+d;
        b=s-d;
        if((b%2)||(a%2)||(b < 0))
        {
            printf("impossible\n") ;
        }
        else
            printf("%d %d\n",a/2,b/2);
    }
    return 0;
}
