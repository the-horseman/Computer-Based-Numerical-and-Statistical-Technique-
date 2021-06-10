#include<stdio.h>
float fun(float x, float y)
{
    return -2*x-y;
}
int main()
{
    float x0,y0;
    scanf("%f%f",&x0,&y0);
    float h,xn;
    scanf("%f%f",&h,&xn);
    float x=x0;
    float y=y0;
    float k;
    while (x<=xn)
    {
        k = h*fun(x,y);
        y+=k;
        x+=h;
    }
    printf("%f\t%f",x,y);
    return 0;
}