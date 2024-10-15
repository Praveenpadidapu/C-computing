

// prime number
#include<stdio.h>
int main() {
int i,n,f;
printf("n=");
scanf("%d",&n);
i=1;
f=0;
while(i<=n) {
if (n%i==0)
f++;
i++;
}
if (f==2)
printf("n=%d is a prime number\n",n);
else 
printf("n=%d is a composite number\n",n);
return 0;
}
