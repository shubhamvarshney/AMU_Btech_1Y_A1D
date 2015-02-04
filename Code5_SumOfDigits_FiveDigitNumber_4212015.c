#include<stdio.h>
#include<conio.h>
void main () {
	clrscr();
	int number,digit1,digit2,digit3,digit4,digit5,sumOfDigits;
	printf("This program will find the sum of digits of a input number that can be upto five digits\n");
	printf("Input the number:");
	scanf("%d",&number);
	digit5=number%10;
	number=(number-digit5)/10;
	digit4=number%10;
	number=(number-digit4)/10;
	digit3=number%10;
	number=(number-digit3)/10;
	digit2=number%10;
	digit1=(number-digit2)/10;
	sumOfDigits=digit1+digit2+digit3+digit4+digit5;
	printf("The sum of the digits is:%d",sumOfDigits);
	getch();
}
