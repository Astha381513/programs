#include<stdio.h>
int main()
{
     int a[3][3],r,c,sum=0,i,j;
     printf("\nROWS\nEnter in Matrix*/\nEnter Limit : ");
     scanf("%d",&r);
     printf("\nCOLUMN \nEnter in Matrix*/\nEnter Limit : ");
     scanf("%d",&c);
     printf("\nEnter Elements for Matrix of Size %d*%d:\n\n",r,c);
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
          {
               scanf("%d",&a[i][j]);
          }
     printf("\n%d*%d Matrix : \n\n",r,c);
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               printf("%2d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
               sum=sum+a[i][j];
     printf("\nSum of All Elements in Matrix = %d",sum);
     return 0;
}
