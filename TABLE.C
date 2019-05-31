#include<stdio.h>
#include<conio.h>
void main()
{
int ta,li,c=0,i;
clrscr();
printf("the number of tables\n");
scanf("%d",&ta);
printf("the limit of tables\n");
scanf("%d",&li);
printf("the table is \n\n");
for(i=0;i<=li;i++)
{
	c=i+li;
	printf("%d+%d=%d\n\n",i,li,c);
}
getch();
}