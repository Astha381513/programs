#include <stdio.h>

int main()
{
    int marks;
    printf("enter the marks out of 100\n");
    scanf("%d",&marks);
    if(marks>=75)
    printf("A");
    else if(marks<75&&marks>=60)
    printf("B");
    else if(marks<60&&marks>=30)
    printf("C");
    else
    {
        printf("FAIL");
    }
    

    return 0;
}

