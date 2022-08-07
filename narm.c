#include <stdio.h>
#include<math.h>
int main() {
  int n1,n2,i,j,c,d,sum;
  printf("enter the first number:");
  scanf("%d",&n1);
  printf("enter the second number:");
  scanf("%d",&n2);
  for(i=n1;i<=n2;i++){
    c=0;
    sum=0;
  for(j=i;j>0;j/=10)
    {
      c++;
    }
  for(j=i;j>0;j/=10)
    {
      d=j%10;
      sum+=pow(d,c);
    }
      if(sum==i)
      {
        printf("%d ",i);
      }
  }
  return 0;
}