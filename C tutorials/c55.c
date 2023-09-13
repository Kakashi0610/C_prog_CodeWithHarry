// WILD POINTER

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    a=5;
    int* ptr;
    ptr = &a;   //doesnt display if this is not provided or else 0 is given in OP
    printf("%d",*ptr);  // to display the value of var int a * is used besides ptr
    return 0;
}
*/

/*  HARRY KA CODE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a =4354;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
}
*/
