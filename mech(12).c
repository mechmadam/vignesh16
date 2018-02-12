#include<stdio.h>
#include<conio.h>
int main()
{
int a,b[3],small,i;
printf("Enter the number of elements: ");
scanf("%d",&a);
pritnf("Enter the value of array elements: ");
for(i=0;i<=n;i++)
{
scanf("%d\n",b[i]);
}
small=b[0];
for(i=0;i<=n;i++)
{
if(b[i]<small)
{
small=b[i];
}
}
printf("Largest in array is %d",small);
return 0;
}
