
#include<stdio.h>
#include<conio.h>
void main()
{
char id[10];
int a,v,s;
clrscr();
printf("given employe id here\n");
scanf("%s",&id);
printf("working hours\n");
scanf("%d",&a);
printf("salary for working hours\n");
scanf("%d",&v);
s=v*a;
printf("\n\nemploye id=%s\n\nsalary=%d\n\n",id,s);
getch();
}
