#include<stdio.h>
int tranpose(int a[10][10],int row,int col);
int main() {
	int row,col,i,j;
	printf("number of rows and columns:");
	scanf("%d%d",&row,&col);
	int a[row][col];
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
	 	 printf("a[%d][%d]=",i+1,j+1);
	 	 scanf("%d",&a[i][j]);
	    }
	}
	transpose(a,row,col);
	return 0;
}
int tranpose(int a[10][10],int row,int col) {
	int b[10][10],i,j;
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
	 	 b[j][i]=a[i][j];
	    }
	}
	for(i=0;i<col;i++) {
		for(j=0;j<row;j++) {
		 printf("%d\t",b[i][j]);
        }
        printf("\n");
	}
}
