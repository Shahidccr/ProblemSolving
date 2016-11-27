
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char num[500];
    unsigned long skew,i,k,x,len;
    while(gets(num))
    {
        len=strlen(num);
        if(len==1 && (num[0]-48)==0) break;
        skew=0;
        for(i=0; i<len; i++)
        {
            x=(num[i]-48);
            k=len-i;
            skew+=x*(pow(2,k)-1);
        }
        printf("%lu\n",skew);
    }
    return 0;
}
