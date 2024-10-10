//fabinocci series


#include<stdio.h>
int main() {
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
			int x=0,y=1;
	printf("0\t 1\t");
	int t=0;
	while(t<n) {
		t=x+y;
		printf("%d\t",t);
		x=y;
		y=t;
	}
	
	return 0;
}
