#include<stdio.h>
int main()
{
    int i,n1,n2,sum=0,count=0,avg;
     printf("enter the first number: ");
    scanf("%d",&n1);
     printf("enter the second number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%2==0){
            sum+=i;
            count+=1;
        }
    }
    if(count>0){
    avg=sum/count;
     printf("avg=%d ",avg);
    }
    return 0;
}