#include<stdio.h>
 int main()
{
int i,num,sum=0;
printf("enter a number:");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
if (num%i==0)
{
printf("the factor is  %d\n",i);
sum=sum+i;
}
printf("the sum is %d",sum);
if (sum==num)

printf("it is a perfect number");
else
printf("it is not a perfect number");
return 0;
}