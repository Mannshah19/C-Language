#include <stdio.h>
#include<conio.h>

int main()
{
    int num, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;      

    while (num >= 10)
    {
        num = num / 10; 
    }

    first = num;         

    printf("Sum of first and last digit = %d", first + last);

    return 0;
}
