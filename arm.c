#include<stdio.h>
#include<math.h>
int main()
{
 int n,d,i,c,sum;
 printf("Enter the number: ");
 scanf("%d",&n);
 for(i=n,c=0;i>0;c++,i/=10);
 for(i=n,sum=0;i>0;i/=10)
 {
  d=i%10;
  sum+=pow(d,c);
 }
 if(n==sum){
 printf("armstrog");
 }
 else{
    printf("not armstrong");
 }
 return 0;
}
