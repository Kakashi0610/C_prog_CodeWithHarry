// ARRAYS

/*

 syntax = datatype arrayname[ no. of elements ]={ val1, val2, val3, ..., valn }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[5]={2,4,6,8,10};  //datatype arrayname[ no. of elements ]={ val1, val2, val3, ..., valn }
    printf("the value of 4th elemenmt is : %d\n", num[0]);
    return 0;
}

// alag code


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4],i; // the limit is 5 arrays in [4] starting from 0

    for (i = 0; i < 5; i++) // this loop is for printing the number of elements i.e [0] to [5]
    {
        printf("enter the value of %d element \n:", i); //for storing the values in element till [5]
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 4; i++)   //this loop is for storing values and printing them
    {
        printf("the value of %d element in array is %d\n", i, &marks[i]);
    }

//alag code

    marks[0]=404;
    marks[1]=414;
    marks[2]=424;
    marks[3]=434;
    marks[4]=444;
    marks[5]=454;

    printf("marks of student 1 is %d\n", marks[0]);
    printf("marks of student 2 is %d\n", marks[1]);
    printf("marks of student 3 is %d\n", marks[2]);
    printf("marks of student 4 is %d\n", marks[3]);
    printf("marks of student 5 is %d\n", marks[4]);
    printf("marks of student 6 is %d\n", marks[5]);

    //if 6th value ie index [5] input is fed, the first [0] is removed


    return 0;
}
 */

// 2d array

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[2][3]={{2,4,6},{5,7,3}}; //first {} is 0   and   first ie (0) ele in 0 is 2

    printf("the value of elemenmt is : %d\n", num[0][1]); //ans 4
    return 0;
}


// to print 2d array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    int num[2][3]={{2, 4, 6},{5, 7, 3}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("the value of %d %d element of array is : %d\n",i,j,num[i][j]);
    }
    printf("\n");
    return 0;
}
//output

the value of 0 0 element of array is : 2
the value of 0 1 element of array is : 4
the value of 0 2 element of array is : 6
the value of 1 0 element of array is : 5
the value of 1 1 element of array is : 7
the value of 1 2 element of array is : 3


//printing in sequence of arrays

/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    char name[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d", name[i][j]);
    }
    
    return 0;
}

/* output 
123
456
*/

/*    PRACTICE CODE

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    char name[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (i = 0; i < 2; i++)    //for columns == 2  (allocates value 000...n if allocated space exceeds)
    {
        printf("\n");
        for (j = 0; j < 3; j++)   //for rows == 3  (allocates value 000...n if allocated space exceeds)
            printf("%d", name[i][j]);
    }
    
    return 0;
}

*/