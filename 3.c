#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,rem,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 n=n/10;
 sum=(sum*10)+rem;
}
printf("%d",sum);
getch();
}
