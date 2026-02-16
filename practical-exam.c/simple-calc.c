#include<stdio.h>

int add(int a, int b) 
{ return a + b; }


int subtract(int a, int b) 

{ return a - b; }

int multiply(int a, int b) 
{ return a * b; }

float divide(int a, int b)
 { return (float)a / b; }


int modulus(int a, int b) 


{ return a % b; }

int main(){
    int a, b, choice;

    printf("Enter value of a: ");
    scanf("%d", &a); 


    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("\nChoose operation:\n");


    printf("1. Addition\n");


    printf("2. Subtraction\n");

    printf("3. Multiplication\n");

    printf("4. Division\n");

    printf("5. Modulus\n");

    printf("Enter choice: ");


    scanf("%d", &choice);

    switch(choice) {
        case 1:


            printf("Result: %d\n", add(a, b));

            break;


        case 2:


            printf("Result: %d\n", subtract(a, b));

            break;

        case 3:
            printf("Result: %d\n", multiply(a, b));

            break;



        case 4:
            printf("Result: %.2f\n", divide(a, b));


            break;


        case 5:

            printf("Result: %d\n", modulus(a, b));
             
            break;
        default:

            printf("Invalid choice\n");
    }

    return 0;
}

