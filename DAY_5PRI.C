#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char id[5]="abcde";
clrscr();
//printf("the number of elements in an array\n\n");
//scanf("%d",n);
//printf("the string is as \n\n");
//scanf("%s",id);

for(i=0;i<5;i++)
{
    for(j=0;j<=i;j++)
	{
	printf("%c",id[i]);
	}
      //	printf("%c",id[i]);

}
// printf("the string is as follows %s",id);
getch();
}
