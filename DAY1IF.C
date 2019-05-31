#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,m1,m2,m3,m4,m5,total=0,avg,per;
	clrscr();
	printf("enter number of 5 subjects");
	printf("maximum number of marks=%d",5*100);
	printf("marks for each subject\n \n");
	printf("marks in m1 subject \n\n",m1);
	scanf("%d",&m1);
	printf("marks in m2 subject \n\n",m2);
	scanf("%d",&m2);
	printf("marks in m3 subject \n\n",m3);
	scanf("%d",&m3);
	printf("marks in m4 subject \n\n",m4);
	scanf("%d",&m4);
	printf("marks in m5 subject \n\n",m5);
	scanf("%d",&m5);
	 total=m1+m2+m3+m4+m5;

	printf("totla number of marks in subject %d \n\n",total);
	avg=total/n;
	printf("average number of marks in subject %d \n\n",avg);

	if(total>=400&&total<=500)
	{
	 printf("he got o grade");
	 printf("\npercenage of marks in subject %d\n\n",per);

	}


       else if(total>=300&&total<=399)
       {
	 printf("he got e  grade");
	 printf("percenage of marks in subject %d\n\n",per);

	}

       else if(total>200&&total<299)
	{
	 printf("he got a grade");
	 printf("percenage of marks in subject %d\n\n",per);
       }
	else
	{
	 printf("he had failed");
	 printf("percenage of marks in subject %d\n\n",per);

	}
	getch();
}
