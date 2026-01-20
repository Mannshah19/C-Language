#include<stdio.h>


int main () {

    for(int i = 5; i >= 1; i--) {
        for ( int k = 1; k <= 5 - i ; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i ; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1");
            }
            else
            printf("0");
        }
        printf("\n");
    }



return 0;
}