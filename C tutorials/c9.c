/*#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=7;   //here the int a,b; is not taken since a is int and b is float: which are declared in the next line
    float b=6.9;
    printf("the value of a is %d and the value of b is %f",a,b);
    
    return 0;
}
*/

// format specifiers 
/*
%c is for character
%d is for integer
%f is for float
%l is for long
%lf is for double
%Lf is for long double (capital L)
*/

/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float b=5.555;
    printf("value of b is %9.6f",b); //total space for 5.555 is 5 including decimal so if 9.6 value is used,
                                    // pointer shifts 4.5 from left and leaves spaces.
    return 0; 

}
*/

//constants 

/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    const float b=5.555;  // CONST is used to keep the same value of var. in program  
    // b=4.7; cannot be executed since b is a constant USING CONST
    printf("value of b is %f",b);
    return 0; 

}
*/

// pre-defined constants   are the constants which are defined since the start below #include<stdio.h>

/*
#include<stdio.h>
#define pi 3.14

int main(int argc, char const *argv[])
{
    //pi=4.44;  cannot be executed since pi is a pre defined constant
    printf("the value of pi is %f", pi);
    return 0;
}
*/

//Escape sequence list in c

/*
\n is for New-line
\a is for windows sound
\b is for backspace
\t is for tab (multiple space)
\' is for 'char/int' (should be done at both ends) , (for complete sentence- start and end of sentence)
\" is for "char/int"  (should be done at both ends), (for complete sentence- start and end of sentence)
\\ is for single backslash 


#include<stdio.h>
#define pi 3.14

int main(int argc, char const *argv[])
{
    //pi=4.44;  cannot be executed since pi is a pre defined constant
    printf("the \t value of \bpi is\n %f \a and my \'\'family\' name is \"Shinde\"\' \\", pi);
    return 0;
}
*/

