
#include <stdio.h>
struct student
{
int id;
int marks;
char fav_char;

};

int main()
{
    struct student disha;
    disha.id = 12;
    disha.marks = 66;
    disha.fav_char = 'p';
    printf("disha got %d marks\n",disha.marks);
        printf("disha's %d id\n",disha.id);
                printf("disha's %d fav_char\n",disha.fav_char);


    return 0;
}
