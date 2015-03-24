#include<stdio.h>
#include<conio.h>
int main() {
	int count,i=0,number=3,numLess=2,remainder;
	printf("How many prime numbers? ");
	scanf("%d",&count);
	if(count==0){printf("NOTHING HERE");}
	else if(count==1){printf("1");}
	else if(count==2){printf("1\n2");}
	else{
		printf("1\n2\n");
		count=count-2;
		while(i<count){
			remainder=number%numLess;
			if(remainder==0){
				number++;
				numLess=number-1;
			}
			else{
				numLess--;
				if(numLess==1){
					printf("%d\n",number);
					number++;
					numLess=number-1;
					i++;
				}
			}
		}
	}
}
