
#include<stdio.h>
#include<math.h>
int main()
{
    long double one,num,i,j;
    while(scanf("%Lf",&num)==1)
    {
        one=1;
        for(j=1;; j++)
        {
            if(fmodl(one,num)==0) break;
            else
            {
                one=(one*10)+1;
                one=fmodl(one,num);
            }
        }
        printf("%.0Lf\n",j);
    }
    return 0;
}
