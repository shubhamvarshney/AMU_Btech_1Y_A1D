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
	printf("%dP%d=1",n,r);
	}
	else if(r==0){
	printf("No permutations");
	}
	else{
	printf("%dP%d=",n,r);
	i=n-1;
	while(i>1){	
		n=n*i;
		i--;
	}
	i=j-1;
	while(i>1){
		j=j*i;
		i--;
	}
	value=n/j;
	printf("%d",value);
	}
}
