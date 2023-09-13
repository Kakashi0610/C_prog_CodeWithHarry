// Storage classes in C

// declaration - telling the compiler about the variable (No space reserved)  int a;
// defination - declaration plus space reserved - int a=5;

/*
#include <stdio.h>

int func1(int a, int b)
{
    auto int sum;   //is used to take the variable into main function
    sum=a+b;
    return sum;   //only write what the task is to be done- no declaring or defining if normal function
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    x=6;
    y=5;
    int sum = func1(x,y);   //auto ke baad jo bhi naam hai use karo and function ko declare karo
    z=sum;
    printf("%d",z);       //sum
    return 0;
}
*/

/*   GLOBAL VARIABLE

#include <stdio.h>

int a;   //returns 0 - global variable
int main(int argc, char const *argv[])
{
    int b;
    a=4;   //will define value as 4
    printf("%d",a);   //will print a=4 even tho global variable is a=40
    return 0;
}
*/

/*  combiming 2 files in Include

#include <stdio.h>
#include "new.c"  //combines the data from the selected .c file... cannot use same variable in both

int main(int argc, char const *argv[])
{
    //int a;
    //a=4;
    printf("%d",a); //will print 444 because in new.c the value of a is defined as 444.
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int sum=777;

int func1(int a, int b)
{
    //auto int sum;   //is used to take the variable into main function
    extern int sum;    //used to define the value of variable outside main or func.  ie Global only
    //sum=a+b;  //sum 11   and in extern sum 777
    return sum;   //only write what the task is to be done- no declaring or defining if normal function
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    x=6;
    y=5;
    int sum = func1(x,y);   //auto ke baad jo bhi naam hai use karo and function ko declare karo
    z=sum;
    printf("%d",z);       //sum
    return 0;
}
*/



/*    static variable storage --- changes each time new value is saves like a++   a=0--1--2--3...n

#include <stdio.h>
#include <stdlib.h>

int func(int a, int b)
{
    static int myvar;   // is used to keep the changed value to a variable  a++ in function
    myvar = myvar + 1;   // increments variable each time and saves it
    printf("%d\n", myvar);
    return myvar;
}

int main(int argc, char const *argv[])
{
    int a, b;
    a = 5;
    b = 6;
    int myvar = func(5, 6); //1
    //printf("%d\n", myvar);      // this works too for vertical 1 2 3 4 5 6
    myvar = func(a, b);     //2
    //printf("%d\n", myvar);
    myvar = func(a, b);     //3
    //printf("%d\n", myvar);
    myvar = func(a, b);     //4
    //printf("%d\n", myvar);
    myvar = func(a, b);     //5
    //printf("%d\n", myvar);
    myvar = func(a, b);     //6
    // printf("%d", myvar);      // this works too  but only shows total number
    return 0;
}
*/

// Register variable storsge class doesnt change any OP but stores it near CPU so that it can be accessed quickly.