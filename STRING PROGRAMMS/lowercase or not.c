#include<stdio.h>
 
int main() {
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 97 && ch <= 122)
      printf("Character is Lowercase Letters");
   else
      printf("Character is Not Lowercase Letters");
 
   return (0);
}

