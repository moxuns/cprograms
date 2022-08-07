#include<stdio.h>
int main()
{
    int n1,n2,i,prod=1;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        for(i=2;i<=n1;i++)
        {
            if(n1%i==0&&n2%i==0)
            {
                prod*=i;
                 n1/=i;
                n2/=i;
                i--;
            }
        }
    }
    else{
        for(i=2;i<=n2;i++)
        {
            if(n2%i==0&&n1%i==0)
            {
                prod*=i;
                n1/=i;
                n2/=i;
                i--;
            }
        }
    }
    prod*=n1*n2;
    printf("%d  ",prod);
    return 0;
}