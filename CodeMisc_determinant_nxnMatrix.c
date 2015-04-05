/*Code only for experienced players*/
/*Gave my whole evening to precisely understand how it works*/
/*Credits: http://study-for-exam.blogspot.in/2013/04/write-c-progrm-to-find-determinant-of.html#.VSGEPiya4qF */
#include<conio.h>
#include<stdio.h>

int a[20][20],m;
int determinant(int f[20][20],int a);
int main()
{
  int i,j;
  printf("\n\nEnter order of matrix : ");
  scanf("%d",&m);
  printf("\nEnter the elements of matrix\n");
  for(i=1;i<=m;i++)
  {
  for(j=1;j<=m;j++)
  {
  printf("a[%d][%d] = ",i,j);
  scanf("%d",&a[i][j]);
  }
  }
  printf("\nThe matrix you entered is:\n");    
  for(i=1;i<=m;i++)
     {
          printf("\n");
          for(j=1;j<=m;j++)
          {     
               printf("\t%d \t",a[i][j]);
          }
     }
  printf("\n \n");
  printf("\n Determinant of the matrix is %d .",determinant(a,m));
  getch();
}

int determinant(int f[20][20],int x)
{
  int pr,c[20],d=0,b[20][20],j,p,q,t;
  if(x==2)
  {
    d=0;
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    return(d);
   }
  else
  {
    for(j=1;j<=x;j++)
    {        
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
             }
         }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     c[j]=pr*determinant(b,x-1);
     }
     for(j=1,d=0;j<=x;j++)
     {
       d=d+(f[1][j]*c[j]);
      }
     return(d);
   }
}


/*This is the code which i used to understand the above code.
I printed the calculations at various points to understand the working of above code.
So here goes the code:

#include<conio.h>
#include<stdio.h>

int a[20][20],m;
int determinant(int f[20][20],int a);
int main()
{
  int i,j;
  printf("\n\nEnter order of matrix : ");
  scanf("%d",&m);
  printf("\nEnter the elements of matrix\n");
  for(i=1;i<=m;i++)
  {
  for(j=1;j<=m;j++)
  {
  printf("a[%d][%d] = ",i,j);
  scanf("%d",&a[i][j]);
  }
  }
  printf("\nThe matrix A is:\n");    
  for(i=1;i<=m;i++)
     {
          printf("\n");
          for(j=1;j<=m;j++)
          {     
               printf("\t%d \t",a[i][j]);
          }
     }
  printf("\n \n");
  printf("\n Determinant of the matrix is %d .",determinant(a,m));
  getch();
}

int determinant(int f[20][20],int x)
{
  int pr,c[20],d=0,b[20][20],j,p,q,t;
  if(x==2)
  {
    d=0;
    for(int i=1;i<=2;i++){
    	for(int j=1;j<=2;j++){
    		printf("f%d%d: %d\t",i,j,f[i][j]);
    	}
    	printf("\n");
    }
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    printf("\t\t\tupbD %d\n",d);
    return(d);
   }
  else
  {
    for(j=1;j<=x;j++)
    {        
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                printf("%d,%d,%d\tb[%d][%d]:%d\tf[%d][%d]:%d\n",j,p,q,r,s,b[r][s],p,q,f[p][q]);
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
        }
    }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     printf("\t\t\tpr: %d\n",pr);
     c[j]=pr*determinant(b,x-1);
     printf("\t\t\t%d\n\t\t\t%d\n",j,c[j]);
     }
     printf("\n\n\n\n");
     for(int i=1;i<=x;i++){
     	for(j=1;j<=x;j++){
     		printf("f%d%d: %d\t",i,j,f[i][j]);
     	}
     	printf("\n");
     }
     for(j=1,d=0;j<=x;j++)
     {
     	d=d+(f[1][j]*c[j]);
   }
   return(d);
}
}

*/
