#include<stdio.h>

int main (){

    int n;
    printf("Enetr array size: ");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter array A's elements: ");
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array B's elements: ");
        printf("b[%d] = ", i);
        scanf("%d",&b[i]);
    }
    
    int c[n];
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Array C is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}