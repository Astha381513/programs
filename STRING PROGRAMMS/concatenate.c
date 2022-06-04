#include<string.h>
#include<stdio.h>
int main()
{
    char s1[23],s2[23];
    printf("enter the first string :");
    gets(s1);
    printf("enter the second string: ");
    gets(s2);
    strcat(s1,s2);
    printf(" after concat:  ",s1,s2);
    puts(s1);
}
