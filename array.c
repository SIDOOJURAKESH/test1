#include<stdio.h>
int main()
{
int array[4],i,sum=0;
for(i=0;i<4;i++)
{
printf("enter the value for array[%d]: ",i);
scanf("%d",&array[i]);

sum=sum+array[i];
}
printf("sum=%d",sum);
  printf("thanku");
return 0;
}
