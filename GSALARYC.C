#include<stdio.h>
#include<conio.h>

main(){
   float bsalary , hra_per , da_per , ta_per;
   float hra , da , ta , gsalary = 0;
   clrscr();
   printf("Enter Base Salary:");
   scanf("%f",&bsalary);
   printf("Enter HRA Percentage:");
   scanf("%f",&hra_per);
   printf("Enter DA Percentage:");
   scanf("%f",&da_per);
   printf("Enter TA Percentage:");
   scanf("%f",&ta_per);
   hra = (bsalary * hra_per)/100;
   da = (bsalary * da_per)/100;
   ta = (bsalary * ta_per)/100;
   gsalary = bsalary + hra + da + ta;
   printf("Gross Salary Rs:%f",gsalary);
   getch();



}