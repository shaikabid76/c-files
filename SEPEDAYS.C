void main()
{
long t;
int mo,we,da,y=365,m=30,w=7;
clrscr();
printf("nuber of days\n");
scanf("%lu",&t);
printf("number of years=%lu\n",t/y);
mo=t%y;
printf("number of months=%d\n",mo/m);
we=mo/m;
printf("number of weeks=%d\n",we/w);
da=we/w;
 printf("number of days=%d\n",da);
  getch();
}