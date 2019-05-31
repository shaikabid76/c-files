#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("the a value is\n");
scanf("%d",&a);
printf("the b value is\n");
scanf("%d",&b);
printf("the c value is\n");
scanf("%d",&c);
if(a>b&&a>c)
{
	printf("a is greater\n");
}
else if(b>c)
{
	printf("b is greater\n");
}
else
{
	printf("c is greater\n");
}
getch();
 }