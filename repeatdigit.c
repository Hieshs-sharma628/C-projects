// program for find the sum of even digits present in input number
#include<stdio.h>
int main()
{
int a[10]={0};
int num,remainder;
printf("Enter a number::");
scanf("%d",&num);
if(num < 0)
num=-num;
while(num != 0)
{
remainder=num%10;
a[remainder]++;
num/=10;
}printf("Repeated digit are ::");
int found=0;
for(int i=0;i<10;i++){
if(a[i] > 1){
printf("%d",i);
found=1;}
printf("\n");}
if(found==0)
printf("none");
return 0;
}