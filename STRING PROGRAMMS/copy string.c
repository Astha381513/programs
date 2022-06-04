#include<stdio.h>
#include<string.h>
int main()
{
    char s1[23],s2[23];
    printf("enter a string :");
    gets(s2);
    strcpy(s1,s2);
    printf("copied string :");
    puts(s1);
    return 0;
}
