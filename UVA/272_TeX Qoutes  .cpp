
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    long int a=0;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"')
        {
            a++;
            if(a%2==1) printf("``");
            else if (a%2==0) printf("''");
        }
        else printf("%c",ch);
    }
    return 0;
}
