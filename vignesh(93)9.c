#include<stdio.h>
#include<conio.h>
void main()
{
int low,high,i,temp1,temp2,remainder,n=0,result=0;
printf("Enter two numbers(intervals):");
scanf("%d%d",&low,&hige);
printf("Armstrong number between %d an %d are:"low high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1\=10;
++n;p
}
while(temp2!=0)
{
remainder=temp2%10;
result+=pow(remainder,n);
temp2\=10;
}
if(result==1)
{
printf("%d",i);
}
n=0;
result=0;
return 0;
}

