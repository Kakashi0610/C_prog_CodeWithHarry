/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("enter a number :");
    scanf("%d", &a);

    printf("enter a number :");
    scanf("%d", &b);

    c=a+b;

    printf("the addition of %d and %d is : %d",a,b,c);
    return 0;
}

/*

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the subjects you passed, maths and science=1, maths=2, science=3:\n ");
    if (a=1){
        printf("congratulations! you passed maths and science exam. You'll receive Rs 45 worth chocolates!");
    }
    else if (a=2){
        printf("congratulations! you passed maths exam. You'll receive Rs 15 worth chocolates!");
    }
    else if (a=3){
        printf("congratulations! you passed science exam. You'll receive Rs 15 worth chocolates!");
    }

    else{
        printf("Better luck next time!");
    }
     return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[20];

    printf("enter a name to get started! \n:");
    scanf("%c, &name");

    if (name == 'j') {
        printf("you can start the game James!");
    }
    else if (name == 'a'){
        printf("you can start the game Aniket!");
    }
    else {
        printf("your name is not registered, sorry!");
    }

    return 0;
}
*/

/*  using string in if else statement    NOTE : FOR COMPARING STRING USE strcmp function

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[20];

    printf("enter a name to get started! \n:");
    scanf("%s", &name);


   if (strcmp(name==james)) {                  //strcmp function to compare strings
   printf("you can start the game James!");
    }
    else if (strcmp(name==aniket)){            //strcmp function to compare strings
        printf("you can start the game Aniket!");
    }
    else {
        printf("your name is not registered, sorry!");
    }

    return 0;
}
*/

/*do while

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    do {
        printf("%d\n", i);
        i=i+1;
    }
    while (i<16);

    return 0;
}
*/

/* while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    while (i<30)
    {
        printf("%d\n", i);
        i=i+1;
    }
    return 0;
}
*/

/* FOR LOOP
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;    //declare no. of variables
    for (i=0,j=2,k=4;k<18;i++,j++,k++) { //put , between same functions and ; between diff
        printf("%d\t""%d\t""%d\t\n",i,j,k);   //put \n at the end line since it will seq. it off
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age,i;
    for (i=0;i<11;i++){
        printf("%d\nenter your age:\n", i);
        scanf("%d", &age);
        if (age == 5){
            break;
        }
    }
    return 0;
}
*/

/*GO-TO

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,num;
    for(i=0;i<5;i++) {
        printf("%d\n", i);
        for(j=0;j<7;j++) {
            printf("enter a number :\n");
            scanf("%d", &num);
            if (num==0) {
                goto end;
            }

        }
    }
    end:
        printf("This is the end");

    return 0;
}
*/

// without arguments without return type

/*
#include <stdio.h>

void myname() {
    printf("aniket manoj shinde");
}

int main(int argc, char const *argv[])
{
    printf(" my name is ");
    myname();
    return 0;
}
*/

// factorial
/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,fact=1,num;
    printf("enter the number :\n");
    scanf("%d", &num);
    for (i=1;i<=num;i++)
    fact=fact*i;

    printf("\nthe factorial of %d is : %d",num,fact);
    return 0;
}
*/

// 2d array

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    int num[2][3]={{2, 4, 6},{5, 7, 3}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("%d", num[i]);
    }
    printf("\n%d", num[j]);
    return 0;
}
*/

/*

//fibonacci look-alike

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum, i, j,num;
    for (i = 0; i < 7; i++)
    {
        printf("enter the value of a (enter 1) :\n");
        scanf("%d", &a);
        printf("enter the value of b (enter 2):\n");
        scanf("%d", &b);
        sum = a + b;
        printf("the sum of a is : %d\n", sum);
        printf("print the numbers to be iterated :\n");
        scanf("%d", &num);
            for (j = 2; j <=num ; j++)
            {
                sum = sum + j;
                //printf("")
                printf("the value of fibonacci series is :%d\n", sum);
            }
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=2;
    int* ptra=&a;
    printf("%d\n", &a);
    printf("%d\n", &a+1);   //adds to the data type int +4 on &a+1 since its size is 4bits each int
    printf("%d\n", &a+2);   //adds to the data type int +8 on &a+2 since its size is 4bits each int
    printf("%d\n", &a-2);   //substracts 8 from the original &a, not the incremented byte value
    return 0;
}
*/

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number you want to select");
    scanf("%d", &a);
    if (a<=5)
    {
        printf("th enumber is valid");
    }
    else
    {
        printf("the number is not valid");
    }
return 0;
}
*/

/*  tutorial c49.c --- using new.c in "include new.c"

#include <stdio.h>
#include <stdlib.h>
int a=444;
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n, Emp1, Emp2, Emp3, E1, E2, E3;
    char e1[20];
    char e2[20];
    char e3[20];

    // for employee 1 :

    int *ptr1;
    printf("\t\t Employee 1 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp1);
    ptr1 = (int *)malloc(10 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &e1);

    if (Emp1 == 3 && Emp1 )
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }
    else
    {
        printf("your EID is invalid. Please try again...\n");
    }

    // for employee 2 :

    int *ptr2;
    printf("\t\t Employee 2 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp2);
    ptr2 = (int *)malloc(15 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &e2);

    if (Emp2 == 3)
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }
    else
    {
        printf("your EID is invalid. Please try again...\n");
    }

    // for employee 3 :

    int *ptr3;
    printf("\t\tEmployee 3 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp3);
    ptr3 = (int *)malloc(12 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &e3);

    if (Emp3 == 3)
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }
    else
    {
        printf("your EID is invalid. Please try again...\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n, Emp1, Emp2, Emp3, e1, e2, e3;
    char E1[20] ="kakashi123";
    char E2[20] ="aniket456";
    char E3[20] ="manya789";

    // for employee 1 :

    int *ptr1;
    printf("\t\t Employee 1 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp1);
    ptr1 = (int *)malloc(10 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%c", (char*)e1);

    if (Emp1 == 3 && e1 == kakashi123)
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    // for employee 2 :

    int *ptr2;
    printf("\t\t Employee 2 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp2);
    ptr2 = (int *)malloc(15 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%d", (char*)e2);

    if (Emp2 == 3 && e2 == aniket456)
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    // for employee 3 :

    int *ptr3;
    printf("Employee 3 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp3);
    ptr3 = (int *)malloc(12 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%d", &e3);

    if (Emp3 == 3 && e3 == E3)
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n, Emp1, Emp2, Emp3;
    char employee1[10];
    char employee2[10];
    char employee3[10];
    char Employee1[10] = "manya123";
    char Employee2[10] = "aniket123";
    char Employee3[10] = "kakashi123";

    // for employee 1 :

    int *ptr1;
    printf("\t\t Employee 1 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp1);
    ptr1 = (int *)malloc(10 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &employee1);

    if (strlen(employee1 == Employee1))
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    // for employee 2 :

    int *ptr2;
    printf("\t\t Employee 2 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp2);
    ptr2 = (int *)malloc(15 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &employee2);

    if (strlen(employee2 == Employee2))
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    // for employee 3 :

    int *ptr3;
    printf("Employee 3 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp3);
    ptr3 = (int *)malloc(12 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &employee3);

    if (strlen(employee3 == Employee3))
    {
        printf("Your EID is valid\n");
    }
    else
    {
        printf("your EID is not valid. Try again!\n");
    }

    return 0;
}
*/

/*    used in tut c58.c

#include <stdio.h>
#define PI 3.14
#define SQUARE(var) (var) * (var)    // square of variable formula

int func1(int a, int b)
{
    b = PI * SQUARE(a);   //should include variable with square
    return b;
}

int main(int argc, char const *argv[])
{
    int var, area;
    printf("enter the radius of circle :\n");
    scanf("%d", &var);
    area = func1(var,area);
    printf("Area of circle with radius %d is : %d\n", var,area);
    return 0;
}
*/
/*
Kakashi has a sharingan.  //already kept value in file
kakashi rocks.        //str1
kakashi is a hokage.  //str2


FILE *ptr1 = NULL;
    char str1[30];
    ptr1 = fopen("file.txt","r");
    fscanf(ptr1, "%s", str1);
    printf("the string in file is as follows : %s\n", str1);
    */


/*   CALLOC timepass
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
    return 0;
}
*/

/* output 

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
the value of elements in array
4
value of array at position 3 is : 4.

value of array at position 0 is : 1
value of array at position 1 is : 2
value of array at position 2 is : 3
value of array at position 3 is : 4

*/


/*  trash

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a=5;
    int *ptr;
    ptr = &a;
    printf("the value of ptr is : %d\n", ptr);

    free(ptr);

    printf("the value of ptr is : %d", ptr);
    return 0;
}
*/


// working trash  (on C online compiler)

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n, Emp1, Emp2, Emp3;
    char e1[] = "kakashiiii";
    char e2[] = "anikettttt";
    char e3[] = "obitoooooo";
    char E1[20];
    char E2[20];
    char E3[20];

    // for employee 1 :

    int *ptr1;
    printf("\t\t Employee 1 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp1);

    if (Emp1 == 10)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }

    ptr1 = (int *)malloc(10 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E1);

    if (strcmp(E1, e1) == 0)
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }

    else
    {
        printf("your EID is invalid. Please try again...\n");
    }

    //goto end2;

    // for employee 2 :

    int *ptr2;
    printf("\t\t Employee 2 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp2);

    if (Emp2 == 10)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }


    ptr2 = (int *)malloc(15 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E2);

    if (strcmp(E1, e1) == 0) 
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }
    
    else
    {
        printf("your EID is invalid. Please try again...\n");
    }
    
    //goto end2;

    // for employee 3 :

    int *ptr3;
    printf("\t\tEmployee 3 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp3);

    if (Emp3 == 3)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }

    ptr3 = (int *)malloc(12 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E3);

    if (strcmp(E1, e1) == 0) 
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }

    else
    {
        printf("your EID is invalid. Please try again...\n");
    }
    //goto end2;

    end1:
        printf("Access Denied !\n");

    end2:
        printf("Access Denied !\n");

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n, Emp1, Emp2, Emp3;
    char e1[] = "kakashiiii";
    char e2[] = "anikettttt";
    char e3[] = "obitoooooo";
    char E1[20];
    char E2[20];
    char E3[20];

    // for employee 1 :

    int *ptr1;
    printf("\t\t Employee 1 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp1);

    if (Emp1 == 10)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }

    //ptr1 = (int *)malloc(10 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E1);

    if (strcmp(E1, e1) == 0)
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }

    else
    {
        printf("your EID is invalid. Please try again...\n");
    }

    //goto end2;

    // for employee 2 :

    int *ptr2;
    printf("\t\t Employee 2 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp2);

    if (Emp2 == 10)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }


    //ptr2 = (int *)malloc(15 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E2);

    if (strcmp(E1, e1) == 0) 
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }
    
    else
    {
        printf("your EID is invalid. Please try again...\n");
    }
    
    //goto end2;

    // for employee 3 :

    int *ptr3;
    printf("\t\tEmployee 3 : \n Enter the number of characters in your EID :\n");
    scanf("%d", &Emp3);

    if (Emp3 == 3)
    {
        printf("the EID value is correct\n");
    }

    else
    {
        printf("your EID value is invalid. Please try again...\n");
    }

    //ptr3 = (int *)malloc(12 * sizeof(int));
    printf("Enter your Eid :\n");
    scanf("%s", &E3);

    if (strcmp(E1, e1) == 0) 
    {
        printf("your EID is valid. Thankyou for your patience.\n");
    }

    else
    {
        printf("your EID is invalid. Please try again...\n");
    }
    //goto end2;

    end1:
        printf("Access Denied !\n");

    end2:
        printf("Access Denied !\n");

    return 0;
}
*/

