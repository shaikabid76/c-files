#include<stdio.h>
#include<string.h>
#include<conio.h>
void main( )
{
 int i,p,t;
 char a1[50],a2[50],c[50];
 clrscr();
 printf("\nEnter the string\n");
 scanf("%s",a1);

  printf("\n enter the string to be added\n\n");
  scanf("%s",a2);

   printf("\nEnter the position to be added\n\n");
 scanf("%d",&p);

  for(i=0;i<p;i++)
  {
	 c[i]=a1[i];
  }
  c[i]='\0';
   t=p;
  for(i=0;a2[i]!='\0';i++)
  {
	c[p]=a2[i];
	p++;

   }
   for(i=t;a1[i]!='\0';i++)
  {
	c[p]=a1[i];
	p++;

   }
   c[p]='\0';
     printf("the srting is as follows %s ",c);

     getch();
     }
