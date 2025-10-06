#include<stdio.h>
int main()
{
int a,flag=0;
printf("ENTER A NUMBER::");
scanf("%d",&a);
for(int i=2;i<=a-1;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("Given number is not prime number");
else
printf("Given number is a prime number");
return 0;
}