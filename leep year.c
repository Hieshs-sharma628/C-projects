#include<stdio.h>
void main()
{
printf("Enter ther year::");
int a;
scanf("%d",&a);
if(a%4==0)
printf("\n%d is leap year",a);
else
printf("\n%d is not a leap year",a);
}