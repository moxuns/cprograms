#include<stdio.h>
int main()
{
    int n,i,j,sum=0,count=0,avg,temp,a[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enetr the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum+=a[i];
            count+=1;
        }
    }
    if(count>0)
    {
        avg=sum/count;
        printf("average of even=%d \n",avg);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("largest odd number=%d ",a[i]);
            break;
        }
    }
    return 0;
}