
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,c;
clrscr();
printf("the number to show prime numbers upto this is as follows\n");
scanf("%d",&n);
printf("the prime numbers are as \n\n");
for(j=2;j<=n;j++)
{
c=0;
for (i=2;i<=j;i++)
	{
		if(j%i==0)
		{  c++;

		}
 }
 if(c==1)
 {
	printf("%d is prime number \n\n",j);
}

 }
getch();
}