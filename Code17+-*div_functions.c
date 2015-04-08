#include<stdio.h>
#include<conio.h>
int a,b,r;
void addition();
void subtraction(int *x,int *y);
void multiplication(int x,int y);
void divison(int x,int y);
void main(){
clrscr();
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("\nWhich opertaion do you want to be done?\nAddition (1)\nSubtraction (2)\nMultiplication (3)\nDivison (4)\nAll (5)\n\nYour response: ");
scanf("%d",&r);
switch(r){
case 1:
addition();
break;
case 2:
subtraction(&a,&b);
break;
case 3:
multiplication(a,b);
break;
case 4:
divison(a,b);
break;
case 5:
addition();
subtraction(&a,&b);
multiplication(a,b);
divison(a,b);
break;
default:
printf("Please check your input");
break;
}
getch();
}
void addition(){
int d=a+b;
printf("\n%d + %d = %d",a,b,d);
}
void subtraction(int *x,int *y){
int d=*x-(*y);
printf("\n%d - %d = %d",*x,*y,d);
}
void multiplication(int x,int y){
int d=x*y;
printf("\n%d * %d = %d",x,y,d);
}
void divison(int x,int y){
int d=x/y;
printf("\n%d / %d = %d",x,y,d);
}
