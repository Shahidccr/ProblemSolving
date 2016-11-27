
#include<stdio.h>
#include<math.h>
int main()
{
    long double r,n,area,b;
    while(scanf("%Lf%Lf",&r,&n)==2)
    {
        b=sin((3.14159265358979*2)/n);
        area=(pow(r,2)*n*b)/2;
        printf("%.3Lf\n",area);
    }
    return 0;
}
