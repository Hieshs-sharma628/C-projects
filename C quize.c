#include<stdio.h>
#include<conio.h>
int main()
{
 printf("-------------------WELCOM TO C QUIZ----------------------");
 printf("\n\nYour points start from 0 and total poits is 5*10=50 ");
 int a,s,d,f,e;
 int q=0;
 printf("\n\n\nWho found the C language\n1 Dany sizer\n2 Dtuffen\n3 Denis ritchie\nenter your nomber-:");
 scanf("%d",&a);
 printf("\nWhere is the C language founded\n1 U.k\n2 USA\n3 GREENLAND\nenter your nomber-:");
 scanf("%d",&s);
 printf("\nIn which lab the C language develped ?\n1 Dany lab\n2 at&a lab\n3 Bell lab\nenter your nomber-:");
 scanf("%d",&d);
 printf("\nIn which year denis ritchie found the C language\n1 1970\n2 1971\n3 1972\nenter your nomber-:");
 scanf("%d",&f);
 printf("\nscanf is used for ____ in C language\n1 take input\n2 output\n3 run program\nenter your nomber-:");
 scanf("%d",&e);
 if(a==3)
 {
 q+=10;
 }
 else
 {
printf("\n\n1st is wronge  and right is:: Denis ritchie");
 }
  if(s==2)
 {
 q+=10;
 }
 else
 {
printf("\n\n2nd is wronge and right is :: USA");
 }
 if(d==3)
 {
 q+=10;
 }
 else
 {
printf("\n\n3rd is wronge and right is :: Bell lab");
 }
 if(f==2)
 {
 q+=10;
 }
 else
 {
printf("\n\n4th is wronge and right is :: 1971");
 }
  if(e==1)
 {
 q+=10;
 }
 else
 {
printf("\n\n5th is wronge  and right is:: take input");
 }
printf("\n\n\nYour points is:::%d",q);
switch(q)
{
 case 50:
 printf("\nExcelent😎😎");
 break;
 case 40:
 printf("\nGood😊😊");
 break;
 case 30:
 printf("\nAvrage😶😶");
 break;
 case 20:
 printf("\nBad😒😒");
 break;
 default:
 printf("\nVery bad😡😡😡");
 }
 getch();  
}