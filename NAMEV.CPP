#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char nam[50];
int i,a,c=0;
clrscr();
printf("Enter the name:");
scanf("%s",nam);
a=strlen(nam);
for(i=0;i<a;i++)
{
if(nam[i]=='a'|| nam[i]=='e'|| nam[i]=='i'|| nam[i]=='o'|| nam[i]=='u')
{
c++;
}
printf("\n%c",nam[i]);
}
printf("\n vowels:%d",c);
getch();
}