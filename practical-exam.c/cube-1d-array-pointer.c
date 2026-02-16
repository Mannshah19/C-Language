#include <stdio.h>

void cubeArray(int *ptr, int n) {
    for(int i = 0; i < n; i++) {
        int cube = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
        
        printf("%d ", cube);

    }


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
    
    printf("Cubes of array elements: ");


    cubeArray(arr, n);
    printf("\n");
    


    return 0;
}
