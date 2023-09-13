/* TYPE-CASTING   changes one datatype to another while executing

syntax of type casting:


|||  printf("the value of b is : %(format specifier of req datatype)",(req.datatype)value);  |||



Example:
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5; 
    float b=20/5; //divides
    char c='anu'; 
    printf("the value of b is : %f",(float)b); //the value of b is : 4.000000

    return 0;
}
*/


/*NALLA GIRI

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the number :\n");
    scanf("%d", &a);

    printf("the value of number is %d", a);
    return 0;
}
*/

//TYPE-CASTING

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5;
    float b=20.8;
    char c='anu';  //the executed ans is 117.0000 in float form
    printf("the value of a is : %f",(float)c);
    return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5; //the executed ans is 5.0000 in float form
    float b=20.8;
    char c='anu'; 
    printf("the value of a is : %f",(float)a);
    return 0;
}
*/



/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5; 
    float b=20.8; //the executed ans is ERROR DC4 in char form
    char c='anu'; 
    printf("the value of a is : %c",(char)b);

    return 0;
}
*/