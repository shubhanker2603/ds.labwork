#include<stdio.h>
int main()
{int a[10],i,n;
 printf("enter the elements of the array:\n");
 for(i=0;i<10;i++)
 {scanf("%d",&a[i]);
 }
 printf("\enter the element tp search:");
 scanf("%d",&n);
 printf("\n");
 printf("doing linear search\n");
 for(i=0;i<10;i++)
 {if(a[i]==n)
  {printf("found the element at:%d",i+1);
   printf("\n");
  }
  else
  printf("element not found\n");
  
 }
 return 0;
}
