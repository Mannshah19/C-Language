#include <stdio.h>


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, a, b;

    while (1)   
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Program exited.");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice)
        {
            case 1:
                printf("Addition of %d and %d is %d", a, b, add(a, b));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d", a, b, sub(a, b));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d", a, b, mul(a, b));
                break;

            case 4:
                if (b != 0)
                    printf("Division of %d and %d is %d", a, b, div(a, b));
                else
                    printf("Division by zero not allowed");
                break;

            case 5:
                if (b != 0)
                    printf("Modulus of %d and %d is %d", a, b, mod(a, b));
                else
                    printf("Modulus by zero not allowed");
                break;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}



