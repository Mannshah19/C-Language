#include<stdio.h>
#include<conio.h>

main(){
	int a , b , temp;
	clrscr();
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("Result of (x - y)^2: %f",temp,a,b);
	getch();
}