#include<stdio.h>
int main()
{
 int n,d=0,i,c=0,sum=0;
 printf("Enter the number: ");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
    if(n%i==0)
    {
        sum+=i;
    }
 }
 if(sum==n)
 {
    printf("perfect number");
 }
 else{
    printf("not a perfect number");
 }
 return 0;
}
