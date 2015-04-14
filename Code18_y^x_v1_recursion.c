#include<stdio.h>
#include<conio.h>
int x,y;
int method(int a){
int b;
if(a==0)
return 1;
else
b=y*method(a-1);
return b;
}
void main(){
clrscr();
printf("y: ");
scanf("%d",&y);
printf("x: ");
scanf("%d",&x);
printf("%d ^ %d: %d",y,x,method(x));
getch();
}
