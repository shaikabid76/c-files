#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	int i;
	char z[10],x[10];
	clrscr();
	printf("enter the string\n\n");
	scanf("%s",z);
	for(i=0;z[i]!='\0';i++)
	{
	if(z[i]=='a'&&z[i]=='z')
	{
		x[i]=z[i]+3;
		printf("the string is as follows %s \n\n",x);

	 }
	  }
	       //	printf("the string is as follows %s \n\n",x);
	getch();
	}