#include<stdio.h>
int main()
{
 int n,d=0,i;
 printf("Enter the number: ");
 scanf("%d",&n);
 for(i=n;i>0;i/=10)
 {
  d+=1;
 }
 printf("number of digits=%d ",d);
 return 0;
}
