// IF Else conditional statements

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=5;
    int b=6;
    int c=8;

    if (a>b) {     //no semi colon or colon is used in if.
        printf("a is greater than b");
    }
    else {        //no semi colon or colon is used in else.
        printf("a is not greater than b");
    }
    return 0;
}
*/

// if-elseif condition

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=6;
    int b=6;
    int c=6;
    int d=6;

    if (a<b) {
        printf(" a is less than b");
    }
    else if (a>b) {
        printf("a is greater than b");
    }
    else if (c>d) {
        printf("c is greater than d");
    }
    else if (c<d) {
        printf("c is less than d");
    }
    else {
        printf(" all variables are the same");
    }

    return 0;
}
*/

// challenge

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

/* String format     NOTE : FOR COMPARING STRING USE strcmp function

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[20];

    printf("enter a name to get started! \n:");
    scanf("%s", &name);


   if (strcmp(name==james)) {           //strcmp function to compare strings
   printf("you can start the game James!");
    }
    else if (strcmp(name==aniket)){
        printf("you can start the game Aniket!");
    }
    else {
        printf("your name is not registered, sorry!");
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char checkh[] = "hastar";
    char *checkInput;
    checkInput = malloc(10); // add this line;
    printf("Enter input:");
    scanf("%s", checkInput);

    if (strcmp(checkInput, checkh) == 0)
    {
        printf("Don't Fuckkoff");
    }
    else
    {
        printf("Fuckk off");
    }

    return 0;
}