//Newton's Raphson
#include<stdio.h>
#include <math.h>
float fun(float a)
{
    return (a*a - 2);
}
float dfun(float a)
{
    return (2*a);
}
int main()
{
    do
    {
        float a;
        int s1;
        printf("Enter a => ");
        scanf("%f", &a);
        int n,p;
        int g=0;
        float t=__FLT_MIN__,c;
        int pr;
        printf("Enter the number of iterations => ");
        scanf("%d", &n);
        printf("Enter the number of digits after decimal => ");
        scanf("%d", &p);
        pr = pow(10,p);
        t = a - fun(a)/dfun(a);
        a=t;
        printf("Root at %f is found at %d iteration. \n",t,1);
        for (int i = 1; i < n; i++)
        {
            c = a - fun(a)/dfun(a);
            if ((int)(c*pr)==(int)(a*pr))
            {
                printf("Your answer => %f", a);
                g=1;
                break;
            }
            printf("Root at %f is found at %d iteration. \n",c,(i+1));
            a=c;
        }
        if (g==0)
        {
            printf("You are out of iterations.");
        }
        break;
    } while (1);
    return 0;
}