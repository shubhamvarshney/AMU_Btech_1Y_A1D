#include<stdio.h>
#include<conio.h>
void main () {
	clrscr();
	printf("This program will note the marks of five subjects and find the average and percentage\n");
	float maths,science,hindi,english,SST,average,percentage,maxMaths,maxScience,maxHindi,maxEnglish,maxSST;
	char answer;
	printf("Input the marks in maths:");
	scanf("%f",&maths);
	printf("Input the marks in science:");
	scanf("%f",&science);
	printf("Input the marks in hindi:");
	scanf("%f",&hindi);
	printf("Input the marks in english:");
	scanf("%f",&english);
	printf("Input the marks in SST:");
	scanf("%f",&SST);
	average=(maths+science+hindi+english+SST)/5;
	printf("The average of the above marks is: %f",average);
	printf("\nInput the maximum marks in maths:");
	scanf("%f",&maxMaths);
	printf("Input the maximum marks in science:");
	scanf("%f",&maxScience);
	printf("Input the maximum marks in hindi:");
	scanf("%f",&maxHindi);
	printf("Input the maximum marks in english:");
	scanf("%f",&maxEnglish);
	printf("Input the maximum marks in SST:");
	scanf("%f",&maxSST);
	percentage=((average*500)/(maxMaths+maxScience+maxHindi+maxEnglish+maxSST));
	printf("The percentage is:%f",percentage);
	getch();
}
