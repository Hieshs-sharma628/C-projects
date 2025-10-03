#include<stdio.h>
int function(int a);
int main()
{
int a,w;
printf("ENTER A NUMBER::");
scanf("%d",&a);
w=function(a);
printf("factorial of the given number is::%d",w);
}
int function(int r)
{
if(r==0)
return 1;
else 
return (r*function(r-1));
}