// Predefined macros and other preprocessor directives

/* 
#undef = undefines a macro(function)
#ifdef = indicates if it defines a macro, if, yes = true; if, no = false
#ifndef = indicates if it doenst define a macro
#if
#else
#elif
#pragma = to issue some simple commands from the compiler
*/


/*  file, date, time, line functions  

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("the name of file is : %s\n", __FILE__); //should be in string %s  -- is : c60.c
    printf("the date is : %s\n", __DATE__);  //should be in string %s  --  is : Jul 20 2022
    printf("the time is : %s\n", __TIME__);   //should be in string %s   --  is : 12:01:14
    printf("the line of file is : %d\n", __LINE__); //should be in int %d  --   is : 21
    
    return 0;
}
*/