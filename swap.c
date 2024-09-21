#include<stdio.h>
int swap(int *a,int *b);
int main() {
	int x,y;
	printf("Enter any two values:");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("%d\n%d",x,y);
	return 0;
}
int swap(int *a,int *b) {
	int t=*a;
	*a=*b;
	*b=t;
	return *a,*b;
}
