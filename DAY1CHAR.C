#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	scanf("%c",&a);
	 if(a>=65&&a<=123)
	 {
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		{
			 printf("IT IS VOWEL\n\n");
		}

	    else
		{
		 printf("it is consonant\n\n");


		}
	}
	if(a>64&&a<91)
	{
	printf("they are uppercase \n");

	 }
	 else if(a>96&&a<123)
	 {
	 printf("they are lowercase");
	 }
	  else if(a>47&&a<57)
	 {
	 printf("they are NUMBER");

	 }
	  else
	 {
	 printf("they are SPECIAL CHARECTER\n");
	 }




	getch();
}
