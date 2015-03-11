#include<stdio.h>
#include<conio.h>
int main(){
	int n,r,i,j,k,l;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of r:");
	scanf("%d",&r);
	if(n==r){
		printf("%dC%d=1",n,r);
	}
	else if(r==0){
		printf("No combinations");
	}
	else{
		printf("%dC%d=",n,r);
		k=r-1;
		i=n-1;
		l=n-r;
		j=l-1;
		while(i>1){
			if(k>1){
				r=r*k;
				k--;
			}
			if(j>1){
				l=l*j;
				j--;
			}
			n=n*i;
			i--;
		}
		j=n/(r*l);
		printf("%d",j);
	}
}
