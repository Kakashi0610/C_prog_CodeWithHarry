// this is for integer values stored in %d

/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    a=20;
    b=10;
    printf("a + b is %d\n", a+b);
    printf("a - b is %d\n", a-b);
    printf("a * b is %d\n", a*b);
    printf("a / b is %d\n", a/b);
    return 0;
}
*/


/*
//this is for float values stored and denoted by %f

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    float b;   //you have to mention that b is float each time

    a=40;
    b=23.9;   // foat value
    printf("a + b is %f\n", a+b);  //%f stores and denotes float values
    printf("a - b is %f\n", a-b);
    printf("a / b is %f\n", a/b);
    printf("a * b is %f\n", a*b);
    return 0;
}

// relational operators  ==  !=  <  >  <=  >==

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    float b;   //you have to mention that b is float each time

    a=40;
    b=23;  
    printf("a == b is %d\n", a==b );
    printf("a != b is %d\n", a!=b);
    printf("a < b is %d\n", a<b);
    printf("a > b is %d\n", a>b);
    printf("a >= b is %d\n", a>=b);
    printf("a <= b is %d\n", a<=b);

    return 0;
}

// Logical operators  &&  ||  !

// for &&

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    a=40;
    b=0; 
    printf("a && b is %d\n", a&&b); //returns 0 value since b is 0    anything>0 is considered as value in &&
   
    a=40;
    b=20; 
    printf("a && b is %d\n", a&&b); //returns 1 value since both are integers
    return 0;
}

// for ||

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    a=40;
    b=0; 
    printf("a || b is %d\n", a||b); //returns 0 value since any integer is greater than 0 

    a=40;
    b=20; 
    printf("a || b is %d\n", a||b); //returns 1 value since both are greater than 0
    return 0;
}

//for !

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    a=40;
    b=0; 
    printf(" !b is %d\n", !b); //returns 1 value since opposite of 0 is integer 

    a=40;
    b=20; 
    printf("!b is %d\n", !b); //returns 0 value since opposite of integer is 0 
    return 0;
}
*/