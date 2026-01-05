#include<stdio.h>
#include<conio.h>

main(){
	float C , F = 0;
	clrscr();
	printf("Enter Temperature in Celsius C:");
	scanf("%f",&C);
	F = (9 * C)/5 + 32;
	printf("Temperature in Fahrenheit is: %f",F);
	getch();
}
