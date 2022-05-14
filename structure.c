
#include <stdio.h>
struct employee
{
int id;
float marks;

};
struct employee e1;

int main()
{
    struct employee e1;
    e1.id = 12;
    e1.marks = 34;
    printf("e1 got %d marks\n",e1.marks);
    return 0;
}
