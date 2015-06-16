/*Program by: Shubham Varshney
This program is capable to calculate x^y
y may be zero, negative integer, positive integer, negative decimal number or positive decimal number*/

#include<stdio.h>
#include<math.h>
float x,y,z;
float method1(float a){
	if(a==0){
		return 1;
	}
	if(a>0){
		z=x*method1(a-1);
	}
	if(a<0){
		z=x*method1(a+1);
	}
	return z;
}
int main(){
	char response;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	printf("Is the power you are going to enter, a decimal? Y/N\n");
	scanf("%s",&response);
	printf("\nEnter the value of y: ");
	scanf("%f",&y);
	if(response=='N'||response=='n'){
		if(x==0&&y>0){
			printf("\n\n%.02f^%.02f = 0.00",x,y);
		}
		else if(x==0&&y<0){
			printf("\n\n%.02f^%.02f = Not Defined",x,y);
		}
		else if(x==0&&y==0){
			printf("\n\n%.02f^%.02f = Indeterminate Form",x,y);
		}
		else if(y>=0&&x!=0){
			printf("\n\n%.04f^%.02f = %.08f",x,y,method1(y));
		}
		else if(y<0&&x!=0){
			z=1/method1(y);
			printf("\n\n%.04f^%.02f = %.08f",x,y,z);
		}
	}
	if(response=='Y'||response=='y'){
		if(x==0&&y>0){
			printf("\n\n%.02f^%.02f = 0.00",x,y);
		}
		else if(x==0&&y<0){
			printf("\n\n%.02f^%.02f = Not Defined",x,y);
		}
		else if(x==0&&y==0){
			printf("\n\n%.02f^%.02f = Indeterminate Form",x,y);
		}
		if(x!=0&&y>0){
			z=exp(y*log(x));
			printf("\n\n%.04f^%f = %.08f",x,y,z);
		}
		if(x!=0&&y<0){
			y=-1*y;
			z=1/exp(y*log(x));
			printf("\n\n%.04f^%f = %.08f",x,y,z);
		}
	}
}
