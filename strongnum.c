//find strong number 
/*strong number is a number whose sum 
of factorial of each digit =the same number 
example 145->
1!+4!+5!=145"*/
#include<stdio.h>
//use recursion for find factorial 
int fact(int);
int main()
{
int q,r,e,k, ap=0;
// take the input
printf("Enter a number:");
scanf("%d",&q);
//store the input number 
int wq=q;
while(q!=0)
{
//for take digits one by one
r=q%10;
//call function for doing factorial 
e=fact(r);
//store the result of factorial in ap 
ap+=e;
//for use the remaining digits
q/=10;
}
// print factorial of num
printf("\nresult = %d",ap);
// result of strong number 
if(ap==wq)
printf("\n%d is a strong number",wq);
else
printf("\n%d is a not strong number",wq);
return 0;
}
//function defination 
int fact(int n)
{
if(n==1)
return 1;
else
return (n*fact(n-1));
};