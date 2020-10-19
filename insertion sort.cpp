#include<stdio.h>
int main()
{int a[10],i,k,j;
  printf("enter the array:\n");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);}
  for(i=1;i<10;i++)
  { k=a[i];
    j=i-1;
    while(j>=0&&a[j]>k)
     { a[j+1]=a[j];
       j=j-1;
	 }
	 a[j+1]=k;
  }
  printf("## ARRAY AFTER INSERTION SORT ##\n");
  for(i=0;i<10;i++)
  { printf("%d  ",a[i]);
  }
  return 0;
}
