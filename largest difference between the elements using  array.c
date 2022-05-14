#include<stdio.h>  
#define N 6
  
int main()  
{  
    int n[N], i, big, small;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &n[i]);  
  
    big = small = n[0];  
  
    for(i = 1; i < N; i++)  
    {  
        if(n[i] > big)  
            big = n[i];  
  
        if(n[i] < small)  
            small = n[i];  
    }  
  
    printf("The largest difference is %d, ", (big - small));  
    printf("and its between %d and %d.\n", big, small);  
  
    return 0;  
}
