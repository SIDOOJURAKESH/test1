#include<stdio.h>
int main()
{
int num,res=0;
printf("enter the number: ");
scanf("%d",&num);
res=prime(num);
if(res==0)
printf("number is prime");
else
printf("number is not prime");
}
int prime(int num)
{
int i;
for(i=2;i<=num/2;i++)
{
if(num%2!=0)
continue;
else return 1;
}
return 0;
}
