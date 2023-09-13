// STRUCTURES  -  it is like another datatype which is user defined- we need to create the structure
//whereas int is a datatype which is pre defined by the system
// includes value of int float char string double long


/*
#include <stdio.h>
#include <string.h>

struct Employee {    //creating datatype structure
    
    char initial;   // structure members
    int empid;       // structure members
    float empmarks;  // structure members
    char name[30];   // structure members

};   // } e1,e2,e3; ----> you can also declare structure names like this 

int main(int argc, char const *argv[])
{
    struct Employee e1,e2,e3;       // e1, e2, e3, is the structure name

    strcpy(e1.name, "aniket"); // for string use strcpy
    strcpy(e2.name, "anuja");  //the name of employee2 is anuja.
    strcpy(e3.name, "dakshaja");

    e1.initial = 'a';  // structure member operator (.)  MOST IMP where e1
    e2.initial = 'b';  //where e is structure name and initial is member name
    e3.initial = 'c';  // '' are used for characters

    e1.empid = 50;   // structure member operator (.)
    e2.empid = 52;   //where e is structure name and empid is member name
    e3.empid = 54;

    e1.empmarks = 69.69;  // structure member operator (.)
    e2.empmarks = 89.99;  //where e is structure name and empmarks is member name
    e3.empmarks = 39.39;  

    printf("the name of employee1 is %s.\n", e1.name);
    printf("the name of employee2 is %s.\n", e2.name); //the name of employee2 is anuja.
    printf("the name of employee3 is %s.\n", e3.name);

    printf("employee1 got %f marks.\n",e1.empmarks);  //employee1 got 69.690002 marks. %f for float
    printf("employee2 got %f marks.\n",e2.empmarks);
    printf("employee3 got %f marks.\n",e3.empmarks);

    printf("employee1 id number is %d.\n",e1.empid);  //employee1 id number is 50.
    printf("employee2 id number is %d.\n",e2.empid);
    printf("employee3 id number is %d.\n",e2.empid);

    printf("initial of employee1 name is %c.\n",e1.initial);  //initial of employee1 name is a.
    printf("initial of employee2 name is %c.\n",e2.initial);
    printf("initial of employee3 name is %c.\n",e3.initial);
    return 0;
}
*/