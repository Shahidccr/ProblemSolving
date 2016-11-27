
#include<stdio.h>
#include<string.h>
int main()
{
    char haiku[300];
    int syl1,syl2,syl3,len,rht,mid,lft,i,j,k,p,a,b,c;
    while(gets(haiku))
    {
        len=strlen(haiku);
        if(haiku[0]=='e' && haiku[1]=='/' && haiku[2]=='o' && haiku[3]=='/' && haiku[4]=='i' && len==5)break;
        syl1=syl2=syl3=a=b=0;
        for(i=0; i<len; i++)
        {
            if(haiku[i]=='/' && a==0)a=i;
            if(haiku[i]=='/' && a!=0)b=i;
        }
        for(j=0; j<a; j++)
        {
            if((haiku[j]=='a'||haiku[j]=='e'||haiku[j]=='i'||haiku[j]=='o'||haiku[j]=='u'
                    ||haiku[j]=='y')&& (!(haiku[j-1]=='a'||haiku[j-1]=='e'||haiku[j-1]=='i'||
                                          haiku[j-1]=='o'||haiku[j-1]=='u'||haiku[j-1]=='y')) )syl1++;
        }
        if(syl1!=5) printf("1\n",syl1);
        else
        {
            for(j=a+1; j<b; j++)
            {
                if((haiku[j]=='a'||haiku[j]=='e'||haiku[j]=='i'||haiku[j]=='o'||haiku[j]=='u'||
                        haiku[j]=='y')&& (!(haiku[j-1]=='a'||haiku[j-1]=='e'||haiku[j-1]=='i'||haiku[j-1]=='o'||haiku[j-1]=='u'||haiku[j-1]=='y')))syl2++;
            }
            if(syl2!=7)printf("2\n");
            else
            {
                for(j=b+1; j<len; j++)
                {
                    if((haiku[j]=='a'||haiku[j]=='e'||haiku[j]=='i'||haiku[j]=='o'||haiku[j]=='u'||
                            haiku[j]=='y')&& (!(haiku[j-1]=='a'||haiku[j-1]=='e'||haiku[j-1]=='i'||haiku[j-1]=='o'||haiku[j-1]=='u'||haiku[j-1]=='y')))syl3++;
                }
                if(syl3!=5)printf("3\n");
                else printf("Y\n");
            }
        }
    }
    return 0;
}
