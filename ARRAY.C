#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,t,f=0;
clrscr();
printf("enter array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter no to be search");
scanf("%d",&t);
for(i=0;i<n;i++)
{
if(a[i]==t)
{
f=f+1;
}
}
printf("\no occurs is %d",f);
getch();

}}