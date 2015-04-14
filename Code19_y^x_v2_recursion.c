#include<stdio.h>
#include<conio.h>
float w,x,y,z,b;
float method1(float a){
if(a==0){
return 1;
}
w=y*method1(a-1);
return w;
}
float method2(float a){
if(a==0){
return 1;
}
b=y*method2(a+1);
return b;
}
int main(){
clrscr();
printf("Enter the value of y: ");
scanf("%f",&y);
printf("Enter the value of x: ");
scanf("%f",&x);
if(x>0){
printf("%.03f^%.3f= %f",y,x,method1(x));
}
else if(x<0){
z=1/method2(x);
printf("%.03f^%.3f= %f",y,x,z);	
}
getch();
}
