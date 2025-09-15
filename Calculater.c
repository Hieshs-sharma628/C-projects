#include<stdio.h> 
#include<conio.h>
int main()
{
char q;
int a,s,k=0;
printf("Enter the oppreater(+,-,*,/)::");
scanf("%c",&q);
printf("\nenter the 1st value");
scanf("%d",&a);
printf("\nenter the 2nd value");
scanf("%d",&s);
switch(q){
case'+':
k=a+s;
printf("%d",k);
break;
case'-':
k=a-s;
printf("%d",k);
break;
case'*':
k=a*s;
printf("%d",k);
break;
case'/':
k=a/s;
printf("%d",k);
break;
default:
printf("%c is not valid",q);
}
 getch();
 }
  