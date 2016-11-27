
#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j,x,p,q,game[110],win[110],lose[110],kase=0;
    double one,two,avg;
    char a[10],b[10];
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        scanf("%d",&k);
        kase++;
        x=(n*k*(n-1))/2;
        for(i=1; i<=n; i++)win[i]=lose[i]=game[i]=0;
        for(i=1; i<=x; i++)
        {
            scanf("%d%s%d%s",&p,&a,&q,&b);
            if(a[0]=='r'&&b[0]=='p')win[q]++,lose[p]++,game[p]++,game[q]++;
            else if(a[0]=='r'&&b[0]=='s')win[p]++,lose[q]++,game[p]++,game[q]++;
            else if(a[0]=='p')
            {
                if(b[0]=='r')win[p]++,lose[q]++,game[p]++,game[q]++;
                else if(b[0]=='s')win[q]++,lose[p]++,game[p]++,game[q]++;
            }
            else if(a[0]=='s')
            {
                if(b[0]=='p')win[p]++,lose[q]++,game[p]++,game[q]++;
                else if(b[0]=='r')win[q]++,lose[p]++,game[p]++,game[q]++;
            }
            else if(a==b)continue;
        }
        for(i=1; i<=n; i++)
        {
            avg=(double)win[i]/(double)(game[i]);
            if (game[i] == 0) printf("-\n");
            else printf("%.3lf\n",avg);
        }
        for(i=1; i<=n; i++)
        {
        }
        printf("\n");
    }
    return 0;
}
