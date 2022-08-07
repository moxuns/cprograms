#include<stdio.h>
int main()
{
    int i,n1,n2;
    printf("enter the first number: ");
    scanf("%d",&n1);
     printf("enter the second number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
       printf("%d   ",i);
    }
    return 0;
}