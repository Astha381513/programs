#include<stdio.h>
void main()
{
   int arr[50],i,k,n,cog=0,col=0,coe=0;
   printf("enter the no. of element \n");
   scanf("%d",&n);
   printf("enter the array element\n");
   for(i=0;i<n;i++)
{
   
   scanf("%d",&arr[i]);
}
   printf("enter the value of k\n");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if(arr[i]>k)
      cog++;
      else if (arr[i]<k)
      col++;
      else if(arr[i]==k)
      coe++;
   
   }
   printf("greater than k=%d\n,less than k=%d\n,equal to k=%d",cog,col,coe);
  
}
