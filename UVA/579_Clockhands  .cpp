
#include<stdio.h>
#include<math.h>
int main()
{
    float h,m,ang;
    while(scanf("%f:%f",&h,&m)==2)
    {
        if(h==0 && m==0) break;
        ang=(h*30+m*0.5)-(m*6);
        if(ang>180) ang=360-ang;
        if(ang<0)ang*=-1;
        printf("%.3f\n",ang);
    }
    return 0;
}
