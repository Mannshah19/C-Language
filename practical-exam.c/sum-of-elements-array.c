#include <stdio.h>

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];


    }

    return sum;

}

int main() {

    int n;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {


        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

    }
    
    int result = sumArray(arr, n);
    
    printf("Sum of array elements: %d\n", result);
    

    return 0;

}