
#include<stdio.h>
#include<string.h>
int main()
{
    char num[1002];
    int n,len,r,i,j,k;
    while(gets(num))
    {
        n=0;
        len=strlen(num);
        if(len==1 && num[0]=='0') break;
        k=0;
        r=0;
        for(i=0; i<len; i++)
        {
            n=(r*10)+(num[i]-48);
            r=(n%11);
            if(i==len-1 && r==0) k++;
        }
        if(k>0) printf("%s is a multiple of 11.\n",num);
        else printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
