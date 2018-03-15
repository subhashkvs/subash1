#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int c,d,m,n,i,j;
printf("enter the string:");
scanf("%s%s",a,b);
n=strlen(a);
m=strlen(b);
if(n==m)
{
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        c=a[i]-a[j];
        d=b[i]-b[j];
        if(c==d)
        {
          printf("isomorphic");
          break;
        }
        else
        {
          printf("not isomorphic");
          break;
        }
    }
}
}
