#include<stdio.h>
int main() {
	float s,u,t,a;
	printf("Enter values of u,t,a: ");
    scanf("%f%f%f",&u,&t,&a);
	s=(u*t)+(a*t*t)/2.0;
	printf("Distance travelled:%f\n",s);
	return 0;
}
