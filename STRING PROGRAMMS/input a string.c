#include<stdio.h>
void printstar (char str[])
{
    int i =0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    char str[] = {'l','o','s','s','\0'};
    printstar (str);
    return 0;
}
