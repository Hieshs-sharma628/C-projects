#include<stdio.h>
int function(int a,int s);
int main(){
int aray[2][2];
int s,l,i;
printf("\nARRAY OF 2D");
printf("\nEnter the elements::");
for(int i=0;i<2;i++){
  for(int l=0;l<2;l++){
  scanf("%d",&aray[i][l]);
  printf("Elements are on index %d%d::%d\n",i,l,aray[i][l]);
  }
}
return 0;
}