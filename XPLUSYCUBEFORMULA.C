#include<stdio.h>
#include<conio.h>

main(){
	float x , y , sum , result;
	clrscr();
	printf("Enter value of x:");
	scanf("%f",&x);
	printf("Enter value of y:");
	scanf("%f",&y);
	sum = x + y;
	result = sum * sum * sum;
	printf("Result of (x + y)^3: %f",result);
	getch();
}