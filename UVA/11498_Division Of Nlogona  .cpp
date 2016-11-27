
#include<stdio.h>
int main()
{
    long x1,y1,x,y;
    long n,i;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        scanf("%ld%ld",&x1,&y1);
        for(i=1; i<=n; i++)
        {
            scanf("%ld%ld",&x,&y);
            if(x==x1||y==y1)printf("divisa\n");
            else if(x>x1&&y>y1) printf("NE\n");
            else if(x<x1&&y>y1)printf("NO\n");
            else if(x<x1&&y<y1) printf("SO\n");
            else printf("SE\n");
        }
    }
    return 0;
}
