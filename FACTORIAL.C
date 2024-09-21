#include<stdio.h>
int fact(int);
int main() {
 int n;
 
 scanf("%d",&n);
 int fact(int n);
 printf("Factorial of n=%d",fact(n));
 return 0;
}
int fact(int n)
{
 int fact=1,i;
 for(i=1;i<=n;i++) 
 {
  fact=fact*i;
 }
 return fact;
}
 
 
