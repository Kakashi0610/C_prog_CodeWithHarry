// DYNAMIC MEMORY ALLOCATING  IN C

/*
#include <stdio.h>
#include <stdlib.h> //used for malloc, calloc, realloc and free functions

int main(int argc, char const *argv[])
{
    // use of malloc
    int i;
    int *ptr;  // *ptr is for the arrays
    ptr = (int *)malloc(4 * sizeof(int)); // syntax - 4 is just the ex.  like int*
    for (i = 0; i < 4; i++)
    {
        printf("the value of array\n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 5; i++)  // returns garbage value at 5th time
    {
        printf("the position of %d array's value is %d\n", i, ptr[i]);
    }
    return 0;
}
*/

// for MALLOC -  returns garbage value if value exceeds

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int *ptr; // *ptr is for the arrays
    printf("enter the size of array you want to create :\n");
    scanf("%d", &n);

    ptr = (int *)malloc(6 * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("the value of elements in array\n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("value of array at position %d is : %d\n", i, ptr[i]);
    }
    return 0;
}


// for CALLOC -extra feature, it returns 0 instead of garbage value if space left or int not added.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int *ptr; // *ptr is for the arrays
    printf("enter the size of array you want to create :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(6 , sizeof(int));  //just , instead of *  and  calloc name
    for (i = 0; i < n; i++)  //if not his for loop, 0 instead of garbage value
    {
        printf("the value of elements in array\n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("value of array at position %d is : %d\n", i, ptr[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i,*ptr;   //*ptr is very imp for arrays
    printf("Enter the number of elements in array :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of elements in array : \n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("the value of elements in position %d of array is : %d\n", i, ptr[i]);
    }
    return 0;
}

// OUTPUT of CALLOC
Enter the number of elements in array :
7
Enter the value of elements in array :
2
Enter the value of elements in array :
4
Enter the value of elements in array :
6
Enter the value of elements in array :
8
Enter the value of elements in array :
0
Enter the value of elements in array :
2
Enter the value of elements in array :
6
the value of elements in position 0 of array is : 2
the value of elements in position 1 of array is : 4
the value of elements in position 2 of array is : 6
the value of elements in position 3 of array is : 8
the value of elements in position 4 of array is : 0
the value of elements in position 5 of array is : 2
the value of elements in position 6 of array is : 6
*/

/* CALLOC AND REALLOC

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i, *ptr; //*ptr is very imp for arrays
    printf("Enter the number of elements in array :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of elements in array : \n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("the value of elements in position %d of array is : %d\n", i, ptr[i]);
    }

    printf("enter the new size of array : \n");   //do not redeclare variables i, n, *ptr
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));  //realloc helps to reallocate new size of array dynamically
    for (i = 0; i < n; i++)
    {
        printf("Enter the values inside array : \n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("the value of array at position %d is : %d\n", i, ptr[i]);
    }
    return 0;
}

/*  OUTPUT OF CALLOC AND REALLOC COMBINED

Enter the number of elements in array :
3
Enter the value of elements in array :
1
Enter the value of elements in array :
2
Enter the value of elements in array :
3
the value of elements in position 0 of array is : 1
the value of elements in position 1 of array is : 2
the value of elements in position 2 of array is : 3
enter the new size of array :
5
 Enter the values inside array :
1
 Enter the values inside array :
2
 Enter the values inside array :
3
 Enter the values inside array :
4
 Enter the values inside array :
5
the value of array at position 0 is : 1
the value of array at position 1 is : 2
the value of array at position 2 is : 3
the value of array at position 3 is : 4
the value of array at position 4 is : 5
*/

/*   Calloc() and free(ptr)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int *ptr; // *ptr is for the arrays
    printf("enter the size of array you want to create :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(6, sizeof(int)); // just , instead of *  and  calloc name
    for (i = 0; i < n; i++)              // if not his for loop, 0 instead of garbage value
    {
        printf("the value of elements in array\n");
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("value of array at position %d is : %d\n", i, ptr[i]);
    }

    free(ptr);     //is used to empty the array

    if (ptr[i] == 0)
    {
        printf("the array needs to be refilled");
    }
    else {
        printf("the array is Full");
    } 
    return 0;
}

//output of Calloc() and free()

enter the size of array you want to create :
3
the value of elements in array
1
the value of elements in array
2
the value of elements in array
3
value of array at position 0 is : 1
value of array at position 1 is : 2
value of array at position 2 is : 3
the array needs to be refilled
*/


//  CALLOC timepass
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int *ptr; // *ptr is for the arrays
    printf("enter the size of array you want to create :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(6, sizeof(int)); // just , instead of *  and  calloc name
    for (i = 0; i < n; i++)              // if not his for loop, 0 instead of garbage value
    {
        printf("the value of elements in array\n");
        scanf("%d", &ptr[i]);
        printf("value of array at position %d is : %d", i, ptr[i]);
        
        if (i<=n) {
            printf(".\n");
        }
        else
        {
            printf("\n");
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("value of array at position %d is : %d\n", i, ptr[i]);
    }

    free(ptr);

    if (ptr[i] == 0)
    {
        printf("\nthe dynamic memory allocated is cleared !\n");
    }

    else
    {
        printf("\nthe data is still present.\n");
    }
    return 0;
}
*/


/*  OUTPUT

enter the size of array you want to create :
4
the value of elements in array
1
value of array at position 0 is : 1.
the value of elements in array
2
value of array at position 1 is : 2.
the value of elements in array
3
value of array at position 2 is : 3.

value of array at position 0 is : 1
value of array at position 1 is : 2
value of array at position 2 is : 3

the dynamic memory allocated is cleared !
*/

