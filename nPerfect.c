#include<stdio.h>
int main()
{
 int n1,n2,d=0,i,j,c=0,sum;
 printf("Enter the first number: ");
 scanf("%d",&n1);
 printf("Enter the second number: ");
 scanf("%d",&n2);
 for(i=n1;i<=n2;i++)
 {
    sum=0;
 for(j=1;j<=i/2;j++)
 {
    if(i%j==0)
    {
        sum+=j;
    }
 }
 if(sum==i)
 {
    printf("%d  ",i);
 }
 
 }
 return 0;
}
