//Program for addition of matries
#include<stdio.h> 
int main()
{
//Declare two array for store matries elements
int arr[30][30],arr2[30][30];
//Declare a array for store matrix addtion
int arr3[30][30];
int i,j,row,column,row2,column2;
printf("\nEnter the order of matrix A::");
scanf("%d%d",&row,&column);
printf("\nEnter the odderr of matrix B::");
scanf("%d%d",&row2,&column2);
//Check the order of both matries are smae if not addtion is not possible!!
if(row!=row2 && column!=column2)
{
printf("\nAddtion of matries is not possible!!!");
exit(1);
}
//now Take the elements of matries from user
printf("\nEnter the elements of A::");
for(i=0;i<row;i++) 
{
for(j=0;j<column;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("\nEnter the elements of B::");
for(i=0;i<row2;i++) 
{
for(j=0;j<column2;j++)
{
scanf("%d",&arr2[i][j]);
}
}
//Now add these two matries
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
arr3[i][j]=arr[i][j] + arr2[i][j];
}
}
printf("\nAddtion of matries is\n");
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
printf("\nProcess of addtion\n");
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
printf("\n%d\t + %d\t =%d\t",arr[i][j],arr2[i][j],arr3[i][j]);
}
printf(" \n");
}
return 0; 
}
  