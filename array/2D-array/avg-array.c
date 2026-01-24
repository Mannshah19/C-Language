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

            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    avg = (float)sum / (m*n);
    printf("Average of an array:\n%f ",avg);


return 0;
}