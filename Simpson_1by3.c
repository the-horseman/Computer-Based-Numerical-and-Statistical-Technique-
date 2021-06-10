#include<stdio.h>
#include <math.h>
float fun(float x)
{
    return sin(x)*sin(x);
}
int main()
{
    int n;
    float ul,ll;
    scanf("%d",&n);
    scanf("%f%f",&ul,&ll);
    float h = (ul-ll)/n;
    float x[n+1];
    float y[n+1];
    // Making the table
    for(int i=0 ; i<=n ; ++i)
    {
        x[i] = ll+h*i;
        y[i] = fun(x[i]);
    }
    // Printing the table
    for(int i=0 ; i<=n ; ++i)
    {
        printf("%f\t%f\n",x[i],y[i]);
    }
    // Solving the question
    float sum1=0;
    float sum2=0;
    float s1=y[0]+y[n];
    for (int i = 1; i <= n-1; i+=2)
    {
        sum1 += y[i];
    }
    sum1*=4;
    for (int i = 2; i <= n-2; i+=2)
    {
        sum2 += y[i];
    }
    sum2*=2;
    float ans = h*(s1+sum1+sum2)/3;
    printf("Ans => %f",ans);
    return 0;
}