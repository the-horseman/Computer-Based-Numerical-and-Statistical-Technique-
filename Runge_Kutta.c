#include<stdio.h>
float fun(float x, float y)
{
    return (x-y)/2;
}
int main()
{
    float x0,y0;
    scanf("%f%f",&x0,&y0);
    float h,xn;
    scanf("%f%f",&h,&xn);
    float x=x0;
    float y=y0;
    float k,k1,k2,k3,k4;
    while (x<xn)
    {
        k1 = h*fun(x,y);
        k2 = h*fun(x+h/2,y+k1/2);
        k3 = h*fun(x+h/2,y+k2/2);
        k4 = h*fun(x+h,y+k3);
        k = (k1+2*k2+2*k3+k4)/6;
        y+=k;
        x+=h;
    }
    printf("%f\t%f",x,y);
    return 0;
}