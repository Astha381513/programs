#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    a=12;
    b=15;
    c=sum(a,b);
    printf("the sum is %d: ",c );
    return 0;
}
int sum(int a,int b)
{
 return a + b;
}
