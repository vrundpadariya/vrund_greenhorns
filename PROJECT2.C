#include<stdio.h>
#include<conio.h>


void main(){
float salary;
float HRA;
float DA;
float TA;
float gross;

clrscr();

printf("Enter your salary amount: ");
scanf("%f"&salary);

printf("Enter your HRA  amount: ");
scanf("%f"&HRA);

printf("Enter your DA amount: ");
scanf("%f"&DA);

printf("Enter your TA   amount: ");
scanf("%f"&TA);

gross=salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100)
getch();
}