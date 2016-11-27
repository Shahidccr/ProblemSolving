
#include<stdio.h>
#include<math.h>
int main()
{
    long int h,o,d;
    while(scanf("%ld%ld",&h,&o)==2)
    {
        if(h>o) d=h-o;
        else d=o-h;
        printf("%ld\n",d);
    }
    return 0;
}
