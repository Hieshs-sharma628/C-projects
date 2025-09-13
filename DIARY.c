#include<stdio.h>
int main()
{ printf("WELCOME TO YOUR DIARY");
char a[40];
printf("\nMaths::");
fgets(a,40,stdin);
char s[40];
printf("Prog.C::");
fgets(s,40,stdin);
char d[40];
printf("English:");
fgets(d,40,stdin);
char f[40];
printf("Com .ar::");
fgets(f,40,stdin);
char g[40];
printf("E.V.S::");
fgets(g,40,stdin);
printf("\n____HOMEWORK DIARY____");
printf("\nMATHES:-");puts(a);
printf("\nPROG,C:-");puts(s);
printf("\nENGLISH:-");puts(d);
printf("\nCOM.AR:-");puts(f);
printf("\nE.V.S:-");puts(g);
return 0;
}