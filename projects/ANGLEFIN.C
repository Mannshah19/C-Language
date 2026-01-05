#include<stdio.h>
#include<conio.h>

main(){
   float a1 , a2 , a3 = 0;
   clrscr();
   printf("Enter First Angle:");
   scanf("%f",&a1);
   printf("Enter Second Angle:");
   scanf("%f",&a2);
   a3 = 180 - a1 - a2;
   printf("Third angle of Tiangle is :%f",a3);
   getch();



}