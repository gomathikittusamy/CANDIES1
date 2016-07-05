#include<stdio.h>
#include<conio.h>
void main()
{
int n,c,i=0,r[10];
clrscr();
printf("enter the number of children");
scanf("%d",&n);
printf("enter the rating of the each children");
for(i=0;i<n;i++)
{
scanf("%d",&r[i]);
}
while(r[i]!=0&&i<=9)
{
for(i=0;i<=9;i++)
c=c+r[i];
}
printf("minimum candies%d",c);
getch();
}
