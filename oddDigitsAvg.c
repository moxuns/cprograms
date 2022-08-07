#include<stdio.h>
int main()
{
 int n,i,d,sum=0,count=0,avg;
 printf("Enter the number: ");
 scanf("%d",&n);
 for(i=n;i>0;i/=10)
 {
  d=i%10;
  if(d%2==1){
   sum+=d;
   count+=1;
  }
 }
 if(count>0){
    avg=sum/count;
     printf("avg=%d ",avg);
 }
 return 0;
}
