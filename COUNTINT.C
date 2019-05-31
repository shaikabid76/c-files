#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0;
clrscr();
printf("the value of the given integer is as below\n");
scanf("%d",&n);
do
{
n=n/10;
c=c+1;
}
while(n>0);
printf("Number of digits in an integer=%d",c);
getch();
}
