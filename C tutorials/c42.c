// static, local and global variables in C

/* the execution is done within main first and then the function
   global variable changes if it enters the MAIN
*/

/*  GLOBAL VARIABLE
#include <stdio.h>

int b=70;    // global variable     changes in C if enters Main
int func1(int b1)
{
    printf("value of k inside function is : %d", b);     // #2 execution
    //printf("the value of b in function is : %d\n",b);  // the value of b in function is : 55
    //printf(" the address of b in func1 is : %d\n", &b);  //the address of b in func1 is : 6422272 DIFFERS 
    
    return b1 * 10;
}

int main(int argc, char const *argv[])
{
    int b = 55;
    printf("value of k inside main is : %d\n", b);  // #1
    int val = func1(b);
    int *ptr = &val;
    //printf("the value of func1 is : %d\n", val);  //the value of func1 is : 550
    //printf(" the address of b in main is : %d\n", &b); //the address of b in main is : 6422296  DIFFERS
    return 0;
}
*/

/*   TRASH

#include <stdio.h>

int fun1()
{
    int x, y, z;
    printf("the value of a is : %d\n", x);
    printf("the value of b is : %d\n", y);
    z=x+y;
    return z;
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 10;
    int z = fun1();
    printf("the value of x plus y is : %d", fun1());
    return 0;
}

*/