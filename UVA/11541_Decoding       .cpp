
#include<stdio.h>
#include<string.h>
int decode(char car,int num)
{
    if (num==0) return 0;
    else for( int i=1; i<=num; i++)
            printf("%c",car);
    return 0;
}
int main()
{
    char code[202],let;
    int kase,amnt,i,j,len;
    while(scanf("%d\n",&kase)==1)
    {
        for(i=1; i<=kase; i++)
        {
            gets(code);
            printf("Case %d: ",i);
            len=strlen(code);
            let=0;
            amnt=0;
            for(j=0; j<len; j++)
            {
                if(code[j]>='A' && code[j]<='Z')
                {
                    decode(let,amnt);
                    let=code[j];
                    amnt=0;
                }
                else
                {
                    amnt=((amnt*10)+(code[j]-48));
                }
                if(j==len-1) decode(let,amnt);
            }
            printf("\n");
        }
    }
    return 0;
}
