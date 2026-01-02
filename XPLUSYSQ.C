#include<stdio.h>
#include<conio.h>

main(){
	float x , y ,result;
	clrscr();
	printf("Enter value of x:");
	scanf("%f",&x);
	printf("Enter value of y:");
	scanf("%f",&y);
	result = (x + y) * (x + y);
	printf("Result of (x + y)^2: %f",result);
	getch();




}