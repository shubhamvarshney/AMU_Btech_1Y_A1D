#include<stdio.h>
#include<conio.h>
int main(){
	int n,r,i,j;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of r:");
	scanf("%d",&r);
	if(n==r){
		printf("%dP%d=1",n,r);
	}
	else if(r==0){
		printf("No permutations");
	}
	else{
		printf("%dP%d=",n,r);
		r=n-r;
		i=n-1;
		j=r-1;
		while(i>1){
			if(j>1){
				r=r*j;
				j--;
			}
			n=n*i;
			i--;
		}
		j=n/r;
		printf("%d",j);
	}
}
