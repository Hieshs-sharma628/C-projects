#include<stdio.h>
struct idcard{
char name[34];
char clas[32];
int roll;
int dob;
char father[54];
int cont;
char address[345];
}a;
int main()
{
printf("let's ccreate a student id card");
printf("\nEnter the student name::");
scanf("%s",&a.name);
printf("\nEnter the student class::");
scanf("%s",&a.clas);
printf("\nEnter the student roll number::");
scanf("%d",&a.roll);
printf("\nEnter the student date of birth::");
scanf("%d",&a.dob);
printf("\nEnter the student Father's name::");
scanf("%s",&a.father);
printf("\nEnter the student contact number::");
scanf("%s",&a.cont);
printf("\nEnter the student address::");
scanf("%s",&a.address);
printf("\n\t|Student Id card\nName:%s\nClass:%s\nRoll no.:%d\nD.O.B.:%d\nFather's name:%s\nContact no.:%d\nAddress:%s",a.name,a.clas,a.roll,a.dob,a.father,a.cont,a.address);
return 0;
}