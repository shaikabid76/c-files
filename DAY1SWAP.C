#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	fflush(stdin);
       scanf("%d %d",&a,&b);
	a=a^b;
	printf("\na=%d",a);
	b=a^b;
	printf("\nb=%d",b);
	a=b^a;
	printf("\na=%d",a);
	getch();
	clrscr();
}