#include<stdio.h>
#include<conio.h>

int main () {

    int i , multi = 1 , n;

    printf("Enter any number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        multi *= i;
    }
    
    printf("The Multiplication of all Numbers: %d",multi);




    return 0;
}