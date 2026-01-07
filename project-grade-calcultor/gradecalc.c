#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter your score:");
    scanf("%d",&a);

    (a >= 90) ? printf("Your grade is A") :
    (a >= 80) ? printf("Your grade is B") :
    (a >= 70) ? printf("Your grade is C") :
    (a >= 60) ? printf("Your grade is D") :
    (a >= 50) ? printf("Your grade is E") :
    (a >= 40) ? printf("Your grade is F") : printf("You failed");




    return 0;
}