
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int kase;
    char line[301],x;
    while(scanf("%d\n",&kase)==1)
    {
        int let[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i,j,k,max=0,len;
        for(i=1; i<=kase; i++)
        {
            gets(line);
            len=strlen(line);
            for(j=0; j<len; j++)
            {
                x=toupper(line[j]);
                if(x>='A'&&x<='Z') let[x-65]++;
            }
        }
        for(k=0; k<26; k++)
        {
            if(let[k]>max)max=let[k];
        }
        for(;;)
        {
            for(i=0; i<26; i++)
            {
                if(let[i]==max) printf("%c %d\n",i+65,max);
            }
            max--;
            if(max==0)break;
        }
    }
    return 0;
}
