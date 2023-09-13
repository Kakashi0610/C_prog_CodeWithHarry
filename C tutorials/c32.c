// PASSING ARRAYS AS FUNCTION ARGUMENTS

/*
#include <stdio.h>

int fun1(int arr[]) // arr[] only because the value must be stored and int* is for address
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("the value at %d is : %d\n", i, arr[i]); // i increments by for loop
        arr[1] = 55;  // change in value of element in call by reference changes the value in orig. code
    }

}


int fun2(int* ptr)
{
    int j;
    for (j = 0; j < 4; j++)
    {
        printf("the value of element at %d is : %d\n", j, ptr[j]);
        //printf("the value of element at %d is : %d\n", j, *(ptr+j));  //alternate opt to execute same.
        *(ptr+2) = 45;   // change in value of element in call by reference changes the value in orig. code
    }

}

void fun3(int arr[2][3])
{
    int k, n;
    for (k = 0; k < 2; k++)
    {
        for (n = 0; n < 3; n++)
            printf("%d,\t", arr[k][n]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("the value of second element before change in arr is : %d\n", arr[1]); // stays same of og array
    fun1(arr);
    fun2(arr);
    printf("the value of second element after change in arr is : %d\n", arr[1]); //using fun1 value of arr[1]changes
    fun3(arr);   //calling a function.
    return 0;
}
// output
/* FUN1
the value of second element before change in arr is : 2
the value at 0 is : 1
the value at 1 is : 2
the value at 2 is : 3
the value at 3 is : 4
the value of second element after change in arr is : 55

FUN2
the value of second element before change in arr is : 2
the value of element at 0 is : 1
the value of element at 1 is : 2
the value of element at 2 is : 3
the value of element at 3 is : 4
the value of second element after change in arr is : 2

FUN3

1      2      3      4      5      6
*/
