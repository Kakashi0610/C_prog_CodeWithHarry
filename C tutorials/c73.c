// CALL BACK FUNCTIONS USING FUNCTION POINTERS - call back functions are the functions which are used to
// call back a function using a function pointer.



/*  Basic calling a function pointer

#include <stdio.h>

int product(int a, int b)
{
    return a * b;
}
int main(int argc, char const *argv[])
{
    printf("the value of a and b is : %d\n", product(5,6)); //a and b is : 30

    int c;
    int (*fptr) (int, int);
    fptr = &product;
    c = (*fptr)(7,7);

    printf("the value of c after using func ptr is : %d", c); //func ptr is : 49
    return 0;
}
*/



// Function ptr calling a function ptr

#include <stdio.h>

int product(int a, int b)
{
    return a * b;
}

void greethelloandexc (int (*fptr)(int, int))
{
    printf("Hello user!\n");
    printf("the product of a and b is : %d\n", fptr(5,6));
}

void greetgmandexc (int (*fptr) (int, int))
{
    printf("good morning user!\n");
    printf("the product of a and b is : %d\n", fptr(5,6));
}

int main(int argc, char const *argv[])
{
    int (*fptr) (int, int);  //declaring a function pointer

    fptr = &product;  // define function pointer just so that it works when called

    greetgmandexc(fptr); //calls function pointer and function product runs too within it

    return 0;
}


/*  Quick Quiz  AVERAGE of 2 number with callback function

#include <stdio.h>
#include <string.h>

int avg (int a, int b)
{
    return ((a + b)/2);
}

void gmandavg (int (*fptr1)(int, int))
{
    printf("Good morning user\n");
    printf("the average of two numbers is : %d\n\n", avg(10, 20));
}

void gnandavg (int (*ptr2)(int, int)) 
{
    printf("Good night user\n");
    printf("the average of two numbers is : %d\n", avg(10, 20));
}

int main(int argc, char const *argv[])
{
    int (*fptr1)(int, int);
    int (*fptr2)(int, int);

    fptr1 = &avg;
    fptr2 = &avg;

    gmandavg(fptr1);
    gnandavg(fptr2);

    return 0;
}
*/

//  OUTPUT
/*
Good morning user
the average of two numbers is : 15

Good night user
the average of two numbers is : 15
*/