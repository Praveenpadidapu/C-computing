
#include<stdio.h>
int main() {
	char s[50],l,i;
	printf("Enter any string:");
	gets(s);
	// with using in builtin functions
	l=strlen(s);
	printf("length of the string is %d\n",l);
	//without using builtin functions
	i=0;
	while(s[i]!=0) {
		i++;
	}
	printf("length of string is %d\n",l);
	return 0;
}
