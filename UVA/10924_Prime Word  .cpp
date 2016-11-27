
#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int len,a,b,i,j;
    while(gets(word))
    {
        a=0;
        b=0;
        len=strlen(word);
        for(i=0; i<len; i++)
        {
            if(word[i]>'a' && word[i]<'z') a=a+(word[i]-96);
            else if(word[i]>'A' && word[i]<'Z') a=a+(word[i]-64);
            if(word[i]==' ') break;
        }
        for(j=2; j<=a/2; j++)
        {
            if(a%j==0)
            {
                b++;
                break;
            }
        }
        if(b==0) printf("It is a prime word.\n");
        if(b>0)printf("It is not a prime word.\n");
    }
    return 0;
}
