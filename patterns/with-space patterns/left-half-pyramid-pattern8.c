#include<stdio.h>


int main () {

        int n = 5;
    for(int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n + 1 - i ; j++)
        {
            printf("%d",j);
        }
        for (int k = 1; k <= 2*(i-1); k++)
        {
            printf(" ");
        }
        for (int j = n - i + 1; j >= 1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n + 1 - i; j++)
    {
        printf("%d",j);
    }
        for (int k = 1; k <= 2*(i - 1) ; k++)
        {
            printf(" ");
        }
        for (int j = n - i + 1 ; j >= 1 ; j--)
        {
            printf("%d",j);
        }
    printf("\n");

    }
    
return 0;    
}

