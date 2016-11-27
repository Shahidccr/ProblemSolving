
#include<stdio.h>
int main()
{
    char ch,x;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='\n')printf("\n");
        else
        {
            x=ch-7;
            printf("%c",x);
        }
    }
    return 0;
}
