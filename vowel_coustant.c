#include<stdio.h>
#include<ctype.h>
int main()
{
char asd[230];
printf("Enter your string::");
fgets(asd,230,stdin);
int i,countv=0,countc=0;
for(i=0;asd[i] != '\0';i++){
char as=asd[i];
if(as=='a'|| as=='e'|| as=='i'|| as=='o'|| as=='u'|| as=='A'|| as=='E' || as=='I' || as=='O'|| as=='U')
{
countv++;
}
else if(isalpha(as))
{
countc++;
}
}
printf("\nNumbers of vowels in -%s- is=%d",asd,countv);
printf("\nNumbers of constant in -%s- is=%d",asd,countc);
return 0;
}