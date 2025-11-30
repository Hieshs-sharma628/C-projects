// program for PRINT TRIANGLE
#include<stdio.h>
int main()
{
int num;
printf("Enter numbers of row::");
scanf("%d",&num);
int i,j;
for(i=0;i<num;i++)
{
 for(j=0;j<=num-i-1;j++)
    {     
    printf(" ");
    }
 for(j=1;j<=2*i+1;j++)
    {     
    printf("*");
    }
    printf("\n");      
 }
return 0;
}    