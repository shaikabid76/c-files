  #include<stdio.h>
#include<conio.h>
void main()
{
int a,i,n,j;
char id[10];
clrscr();
printf("the number of elements in an array\n\n");
scanf("%d",&n);
printf("the array  is as folow\n");
for(i=0;i<n;i++)
 scanf("%d",&id[i]);

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(id[i]>id[j])
		{
			 a=id[i];
			id[i]=id[j];
			id[j]=a;
			}

			  }
		printf("the number is as follows %d \n\n",id[i]);
//printf("the smallest number  is as follows %d\n\n",id[i-1]);
  }
getch();
}
