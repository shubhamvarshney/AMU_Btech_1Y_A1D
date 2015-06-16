/*Program by Shubham Varshney
This program finds the reverse of the string entered*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string: ");
	gets(str);
	printf("The reversed\n string is:       ");
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
