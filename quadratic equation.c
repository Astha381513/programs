#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c,d,r1,r2;
   printf("enter the values of a,b,c:\n");
   scanf("%f%f%f" &a,&b,&c);
   d=b*b-4*a*c;
   if(d>0)
   {
      r1=-b+sqrt(d)/(2*a);
      r2=-b-sqrt(d)/(2*a);
      printf("the real roots = %f%f",r1,r2);
      
   }
   else if(d==0)
   {
      r1=-b/(2*a);
      r2=-b/(2*a);
      printf("roots are equal =%f%f",r1,r2);
    }
   else
   printf("roots are imaginary");
   
}
