#include<stdio.h>
int main()
{int a[10],i,f,l,mid,n,num;
 printf("enter the number of elements in array:");
 scanf("%d",&n);
 printf("enter the elment of array:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 printf("enter the element to search:");
 scanf("%d",&num);
 f=0;
 l=n-1;
 mid=(f+l)/2;
 while(f<=l)
 {  if(a[mid]==num)
      {
	  printf("element found at %d position",mid+1);
       break;}
    else if(a[mid]<num)  
         {
		   f=mid+1;}
     else
	     {
		 l=mid-1;}  
		mid=(f+l)/2;    
 }
  if(f>l)
  printf("element not found");
  return 0;
}
