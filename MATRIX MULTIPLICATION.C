#include<stdio.h>
int main() 
{
   int  i, j, k;
   int m, n, p, q;
   printf("enter the size of first matrix");
   scanf("%d%d", &m, &n);
   int a[m][n] ;
   printf("enter the %d elements in first matrix\n", m*n);
    for(i=0;i<m;i++){
       for(j=0;j<n;j++){
          scanf("%d", &a[i][j]);
     }
   }
   printf("enter the size of second matrix");
   scanf("%d%d", &p, &q);
   int b[p][q] ;
   printf("enter the %d elements in second matrix\n", p*q);
   for(i=0;i<p;i++){
       for(j=0;j<q;j++) {
         scanf("%d",&b[i][j] );
     } 
   } 
   int c[m][q] ;
   if(n==p) {
      for(i=0;i<m;i++){
          for(j=0;j<q;j++){
             c[i][j] =0;
             for(k=0;k<m;k++) {
                c[i][j] =c[i][j]+a[i][k]*b[k][j];
     } 
       }
         }
           }
  
     else{
      printf("matrix multiplication is not possible");
      } 
     for(i=0;i<m;i++){
         for(j=0;j<q;j++){ 
           printf("%d\t", c[i][j] );
      }
          printf("\n");
      }
           
  return 0;
  } 
