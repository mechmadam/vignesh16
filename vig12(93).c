#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,a,b,n,i;
scanf("%d%d%d",&n,&a,&b);
for(i=0;i<=n;i++)
{
sum=sum+a;
a=a+b;
}
printf("%d",sum);
getch();
return 0;
}
