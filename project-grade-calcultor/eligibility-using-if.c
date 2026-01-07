#include <stdio.h>
#include<conio.h>

int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);


    if (score >= 90)
        grade = 'A';


    else if (score >= 80)
        grade = 'B';

    else if (score >= 70)
        grade = 'C';

    else if (score >= 60)
        grade = 'D';

    else
        grade = 'F';

    printf("Your grade is %c ", grade);

    switch (grade)
    {
        case 'A':

            printf("Excellent work!");
            break;

        case 'B':

            printf("Well done");
            break;

        case 'C':

            printf("Good job");
            break;

        case 'D':

            printf("You passed, but you could do better");
            break;

        case 'F':

            printf("Sorry, you failed");
            break;

        default:
            printf("Invalid grade");
    }


if (grade >= 'A' && grade <= 'D')


    printf(" Congratulations! You are eligible for the next level.");


else


    printf(" Please try again next time.");



    return 0;
}
