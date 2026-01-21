#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    float avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("\nAverage of an Array: %f", avg);

    return 0;
}
