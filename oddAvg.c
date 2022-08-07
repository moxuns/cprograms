#include<stdio.h>
int main()
{
    int i,n,sum=0,count=0,avg;
     printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
      sum+=i;
      count+=1;
    }
    if(count>0){
    avg=sum/count;
     printf("avg=%d ",avg);
    }
    return 0;
}