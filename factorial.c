#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("factorial of %d=%d\n",i,fact);
}
return 0;
}
