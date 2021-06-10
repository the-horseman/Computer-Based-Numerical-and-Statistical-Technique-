#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n+2];
    // Filling the array with zeros
    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<n+2 ; ++j)
        {
            arr[i][j]=0;
        }
    }
    // Inputing value in array
    for(int i=0 ; i<n ; ++i)
    {    
        for(int j=0 ; j<2 ; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // Making a Backward difference table
    for(int j=2 ; j<n+1 ; ++j)
    {
        for(int i=j-1 ; i<n ; ++i)
        {
            arr[i][j] = arr[i][j-1]-arr[i-1][j-1];
        }
    }
    // Printing the table
    printf("\n");
    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<n+2 ; ++j)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int x;
    printf("Enter the value you want => ");
    scanf("%d",&x);
    if (x>arr[0][0] && x<arr[n-1][0])
    {
        float u = (float)(x-arr[n-1][0])/(float)(arr[1][0]-arr[0][0]);
        float u1=u;
        float y=(float)(arr[n-1][1]);
        float k=1;
        for (int i=2; i <= n; i++)
        {
            y=y+(float)(u1*(float)(arr[n-1][i]/k));
            u1=u1*(u+(i-1));
            k=k*i;
        }
        printf("The Answer is => %f",y);
    }
    else
        printf("Value entered Wrong");
    return 0;
}
// 5
// 1891	46
// 1901	66
// 1911	81
// 1921	93
// 1931	101