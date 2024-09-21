#include<stdio.h>
int main() {
 int a[10][10],b[10][10],c[10][10];
 int m,n,p,q,i,j;
 printf("Enter the size of matrix A:");
 scanf("%d%d",&m,&n);
 printf("Enter the size of the matrix B:");
 scanf("%d%d",&p,&q);
 if(m==p&&n==q)
 {
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("b[%d][%d]=",i,j);
    scanf("%d",&b[i][j]);
   }
  }
  printf("Addition of given matrices is\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
    printf("c[%d][%d]=%d\n",i,j,c[i][j]);
   }
  }
 }
 else
 {
 printf("Addition of matrix is impossible\n");
 }
 return 0;
}
