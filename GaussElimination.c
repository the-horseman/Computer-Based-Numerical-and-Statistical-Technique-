//GAUSS ELIMINATION
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float arr[100][100];
float sol[100];
int n;
void matrix()
{
    printf("Enter the size of eqn => ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
}

void upptriangle()
{
    for (int k = 0; k < n-1; k++)
    {
        float c=arr[k][k];
        for (int i = k+1; i < n; i++)
        {
            float ch = arr[i][k]/c;
            for (int j = 0; j < n+1; j++)
            {   
                arr[i][j] = arr[i][j] - arr[k][j]*ch;
            }
        }
    }
}

void pmatrix()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf("%f\t",arr[i][j]);
        }
        printf("\n");
    }   
}

void finalsol()
{
    float ans[n];
    for(int i=n-1;i>=0;i--)
    {
        float fin = arr[i][n];
        for(int j=i+1;j<n;j++)
            fin -= arr[i][j]*ans[j];
        ans[i] = fin/arr[i][i];
    }
    for(int i=0 ; i<n ; ++i)
        printf("%.2f ",ans[i]);
    printf("\n");
}

int main()
{
    freopen("in.txt","r", stdin);
    matrix();
    printf("Input Taken\n");
    upptriangle();
    printf("Converted to Upper Traingular Matrix\n");
    pmatrix();
    printf("Printing of Matrix Completed\n");
    finalsol();
    printf("Printed the Final Solution\n");
    return 0;
}