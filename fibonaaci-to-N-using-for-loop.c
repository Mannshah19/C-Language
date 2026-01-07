#include<stdio.h>
#include<conio.h>

int main () {
    int i , n;
    int a = 0, b = 1,c;

    printf("Enter Number of Terms: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d ",a);

        c = a + b;
        a = b;
        b = c;

    }
    
    
return 0;

}