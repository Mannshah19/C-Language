#include<stdio.h>
#include<conio.h>

int main () {

    int i , sum = 0 , n;

    printf("Enter any number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    printf("The Sum of all Numbers: %d",sum);




    return 0;
}