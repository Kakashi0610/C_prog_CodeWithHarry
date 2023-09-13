// CALL BY VALUE AND/VS CALL BY  REFERENCE

/*
For Call by Value = give a pointer to the variable inside arguments of a temporary function, and while calling 
the function - put & (address optr) in the args of the calling functions args in Main function.
*/


/*
#include <stdio.h>

void changevalue(int *address_of_a)
{
    *address_of_a a=69;   // * = value of.
}
int main(int argc, char const *argv[])
{
    int a = 34;
    int b = 77;
    printf("the value of a is : %d\n", a);      //the value of a is : 34
    changevalue(&a);                            // calling function to change the value of a
    printf("the value of a now is : %d\n", a);  //the value of a is : 69
    return 0;
}
*/


//Quiz

/*
#include <stdio.h>

int change(int *x, int *y)
{
    *x = *x + *y;       //*value of x = *value of x + *value of y;
    *y = *x - (*y+*y);  //*value of  = *value of x - (*value of y + *value of y);
}

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 3;
    printf("the value of a is : %d\n", a);  //4
    printf("the value of b is : %d\n", b);  //3
    change(&a, &b);   //function can be referenced or called once
    printf("the value of a now is : %d\n", a);  //7
    printf("the value of b now is : %d\n", b);  //1
    return 0;
}
*/