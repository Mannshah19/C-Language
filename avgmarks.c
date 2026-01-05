#include<stdio.h>
#include<conio.h>

int main() {

    int maths,sci,eng;
    float avg;
    printf("Enter the Marks for Maths:");
    scanf("%d",&maths);
    printf("Enter the Marks for Science:");
    scanf("%d",&sci);
    printf("Enter the Marks for English:");
    scanf("%d",&eng);
    avg=(maths+sci+eng)/3;

    printf("Average Marks:%f",avg);
    return 0;

}