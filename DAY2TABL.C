#include<stdio.h>
#include<conio.h>
void main()
{
int ta,li,c=0,i;
clrscr();
printf("the tables numbers is \n");
scanf("%d",&ta);
printf("the range of table\n");
scanf("%d",&li);
printf("%d %d %d %d\n\n",li++,--li,++li,li--);
printf("the table is \n\n");
for(i=0;i<=li;i++)
{
	c=i*li;
	printf("%d*%d=%d\n\n",i,li,c);
}
getch();
}
