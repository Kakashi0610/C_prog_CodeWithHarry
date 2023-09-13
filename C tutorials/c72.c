//  FUNCTION POINTERS IN C

/*  BASIC PTR EXECUTION

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 4;
    int *ptr1 = &a;
    printf("%d\n", *ptr1);  //  value of a -- 4     use of *
    printf("%d\n", *&a);  //  value of a -- 4      use of *

    printf("%d\n", &a);  // address of ptr for a -- 6422296
    printf("%d\n", ptr1);  // address of ptr for a -- 6422296

    return 0;
}
*/

//  FUNCTION POINTERS IN C

/*  FOR SUM

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) // cannot add more than whats called in function
{
    return a + b; // no bullshit of declaring variables -- just return values
}

void greet()
{
    printf("this is a lovely day good morning");
    // no use of return in strings
}

int main(int argc, char const *argv[])
{

    printf("the sum of x and y is : %d\n", sum(5, 6));  // is : 11  -- just for testing
    int (*fptr) (int, int);
    fptr = &sum;
    int d = (*fptr) (7,7);
    printf("the sum is : %d\n",d);
    return 0;
}
*/


/*    FOR PRODUCT 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int product(int a, int b)
{
    return a*b;
}

int main(int argc, char const *argv[])
{
    printf("the product of two number is :%d\n", product(6,4));  // is :24 -- testing function

    //creating function pointer

    int (*fptr) (int, int);  //declaring a function pointer  --  same like pointer just adding (dtype, dtype) and f.
    fptr = &product;   //defining a function pointer.
    int c = (*&product)(5,10);    // can use (*&product) or (*fptr).

    printf("the product using function pointer is : %d", c);

    return 0;
}
*/

/* OUTPUT :
the product of two number is :24
the product using function pointer is : 50
*/


/*  Function pointers for strings   ----   NOT COMPLETED
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void greet(char hh[50])  //not a compulsion to declare char 
{
    printf("this is a lovely day good morning");
    scanf("%s", &hh);     //save value in hh and No use of return in strings
    // no use of return in strings
}

int main(int argc, char const *argv[])
{
    printf("hello ! %s", greet);  //greet doesnt req brackets in string  i guess
    return 0;
}
*/