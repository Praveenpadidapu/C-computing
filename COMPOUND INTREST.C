#include<stdio.h>
int main() {
	float c,p,r,n,t,x,y;
	printf("Enter values of p,r,n,t:");
	scanf("%f%f%f%f",&p,&r,&n,&t);
	x=1+(r/n);
	y=r*t;
	c=p*pow(x,y);
	printf("compound interest:%f",c);
	return 0;
}
