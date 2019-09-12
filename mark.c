#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
printf("enter a mark");
scanf("%d",&a);
printf("enter b mark");
scanf("%d",&b);
printf("enter c mark");
scanf("%d",&c);
printf("enter d mark");
scanf("%d",&d);
printf("enter e mark");
scanf("%d",&e);
sum=a+b+c+d+e;
printf("%d",sum);
if(a>=50 && b>=50 && c>=50 && d>=50 && e>=50)
{
printf("pass");
}
else
{
printf("fail");
}
return 0;
}

