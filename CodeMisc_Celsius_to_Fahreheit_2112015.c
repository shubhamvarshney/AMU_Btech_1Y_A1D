#include<stdio.h>
#include<conio.h>
void main () {
	float celsius,fahrenheit;
	clrscr();
	printf("This program will convert temperature from celsius to fahrenheit\n");
	printf("Input the celsius temperature:");
	scanf("%f",&celsius);
	fahrenheit=((9*celsius)/5)+32;
	printf("The temperature in fahrenheit is:%f",fahrenheit);
	getch();
}
