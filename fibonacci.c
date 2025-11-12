#include<stdio.h>
int main()
{
//fibonacci series
int term;
printf("Enter a number of terms::");
scanf("%d",&term);
int a=1,s=0,as=0,num=3;
printf("fibonacci series is::%d %d",a,s);
do 
{
as=a+s;
printf("%d",as);
printf("\n");
a=s;
s=as;
num=num+1;
}while(num<=term);
return 0;
}
    