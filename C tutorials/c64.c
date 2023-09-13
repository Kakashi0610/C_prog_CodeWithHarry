// file i/o functions in C

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[400];
    FILE *ptr1 = NULL;   //use file pointer and define it as a null pointer.

    ptr1 = fopen("file.txt", "r");  //use file pointer to open a file and "r" to read /"w"/"r+"/"a".

    fscanf(ptr1, "%s", str); //file scanning and storing syntax...fscanf to store

    printf("the content of the string is : %s", str); //is : kakashi -- after space the execution stop
    // use underscore to continue the execution instead of spaces. ex.  kakashi_is_a_good_shinobi.

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    **** READING A FILE *****

    FILE *ptr1 = NULL;
    char str1[30];
    ptr1 = fopen("file.txt","r");   //"r" to read
    fscanf(ptr1, "%s", str1);
    printf("the string in file is as follows : %s", str1); // as follows : kakashi.
    */

//**** WRITING A FILE *****
/*
    FILE *ptr1 = NULL;
    char str1[300] = "Kakashi has a sharingan.";
    ptr1 = fopen("file.txt","w");   //deletes the existing text and writes the new text from str1.
    fprintf(ptr1, "%s", str1);   //Kakashi has a sharingan.
*/

//**** APPENDING (adding to without deleting prev. data to) A FILE *****

/*
    FILE *ptr1 = NULL;
    char str1[50] = "kakashi rocks.\n";
    ptr1 = fopen("file.txt", "a+");
    fprintf(ptr1, "%s", str1);   // just print no need to scan
    printf("data in file is : %s", str1);

    FILE *ptr2 = NULL;   // create second pointer.
    char str2[50] = "kakashi is a hokage.\n";  // second string.
    ptr2 = fopen("file.txt", "a+");
    fprintf(ptr2, "%s", str2);
    printf("data in file is : %s", str2);

    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[200];
    char str2[200] = "kakashi";
    FILE *ptr1 = NULL;
    ptr1 = fopen("main.txt", "r+");
    fscanf(ptr1, "%s", str1);
    fprintf(ptr1, "%s", str1);
    printf("%s\n", str1);   //annuuuuuu   doesnt read after blanks
    printf("%s", str2);   //kakashi
    return 0;
}
*/


/*   "a"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) 
{ 
    FILE *ptr = NULL; 
    char str[200] = "annuuuuuu1" ;
    ptr = fopen("main.txt", "a");
    fscanf(ptr, "main.txt", str);
    printf("%s\n", str);      
    fprintf(ptr, "\n%s", str); 
    return 0;

    /* output
    annuuuuuu
    annuuuuuu1  
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[200];
    char str2[200] = "kakashi";
    FILE *ptr1 = NULL;
    ptr1 = fopen("main.txt", "r+");
    fscanf(ptr1, "%s", str1);
    fprintf(ptr1, "%s", str1);
    printf("%s\n", str1);   //annuuuuuu   doesnt read after blanks
    printf("%s", str2);   //kakashi
    return 0;
}
*/