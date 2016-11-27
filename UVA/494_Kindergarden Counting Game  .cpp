
#include<stdio.h>
#include<string.h>
int main()
{
    char line[1000],w;
    int len,i,a,word;
    while(gets(line))
    {
        word=0;
        len=strlen(line);
        if((line[0]<='Z'&& line[0]>='A')||(line[0]<='z'&& line[0]>='a')) word++;
        for(i=1; i<len; i++)
        {
            a=0;
            w=0;
            if((line[i-1]<='Z'&& line[i-1]>='A')||(line[i-1]<='z'&& line[i-1]>='a'))a++;
            if((line[i]<='Z'&& line[i]>='A')||(line[i]<='z'&& line[i]>='a'))w++;
            if(a==0&&w==1) word++;
        }
        printf("%d\n",word);
    }
    return 0;
}

