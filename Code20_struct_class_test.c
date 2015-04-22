#include<stdio.h>
#include<conio.h>
struct emp{
char name[10];
int age;
int salary;
}a[5];
void main(){
int i=0;
clrscr();
printf("Enter the employee details:\n");
for(i=0;i<5;i++){
printf("Employee number: %d\n\n",
(i+1));
printf("Enter name:");
scanf("%s",a[i].name);
printf("Enter age:");
scanf("%d",&a[i].age);
printf("Enter salary:");
scanf("%d",&a[i].salary);
printf("\n");
}
if(a[0].salary>a[1].salary&&a[0].salary>a[2].salary&&a[0].salary>a[3].salary&&a[0].salary>a[4].salary){
printf("\n\nName: %s\nAge: %d\nSalary: %d",a[0].name,a[0].age,a[0].salary);
}
else if(a[1].salary>a[0].salary&&a[1].salary>a[2].salary&&a[1].salary>a[3].salary&&a[1].salary>a[4].salary){
printf("\n\nName: %s\nAge: %d\nSalary: %d",a[1].name,a[1].age,a[1].salary);
}
else if(a[2].salary>a[0].salary&&a[2].salary>a[1].salary&&a[2].salary>a[3].salary&&a[2].salary>a[4].salary){
printf("\n\nName: %s\nAge: %d\nSalary: %d",a[2].name,a[2].age,a[2].salary);
}
else if(a[3].salary>a[0].salary&&a[3].salary>a[2].salary&&a[3].salary>a[1].salary&&a[3].salary>a[4].salary){
printf("\n\nName: %s\nAge: %d\nSalary: %d",a[3].name,a[3].age,a[3].salary);
}
else if(a[4].salary>a[0].salary&&a[4].salary>a[2].salary&&a[4].salary>a[3].salary&&a[4].salary>a[0].salary){
printf("\n\nName: %s\nAge: %d\nSalary: %d",a[4].name,a[4].age,a[4].salary);
}
getch();
}
