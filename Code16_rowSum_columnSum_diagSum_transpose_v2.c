#include<stdio.h>
#include<conio.h>
void main(){
int r,c,a[100][100],i,j,n[100][100],e[100][100],eE[100][100];
clrscr();
printf("Number of rows: ");
scanf("%d",&r);
printf("Number of columns: ");
scanf("%d",&c);
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("a%d%d: ",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
n[i][j]=a[i][j];
e[i][j]=a[i][j];
eE[i][j]=a[i][j];
}
}
printf("\nThe matrix you entered is:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(j=0;j<c;j++){
for(i=1;i<r;i++){
a[0][j]=a[0][j]+a[i][j];
}
}
printf("\nThe column vise sum is:\n");
for(j=0;j<c;j++){
printf("%d\t",a[0][j]);
}
for(i=0;i<r;i++){
for(j=1;j<c;j++){
e[i][0]=e[i][0]+e[i][j];
}
}
printf("\n\nThe row wise sum is:\n");
for(i=0;i<r;i++){
printf("%d\n",e[i][0]);
}
if(r==c){
for(i=1,j=1;i<r,j<c;i++,j++){
eE[0][0]=eE[0][0]+eE[i][j];
}
for(i=(r-2),j=0;i>0,j<c;i--,j++){
eE[(r-1)][0]=eE[(r-1)][0]+eE[i][j];
}
printf("\nThe sum of left to right diagonal elements and right to left diagonal elements is %d and %d respectively.",eE[0][0],eE[0][0]);
}
if(r!=c){
printf("\nNo sum of diagonal elements for a matrix other than square matrix.");
}
printf("\n\nThe transpose is:\n");
for(j=0;j<c;j++){
for(i=0;i<r;i++){
printf("%d\t",n[i][j]);
}
printf("\n");
}
getch();
}
