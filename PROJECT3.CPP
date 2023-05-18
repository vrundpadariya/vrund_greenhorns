#include<stdio.h>
#include<conio.h>

void main(){
float a;
float b;
float c;

clrscr();

printf("Enter the value of angle A:");
scanf("%f",&a);

printf("Enter the value of angle B:");
scanf("%f",&b);

c=180-(a+b);

printf("the answer of angle c: %f", c);


getch();
}