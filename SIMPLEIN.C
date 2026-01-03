#include<stdio.h>
#include<conio.h>

main(){
	float p,r,n,interest = 0;
	clrscr();
	printf("Enter Value of p:");
	scanf("%f",&p);
	printf("Enter Value of r:");
	scanf("%f",&r);
	printf("Enter Value of n:");
	scanf("%f",&n);
	interest = p * r * n / 100;
	printf("Simple Interest is:%f",interest);
	getch();



}