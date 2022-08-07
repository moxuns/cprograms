#include <stdio.h>
#include<math.h>
int main() {
  int n1,n2,i,j,count;
  printf("enter the first number:");
  scanf("%d",&n1);
  printf("enter the second number:");
  scanf("%d",&n2);
  for(i=n1;i<=n2;i++){
    count=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            count+=1;
        }
    }
    if(count==0&&i!=1){
        printf("%d  ",i);
    }
  }
  return 0;
}