#include<stdio.h>
int main() {
	int a,b,c;
	printf("Enter any three values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) {
		if(a>c)
		{
			printf("a is max\n");
		}
		else
		{
			printf("c is max\n");
		}
	}
	else {
		if(b>c)
		{
			printf("b is max\n");
		}
		else
		{
			printf("c is max\n");
		}
	}
	if(a<b) {
		if(a<c)
		{
			printf("a is min\n");
		}
		else
		{
			printf("c is min\n");
		}
	}
	else {
		if(b<c)
		{
			printf("b is min\n");
		}
		else
		{
			printf("c is min\n");
		}
	}
	return 0;
}
