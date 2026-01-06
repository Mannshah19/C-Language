#include<stdio.h>
#include<conio.h>

int main() {

    int a,b,c;
    printf("Enter a value of  the first number:");
    scanf("%d",&a);
    printf("Enter a value of  the Second number:");
    scanf("%d",&b);
    printf("Enter a value of  the Third number:");
    scanf("%d",&c);

    (a<b) ? 
        ((a<c) ? printf("The minimum value is:%d",a) : printf("The minimum value is:%d",c))
    : ((b<c) ? printf("The minimum value is:%d",b) : printf("The minimum value is:%d",c));

return 0;
}