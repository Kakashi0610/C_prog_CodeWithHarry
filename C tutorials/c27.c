// ARRAYS AND POINTER ARITHEMATIC

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr=2;
    int* ptrarr = &arr;
    printf("address of pointer to arr %d\n", &arr);
    printf("address of pointer to arr %d\n", &arr+1);   //adds int +4 on &a+1 since int=4bits
    printf("address of pointer to arr %d\n", &arr+2);   //adds int +8 on &a+2 since int=4bits
    return 0;
}
*/

/*  OUTPUT :
address of pointer to arr 6422296
address of pointer to arr 6422300
address of pointer to arr 6422304
*/



/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char f='5';
    char* ptrf = &f;
    printf("%d\n", &f);  //6422299

    //adds to the data type char +2 on &f+2 since its size is 1byte
    printf("%d\n", &f+2);  //6422301

    return 0;
}
*/

// POINTER FOR ARRAYS

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    printf("%d\n", arr[0]);  // output 1

    printf("address of 1st ele of array is : %d\n", &arr[0]); address

    printf("address of 1st ele of array is : %d\n", arr);  // is : 6422264

    printf("address of 2nd ele of array is : %d\n", arr+1);    // is : 6422268

    printf("address of 2nd ele of array is : %d\n", &arr[1]);

    printf("value of array at position 4 is : %d\n",arr[4]);  //position 4 is : 5

    printf("the address of 5th ele array is : %d\n", &arr[4]);  // is : 6422280

    printf("the address of 6th ele array is : %d\n", &arr[5]);  // is : 6422284, incr val by 4 bits bcoz int=4

    printf("the address of 6th ele array is : %d\n", arr[4]+arr[1]); // Ois = 7, adds value of array elements

    return 0;
}
*/

// easy form for array pointers

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* arrptr=arr;
    printf("%d\n", arr[3]);

    printf("first element of array : %d\n", arr[0]);
    printf("first elements address of array : %d\n", &arr[0]);

    printf("second elements address of array : %d\n", &arr[1]);
    printf("second element address is : %d\n", arr+1);

    printf("third elements address is : %d\n", &arr[2]);
    printf("third element address is : %d\n", arr+2);
    return 0;
}
*/
