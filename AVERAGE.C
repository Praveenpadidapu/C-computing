#include<stdio.h>
int main() {
	float a,b,c,d,e,sum,avg;
	printf("Enter any 5 values:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5.0;
	printf("sum:%f average:%f ",sum,avg);
	return 0;
}
