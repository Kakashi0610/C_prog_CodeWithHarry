// Dangling pointer - pointer which points to the free memory location or memory which has been deleted.

// case 1 : when returning a local variable address

/*
#include <stdio.h>
#include <stdlib.h>

int* functiondangling()
{
    int a,b,sum;
    a=34;
    b=55;
    sum = a + b;
    return &sum;
}

int main(int argc, char const *argv[])
{
    int* dangptr;
    dangptr = functiondangling();
    printf("%d", dangptr);
    return 0;
}
case 1 output : wrong code
*/

// case 2 : de allocation of memory block

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, num;
    int* ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 6; i++)
    {
        printf("enter the values in array :\n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("the elements in the position %d of array are : %d\n", i, ptr[i]);
    }

    free(ptr);

    if (ptr[i] == 0)     // null nahi ho raha
    {
        printf("its a null array");
    }
    else
    {
        printf("the array is full");
    }
    return 0;
}
*/