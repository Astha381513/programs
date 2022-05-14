#include <stdio.h>
 
int fact(int);
 
void main()
{
 int num,factorial;
 
  	printf("Enter a number to calculate factorial:\t");
  	scanf("%d",&num);
  	factorial=fact(num);
    printf("Factorial of the num(%d) = %d\n",num,factorial);
}
 
int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
