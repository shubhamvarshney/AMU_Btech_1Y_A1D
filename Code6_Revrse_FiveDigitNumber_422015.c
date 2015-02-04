#include<stdio.h>
#include<conio.h>
void main () {
  clrscr();
  int number,digit1,digit2,digit3,digit4,digit5;
  printf("This program will find the reverse of the five digit number given as input\n");
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
  printf("The reverse of the given number is:%d%d%d%d%d",digit5,digit4,digit3,digit2,digit1);
  getch();
}
