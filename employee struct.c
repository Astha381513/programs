#include <stdio.h>
struct employee
{
int id;
int marks;


};

int main()
{
    struct employee e1, e2;
    e1.id = 12;
    e1.marks = 66;
    e2.marks = 15;
    e2.id = 34;
    printf("e1 got %d marks\n",e1.marks);
    printf("e1' id %d\n",e1.id);
    printf("e2 got %d \n",e2.marks);
printf("e2 's id %d\n",e2.id);


    return 0;
}
