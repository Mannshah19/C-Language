#include<stdio.h>
#include<conio.h>

int main () {

    int n , i = 1;
    printf("Enter any Number:");
    scanf("%d",&n);

    do
    {
        if (i % 2 ==0)
        {
            printf("%d ",i);   
        }
        i++;
    } while (i <= n);
    


return 0;
}