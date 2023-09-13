// RECURSIONS  **IMPORTANT**

// factorial using recursion
/*

#include <stdio.h>

int fact(int number) // since number is input in brackets)
{
    if (number == 0 || number == 1)  //since the fact of 0 and 1 is 1
    {
        return 1;
    }
    else
    {
        return (number * fact(number - 1)); // n*f(n)-1 is the formula for factorial
    }
}

int main(int argc, char const *argv[])
{
    int number;
    printf("enter the number you want factorial of :");  // no need of for loop in this
    scanf("%d", &number);
    printf("\n%d",number,fact(number));

    return 0;
}
*/