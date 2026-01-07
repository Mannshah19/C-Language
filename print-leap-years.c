#include<stdio.h>
#include<conio.h>


int main() {

    int start , end;
    printf("Enter the First number: ");
    scanf("%d",&start);
    printf("Enter the Second number: ");
    scanf("%d",&end);

    while (start <= end)
    {
        if (( start % 4 == 0 && start % 100 != 0) || (start % 400 == 0))
        {
            printf("%d ",start);
        }
        start++;
    }
    



    return 0;
}
