//Program for transpose of matries
//Transpose is process to convert rows into columns and columns into rows.
#include<stdio.h>
int main()
{
//Declare two array for store matries elements
int arr[30][30];
//Declare a array for store transpose
int arr2[30][30];
int i,j,row,column;
printf("\nEnter the order of matrix A::");
scanf("%d%d",&row,&column);
//now Take the elements of matries from user
printf("\nEnter the elements of A::");
for(i=0;i<row;i++) 
{
for(j=0;j<column;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("\nWithout transpose matix A is\n");
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}

//Now tranpose of this matrix
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
arr2[j][i]=arr[i][j];
}
}
printf("\n\fTranspose of matries is\n");
for(i=0;i<row;i++) {
for(j=0;j<column;j++)
{
printf("%d\t",arr2[i][j]);
}
printf("\n");
}
return 0; 
}
  