#include <stdio.h>
int* findLarger(int*, int*);
void main()
{
 int numa=0;
 int numb=0;
 int *result;
 clrscr();
	printf("\n\n Pointer : Show a function returning pointer :\n");
	printf("--------------------------------------------------\n");
   printf(" Input the first number : ");
   scanf("%u", &numa);
   printf(" Input the second  number : ");
   scanf("%u", &numb);

 result=findLarger(&numa, &numb);
printf(" The number %u is larger.  \n\n",*result);
getch();
}

int* findLarger(int *n1, int *n2)
{
 if(*n1 > *n2)
  return n1;
 else
  return n2;
}
