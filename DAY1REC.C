#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,area,per;
clrscr();
printf("length of rectangle\n");
scanf("%d",&a);
printf("breadth of rectangle\n");
scanf("%d",&p);
 area=a*p;
 printf("Area of rectangle %d \n\n",area);
 per=2*(a+p);
 printf("perimeter of rectangle %d",per);
 getch();
}