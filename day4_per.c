#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,k=0 ,r;
    char id[10],a[10];
    void per(char a[10],int k,int r);
    printf("enter the string ");
    scanf("%s",id);
    n=strlen (id);
    per(a,k,r);
}
void per(char a[10],int k,int r)
{
    int i;
    if(k==r)
    {
        printf("%s",a);
    }
    else
    {

    for(i=k;i<r;i++)
    {
        t=a[i];
        a[i]=a[k];
        a[k]=t;
        strcpy(id,c)
        per( id,k,r);
    }
}
