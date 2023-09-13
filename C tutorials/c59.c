/* #include Pre processor in C - causes the extraction contents of some existing file into the new
the new file, which helps to use the functions and commands in the new file efficiently.*/

/* #define - used to define prer processor variables. #define can be used to globally define a
variable to a number. example --  #define pi 3.14
we can also define MACROS or functions using #define for Ex.

#define pi 3.14
#define SQUARE(var) (var)*(var)

will provide us:

area of square = PI * SQUARE(rad)
area of square = 3.14 * (rad)*(rad);
*/

/* area of square program using #define and Function.

#include <stdio.h>
#define PI 3.14
#define SQUARE(var) (var) * (var)    // square of variable formula

int func1(int a, int b)
{
    b = PI * SQUARE(a);   //should include variable with square
    return b;
}

int main(int argc, char const *argv[])
{
    int var, area;
    printf("enter the radius of circle :\n");
    scanf("%d", &var);
    area = func1(var,area);
    printf("Area of circle with radius %d is : %d\n", var,area);
    return 0;
}
*/


// using #include function

/*
#include <stdio.h>
#include "new.c"   // use existing file name in #include

int main1(int argc, char const *argv[])
{
    int area;  //we have to include the variables which we have to declare
    printf(" area is %d\n", area);
    return 0;
}
*/