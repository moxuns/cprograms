#include<stdio.h>
int main()
{
    int n1,n2,q,r;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);
    if(n2>n1){
    for(q=n1,r=n2%n1;r>0;n1=q,n2=n1)
    {
        r=n2%n1;
        q=n2/n1;
    }
    }
    else{
        for(q=n2,r=n1%n2;r>0;n2=q,n1=n2)
    {
        r=n1%n2;
        q=n1/n2;
    }
    }
    printf("%d",q);
}