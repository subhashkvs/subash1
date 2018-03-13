 #include<stdio.h>
 #include<string.h>
void main()
{
    int fact=1,i,a;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
   
