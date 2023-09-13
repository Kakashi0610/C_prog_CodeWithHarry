/* MEMORY LEAK - memory leak is the leak of the unused memory that is dynamically allocated by the dynamic 
memory allocation or statically allocated in the main by variables.
Memory needs to be freed each time we dynamically or statically allocate it using free(ptr); */

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i,n;
    int *ptr;    // *ptr is for the arrays
    printf("enter the size of array you want to create :\n");
    scanf("%d", &n);

    ptr = (int *)calloc(6, sizeof(int)); // just , instead of *  and  calloc name
    for (i = 0; i < n; i++)              // if not his for loop, 0 instead of garbage value
    {
        printf("Enter the value of elements in array :");
        scanf("%d", &ptr[i]);
        printf("value of array at position %d is : %d", i, ptr[i]);

        if (i<=n) 
        {
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

/* OUTPUT

enter the size of array you want to create :
4
Enter the value of elements in array :11
value of array at position 0 is : 11.
Enter the value of elements in array :55
value of array at position 1 is : 55.
Enter the value of elements in array :66
value of array at position 2 is : 66.
Enter the value of elements in array :99
value of array at position 3 is : 99.

value of array at position 0 is : 11
value of array at position 1 is : 55
value of array at position 2 is : 66
value of array at position 3 is : 99

the dynamic memory allocated is cleared !
*/



/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i=0;
    int a;
    int * i2;
    while (i<55555)
    {
        printf("welcome to kakashi's genjutsu\n");   // for get char
        i2 = (int *) malloc (4 * sizeof(int));
        if (i%100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);
    }
    free(i2);     
    return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Code With Harry\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }
    return 0;
}
*/

