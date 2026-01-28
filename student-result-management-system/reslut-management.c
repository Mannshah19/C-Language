#include<stdio.h>

int main() {

    // Variable declarations
    // Variable declarations
    char name[50];
    int roll;
    float sub1, sub2, sub3, total , per;
    
    // Input student details
    printf("Enter student name: "); 
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3); 

    // Calculate total and percentage
    // Calculate total and percentage
    total = sub1 + sub2 + sub3;
    per = (total / 300) * 100;

    // Display student result
    printf("\n\nStudent Name: %s \nRoll Number: %d \nTotal: %.2f \nPercentage: %.2f", name, roll, total, per);

    // Determine grade based on percentage
    // Determine grade based on percentage
    if (per >= 75) {
        printf("\nResult: Pass");
        printf("\nGrade: A");
    } else if (per >= 60) {
        printf("\nResult: Pass");
        printf("\nGrade: B");
    } else if (per >= 40) {
        printf("\nResult: Pass");
        printf("\nGrade: C");
    } else {
        printf("\nResult: Fail");
        printf("\nGrade: F");
    }

    return 0;
}