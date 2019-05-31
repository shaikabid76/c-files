#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,p,l1,l2;
 char a[15]="pathfront",x[5]="bgr",c[10];
 clrscr();
  printf("\npos to be ins\n\n");
  scanf("%d",&p);
 l1=strlen(a);
 printf("the length of first string is as  %d \n\n",l1);
 l2=strlen(x);
   printf("the length of second string is as  %d \n\n",l2);

  for(i=l1;i>=p;i--)
  {

		 a[p]=x[i];
		 while(i==p)
		 printf("%s\n",c);


	///
	 }
	     printf("print the string as %s\n\n",c);
  for(i=0;c[i]!='\0';i++)
  printf("%d",c);
  printf("\n\n");
  getch();
  }