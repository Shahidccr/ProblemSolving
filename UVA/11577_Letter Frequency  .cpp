
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i,j,max,len,kase,k;
    char text[201];
    while(scanf("%d\n",&kase)==1)
    {
        for(k=1; k<=kase; k++)
        {
            gets(text);
            int let[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},x;
            len=strlen(text);
            for(i=0; i<len; i++)
            {
                if((tolower(text[i]))>='a' && (tolower(text[i]))<='z')
                {
                    x=tolower(text[i]);
                    let[x-97]++;
                }
            }
            max=0;
            for(j=0; j<26; j++)
            {
                if(let[j]>max) max=let[j];
            }
            for(j=0; j<26; j++)
            {
                if(let[j]==max) printf("%c",j+97);
            }
            printf("\n");
        }
    }
    return 0;
}
