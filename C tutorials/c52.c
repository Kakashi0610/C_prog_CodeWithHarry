//  void pointer - is is a type of pointer in which datatype data type is not pre-decided

/*

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    a = 444;
    b = 22.22;
    
    //void *ptr = &a;  //the address of var a is : 6422292  both can be used

    void *ptr1;
    void *ptr2;

    ptr1 = &a;
    printf("the value of pointer variable a is :%d\n", *((int*)ptr1));  //for the value of var a

    ptr2 = &b;
    printf("the value of variable b by pointer is : %f\n", *((float*)ptr2));  //for value of var b

    printf("the value of ptr1 is : %d\n", &a);  // for the value of pointer (not var)
    printf("the value of ptr1 is : %d\n", ptr1);

    printf("the value of ptr2 is : %d\n", &b);  // for the value of pointer (not var)
    printf("the value of ptr2 is : %d\n", ptr2);
    return 0;
}

// output

the value of pointer variable a is :444
the value of variable b by pointer is :22.21999
the value of ptr1 is : 6422292
the value of ptr1 is : 6422292
the value of ptr2 is : 6422288
the value of ptr2 is : 6422288
*/

