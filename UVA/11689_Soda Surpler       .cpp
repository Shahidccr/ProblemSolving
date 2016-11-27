
#include<stdio.h>
int main()
{
    long int r,i,emp,f,c,x,kase,e,ans;
    while(scanf("%ld",&kase)==1)
    {
        for(i=1; i<=kase; i++)
        {
            scanf("%ld%ld%ld",&e,&f,&c);
            emp=e+f;
            ans=0;
            r=0;
            for(;;)
            {
                x=emp/c;
                ans+=x;
                emp=emp/c+emp%c+r;
                if(emp<c)break;
            }
            printf("%ld\n",ans);
        }
    }
    return 0;
}
