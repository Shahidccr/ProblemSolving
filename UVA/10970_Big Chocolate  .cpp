
#include<stdio.h>
int main()
{
    long int m,n,cut;
    while(scanf("%ld%ld",&m,&n)==2)
    {
        cut=(m*n)-1;
        printf("%ld\n",cut);
    }
    return 0;
}

