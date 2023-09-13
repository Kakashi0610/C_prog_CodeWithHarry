/*
UNIOINS IN C - group of different datatypes which cannot be executed simultaneously

Union is similar to structure carrying different data types but the main advantage of
using a union is saves space and allocate memory to same or different datatype if the memory allocation
of fist dataype is plenty to be used by second Or is not at all used by the first data type.

IT ONLY GIVES EXACT VALUE OF LAST DEFINED OBJECT. EX. strcpy(stu1.name, "aniket"); WAS LAST BELOW.

Acquires longest  memory by any datatype by which it can be used by others.

Union CANNOT handle all structure members (int, char, float) at once since its a shared memory.

"." is used while callingout or allocating value in a int, float, char.

*/

/*

#include <stdio.h>
#include <string.h>

union student 
{
    int id;
    int marks;
    char fav_char;
    char name[20];
} stu1, stu2, stu3;  //can declare number of students here too

int main(int argc, char const *argv[])
{
    stu1;
    stu1.id=5;  //garbage value in union
    stu1.marks= 85;  //garbage value in union
    stu1.fav_char= 'A';  //garbage value in union
    strcpy(stu1.name, "aniket");   //use strcpy for strings ,  LAST - Executes perfectly

    printf("the id of student 1 is : %d\n", stu1.id);    //garbage value in union
    printf("the marks of student 1 is : %d\n", stu1.marks);   //garbage value in union
    printf("the fav char of student 1 is : %c\n", stu1.fav_char);   //garbage value in union
    printf("the name of student 1 is : %s", stu1.name);   //LAST - Executes perfectly
    return 0;
}
 /* Output
 the id of student 1 is : 1802071649
the marks of student 1 is : 1802071649
the fav char of student 1 is : a     // is OG A
the name of student 1 is : aniket
*/
