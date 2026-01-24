#include<stdio.h>

int main () {
    int m , n , sum = 0;
    float avg;

    printf("Enter the array's row size: ");
    scanf("%d",&n);

    printf("Enter the array's column size: ");
    scanf("%d",&m);
    
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            printf("Enter array A's elements:");
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }

    int b[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            printf("Enter array B's elements:");
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
            
        }
        printf("\n");
    }
    
    int c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
            
        }
    }
        printf("Array C is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            printf("%d ", c[i][j]);
            
        }
        printf("\n");
    }
    
    
return 0;
}