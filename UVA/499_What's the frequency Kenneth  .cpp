
#include<string.h>
#include<stdio.h>
int main()
{
    int i,len,j,k;
    char line[301],x;
    while(gets(line))
    {
        int max,up[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
                        ,lo[26]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        len=strlen(line);
        for(i=0; i<len; i++)
        {
            if(line[i]>='a'&&line[i]<='z')
            {
                x=line[i];
                lo[x-97]++;
            }
            if(line[i]>='A'&&line[i]<='Z')
            {
                x=line[i];
                up[x-65]++;
            }
        }
        max=0;
        for(j=0; j<26; j++)
        {
            if (up[j]>max) max=up[j];
            if (lo[j]>max) max=lo[j];
        }
        for(k=0; k<26; k++)
        {
            if(up[k]==max) printf("%c",k+65);
        }
        for(k=0; k<26; k++)
        {
            if(lo[k]==max) printf("%c",k+97);
        }
        printf(" %d\n",max);
    }
    return 0;
}
