
#include<stdio.h>
long int reverse(long int num)
{
    long int ini,x,rev;
    rev=0;
    while(num>0)
    {
        x=num%10;
        rev=(rev*10)+x;
        num=num/10;
    }
    return rev;
}
int main()
{
    long int cas,i,calc,r,ini,rev,num;
    while(scanf("%ld",&cas)==1)
    {
        for(i=1; i<=cas; i++)
        {
            calc=0;
            scanf("%ld",&num);
            for(;;)
            {
                rev=reverse(num);
                if (rev==num) break;
                else num+=rev;
                calc++;
            }
            printf("%ld %ld\n",calc,rev);
        }
    }
    return 0;
}

