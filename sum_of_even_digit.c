// program for find the sum of even digits present in input number
#include<stdio.h>
int main()
{
//tale the input from user
int num,evendight,store_result,sum=0;
printf("Enter a number::");
scanf("%d",&num);
while(num != 0)
{
store_result=num%10;--+
if(store_result%2==0)
{
evendight=store_result;
sum+=evendight;
}
num/=10;
}
printf("The sum of even digit is = %d",sum);
return 0;
}