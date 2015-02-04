#include<stdio.h>
#include<conio.h>
void main () {
	clrscr();
	int num1,num2,num3;
	printf("This program will swap two integers using only two variables\n");
	printf("Input the first number:");
	scanf("%d",&num1);
	printf("Input the second number:");
	scanf("%d",&num2);
	num3=num2;
	num2=num1;
	num1=num3;
	printf("The swapped value of first number is:%d",num1);
	printf("\nThe swapped value of second number is:%d",num2);
	getch();
}
