#include<stdio.h>
#include<conio.h>
int main(){
	int number,i;
	printf("Factorial of which number?");
	scanf("%d",&number);
	i=number-1;
	if(number==0){
		printf("0!=1");
	}
	else{
		printf("%d!=",number);
		while(i>=1){
			number=number*i;
			i=i-1;
		}
		printf("%d",number);
	}
}
