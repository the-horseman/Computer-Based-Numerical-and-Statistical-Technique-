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
        if (i%3!=0)
            sum1 += y[i];
        else
            sum2 +=y[i];
    }
    sum1*=3;
    sum2*=2;
    float ans = 3*h*(s1+sum1+sum2)/8;
    printf("Ans => %f",ans);
    return 0;
}