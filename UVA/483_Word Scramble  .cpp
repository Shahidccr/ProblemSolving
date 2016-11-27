
#include<stdio.h>
#include<string.h>
int main()
{
    char c,s[1000];
    int i,j,k;
    while(scanf("%s",&s)==1)
    {
        if(s[0]=='\n' || s[1]=='\n') printf("\n");
        else printf("%s ",strrev(s));
    }
    return 0;
}
