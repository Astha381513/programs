#include <stdio.h>
int main()
{
    int n,i,j;
        int temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         
    {
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   
    printf("Elements of array sorted in descending order: \n");    
    for (int i = 0; i < n; i++) 
    {     
        printf("%d ", a[i]);    
    }    
    return 0;
}
