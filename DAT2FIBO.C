#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,p=1,i,s,n;
clrscr();
printf("range of integers for fibonacci series\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
 s=a+p;
 a=p;
 p=s;
 printf("the fibonaci series is %d \n\n",s);
}
getch();
}

