#include<stdio.h>
int main()
{int a[10],i,n;
 printf("enter the number of elements:");
 scanf("%d",&n);
 printf("enter the array:\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);}
  printf("print the entered array:\n");
   for(i=0;i<n;i++)
   {printf("%d  ",a[i]);
   }
  return 0;
}
