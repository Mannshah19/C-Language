#include<stdio.h>


int main () {

    for(int i = 5; i >= 1; i--) {
        for ( int k = 1; k <= 5 - i ; k++)
        {
            printf(" ");
        }
        
        for (int j = i; j >= 1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }



return 0;
}