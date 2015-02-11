#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3,n4,greatestNumber;
clrscr();
printf("This program will find greatest number among four inputed numbers\n");
printf("Input the first number:");
scanf("%d",&n1);
printf("Input the second number:");
scanf("%d",&n2);
printf("Input the third number:");
scanf("%d",&n3);
printf("Input the fourth number:");
scanf("%d",&n4);
greatestNumber=n1>n2?(n1>n3?(n1>n4?n1:n4):(n3>n4?n3:n4)):(n2>n3?(n2>n4?n2:n4):(n3>n4?n3:n4));
printf("%d",greatestNumber);
getch();
}
