#include<stdio.h>
int main()
{
int num,orignalnum,endnumber,reverse=0;
//take the input from user 
printf("Enter your number::");
scanf("%d",&num);
//store the input in orginalnum variable
orignalnum=num;
while(num != 0)
{
//to find the end number of this
endnumber=num%10;
//for reverse the nnumber logic is 
reverse=reverse*10+endnumber;
num /= 10;
}
//print result 
if(reverse==orignalnum)
printf("%d is a POLINDROME number",orignalnum);
else
printf("%d is  not a POLINDROME number",orignalnum);
return 0;
} 