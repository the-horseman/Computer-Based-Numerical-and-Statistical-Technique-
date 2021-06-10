#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    float arr[n][2];
    // Inputing value in array
    for(int i=0 ; i<n ; ++i)
    {    
        for(int j=0 ; j<2 ; ++j)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    
    // Printing the table
    printf("\n");
    for(int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<2 ; ++j)
        {
            printf("%f\t",arr[i][j]);
        }
        printf("\n");
    }
    float x;
    printf("Enter the value you want => ");
    scanf("%f",&x);
    float ans=0;
    for(int i=0 ; i<n ; ++i)
    {
        float p=1;
        for(int j=0 ; j<n ; ++j)
        {
            if (i!=j)
                p=p*(x-arr[j][0])/(arr[i][0]-arr[j][0]);
        }
        ans = ans + p*arr[i][1];
    }
    printf("%f",ans);
    return 0;
}
// 4
// 300	2.4771
// 304	2.4829
// 305	2.4843
// 307	2.4871