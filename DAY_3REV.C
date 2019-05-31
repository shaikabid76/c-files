#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	int i,l=0;
	char z[10]="pathfront",x[10];
	clrscr();
	l=strlen(z);
	x[l]='\0';
	l=l-1;
	for(i=0;z[i]!='\0';i++)
	{
	x[i]=z[l];
	l--;
	}
	printf("the string is as %s",x);
	getch();

}