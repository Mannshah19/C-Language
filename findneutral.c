#include<stdio.h>
#include<conio.h>

int main() {

    int a;
    printf("Enter any value:");
    scanf("%d",&a);
    

    if (a > 0)
    {
        printf("This number is POsitive");
    }
    else if (a < 0)
    {
        printf("This number is Negative");
    }
    
    else
    {
        printf("This number is Neutral");
    }

    return 0;

}