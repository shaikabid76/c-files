#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
float avg;
clrscr();
printf("the number of numbers\n");
scanf("%d",&a);
for(b=0;b<=a;b++)
{
printf("numbers are %d\n\n",b);
}
avg=(a*(a+1))/2;
printf("the average of these numbers is %f \n\n",avg);
getch();
}