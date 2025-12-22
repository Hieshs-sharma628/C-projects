//Program for multipiication of matries
#include<stdio.h> 
int main()
{
//Declare two array for store matries elements
int arr[30][30],arr2[30][30];
//Declare a array for store matries multiplication result
int arr3[30][30];
int i,j,row,column,row2,column2;
printf("\nEnter the order of matrix A::");
scanf("%d%d",&row,&column);
printf("\nEnter the odderr of matrix B::");
scanf("%d%d",&row2,&column2);
//Check the if  number of coulmns of firat matrix is equal to second's rows if not multiplication is not possible is not possible!!
if(column!=row2)
{
printf("\nMultiplication of matries is not possible!!!");
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
for(j=0;j<column2;j++){
scanf("%d",&arr2[i][j]);
}
}
//Now Multiplication two matries
for(i=0;i<row;i++)
{
for(j=0;j<column2;j++)
{
arr3[i][j]=0;
for(int a=0;a<column;a++){
arr3[i][j]=arr[i][a] * arr2[a][j] + arr3[i][j];
}
}
}
printf("\n Multiplication of matries is\n");
for(i=0;i<row;i++)
{ 
for(j=0;j<column2;j++)
{
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
printf("\nProcess of multiplication:\n");
for(i = 0; i < row; i++)
{
for(j = 0; j < column2; j++)
{  
printf("\narr3[%d][%d] = ", i, j);
for(int ab = 0; ab < column; ab++)
{   
printf("%d*%d", arr[i][ab], arr2[ab][j]);
if(ab < column - 1)
printf(" + ");
}
printf(" = %d\n", arr3[i][j]);
}
}
return 0; 
}