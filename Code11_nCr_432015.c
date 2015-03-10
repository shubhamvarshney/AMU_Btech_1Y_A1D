#include<stdio.h>
#include<conio.h>
int main(){
	int n,r,i,j,value;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of r: ");
	scanf("%d",&r);
	j=n-r;
	if(r==n){
	printf("%dC%d=1",n,r);
	}
	else if(r==0){
	printf("No combinations");
	}
	else{
	printf("%dC%d=",n,r);
	i=n-1;
	while(i>1){			/*This loop calculates n!*/
		n=n*i;
		i--;
	}
	i=r-1;
	while(i>1){			/*This loop claculates r!*/
		r=r*i;
		i--;
	}
	i=j-1;
	while(i>1){			/*This loop claculates (n-r)!*/
		j=j*i;
		i--;
	}
	value=n/(r*j);
	printf("%d",value);
	}
}
