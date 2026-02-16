#include <stdio.h>

void reverseArray(int arr[] , int n){
    printf("Revered array: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}


int sumArray(int arr [], int n) {

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
    
    reverseArray(arr, n);
    
    int result = sumArray(arr, n);


    printf("Sum of array elements: %d\n", result);
    



    return 0;


}
