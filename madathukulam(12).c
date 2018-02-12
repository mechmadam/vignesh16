#include<stdio.h>
#include<conio.h>
int main()
{
int array[100],maximum,size, c, m=1;
printf("Enter the value of array \n");
scanf("%d",&size);
printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
    maximum=array[0];
    for(c=i;c<=size;c++)
    {
    if(array[c] > maximum)
    {
    maximum=array[c];
    m=c+1;
    }
    }
    printf("Maximum element is present at location %d and it's value is %d.\n", m, maximum);
    getch();
    return 0;
    }
    
