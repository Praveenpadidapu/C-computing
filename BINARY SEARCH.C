#include<stdio.h>
int main()
{  
int a[5]={1,2,3,4,5},low=0,high=4,i,k,f=0,mid;
printf("enter key:");
  scanf("%d",&k);
while(low<=high)
   {
    mid=(low+high)/2;

    if(k==a[mid])
 {
   f=1;
   break;
 }
else if(k<a[mid])
 high=mid-1;
else
 low=mid+1;
   }
if(f==1)
 printf("key is found");
else
 printf("key not found");
}
