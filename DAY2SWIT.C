#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c,un,l=0,s=0;
clrscr();
printf("enter the number for divisability rule\n\n");
scanf("%d",i);
printf("enter the number from 2 to 11 below\n\n");
scanf("%d",&n);
switch(n)
{
     case 2:
		un=n%10;
	 if(un==2)
		printf("the given number  is divisable by 2");

	else
		printf("the number  is not divided by 2");
	break;
	case 3:
	      while(i!>0)
	{
		l=i%10;
		s=s+l;
		i=i/10;
	}
	printf("sum of digits in integer=%d \n\n",s);
	 if(s%3==0)
	{
		printf("the given number %d is divisable by 3",n);

	}
	else
	{
		printf("the number %d is not divided by 3",n);
	}
	break;
	case 4:
		un=n%100;
		 if(un==4)
			printf("the given number  is divisable by 4");

		else
			printf("the number  is not divided by 4");
		break;

	 case 7:
	 if(i%7==0)
		printf("the given number  is divisable by 7");

	else
		printf("the number  is not divided by 7");
	break;


     default :
     {
	printf("u enter the wrong number");

     }
}
getch();
}