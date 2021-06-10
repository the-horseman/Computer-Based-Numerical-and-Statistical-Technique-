//Regula Falsi
#include<stdio.h>
#include <math.h>
float fun(float a)
{
    return (3*a*a*a - 4*a - 9);
}
int main()
{
    do
    {
        float a,b;
        int s1;
        printf("Enter a => ");
        scanf("%f", &a);
        printf("Enter b => ");
        scanf("%f", &b);
        if (fun(a)*fun(b)>0)
        {
            printf("Wrong do u want to try again (1/0) => ");
            scanf("%d",&s1);
            if (s1==0)
            {
                break;
            }
        }
        else if (fun(a)*fun(b)==0)
        {
            if (fun(a) == 0)
            {
                printf("%d is exit",a);
            }
            else
            {
                printf("%d is exit",b);
            }
            break;
        }
        else
        {
            int n,p;
            int g=0;
            float t=__FLT_MIN__,c;
            int pr;
            printf("********Guessed right interval********\n");
            printf("Enter the number of iterations => ");
            scanf("%d", &n);
            printf("Enter the number of digits after decimal => ");
            scanf("%d", &p);
            pr = pow(10,p);
            for (int i = 0; i < n; i++)
            {
                c = (a*fun(b) - b*fun(a))/(fun(b)-fun(a));
                if (fun(a)*fun(c)<0)
                {
                    b=c;
                }
                else if (fun(c)*fun(b)<0)
                {
                    a=c;
                }
                if ((int)(c*pr)==(int)(t*pr))
                {
                    printf("Your answer => %f", t);
                    g=1;
                    break;
                }
                printf("Root at %f is found at %d iteration. \n",c,(i+1));
                t=c;
            }
            if (g==0)
            {
                printf("You are out of iterations.");
            }
            break;
        }
    } while (1);
    return 0;
}