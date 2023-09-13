// file modes fgetc, fgets, fputc, fputs

//fgetc  :   c = fgetc(ptr);

//fgets  :   fgets(str1, 70, ptr);    middle no. should be bigger than string itself

//fputc  :   fputc('f', ptr);

//fputs  :   fputs("\nAniket Manoj Shinde\n", ptr);

//with w+ and fputs  :  mera naam don (deletes the previous data and writs the fputs wala)

//with r+ and fgets  :  mera   (since fgets reads the data and displays middle number characters)

/*with a+ and fputs  :  good + mera naam kakashi(on next line) fputs prints value in file 
and printf in terminal */


// fgetc
/*

#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("main.txt", "r");
    char c = fgetc(ptr);                     // syntax to get a character from a string
    printf("the char we got was : %c\n", c); // to print in terminal  --- a
    c = fgetc(ptr);
    printf("the char we got was : %c\n", c);  // ---- n
    c = fgetc(ptr);
    printf("the char we got was : %c\n", c);  // ---- n
    c = fgetc(ptr);
    printf("the char we got was : %c\n", c);  // ---- u

    fclose(ptr);
    return 0;
}
//output
/*
the char we got was : a
the char we got was : n
the char we got was : n
the char we got was : u */


// fgets

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str1[100];
    char str2[100];
    FILE *ptr = NULL;
    ptr = fopen("main.txt", "r");
    fgets(str1, 70, ptr);  // fgets syntax
    printf("the demanded string is : %s\n", str1);   //10 is as same ------- annuuuuuu
    fgets(str2, 15, ptr);   // 1st is  null, execution starts from second
    printf("the demanded string is : %s\n", str2); //if 2 then a, if 10+ then annu malik
    return 0;
}
// output for fgets

the demanded string is : annuuuuuu
the demanded string is : annu malik
*/

// fputc and fputs --- should always be in "w" or "a"
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    char str[30];
    ptr = fopen("main.txt", "a");  // w cuts whole and only prints below, a combines previous and latest.
    fputc('f', ptr);  
    fputs("\nAniket Manoj Shinde\n", ptr);
    return 0;
}
*/

/*       DUMB CODE  -- doesnt print str1

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    char str1[40];   // not printing
    char str11[20] = "yedpat";
    char str2[30] = "anikettt";
    ptr = fopen("main.txt", "a+");
    fputs("mera naam kakashi\n\t", ptr);
    fgets(str1, 6, ptr);
    printf("the value is :%s\n\t", str1);
    printf("the string1 we got is : %s\n\t", str11);
    printf("the string2 we got is : %s\n\t", str2);
    return 0;
}
*/

//with w+ and fputs  :  mera naam don (deletes the previous data and writs the fputs wala)

//with r+ and fgets  :  mera   (since fgets reads the data and displays middle number characters)

/*with a+ and fputs  :  good + mera naam kakashi(on next line) fputs prints value in file 
                        and printf in terminal */
















