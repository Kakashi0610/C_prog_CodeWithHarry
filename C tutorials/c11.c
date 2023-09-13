/*   SWITCH CASE DEFAULT STATEMENTS

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age :\n");
    scanf("%d", &age);
    switch (age)     //switch statements only work with char and int
    {
    case 15:
        printf("the age is 15");     
        break;       //the break statements stop execution once the case matches

    case 16:
        printf("the age is 16");
        break;

    case 17:
        printf("the age is 17");
        break;
                   
    default:             // the default is like Else: it executes when the cases are not equal to the input
    printf(" the age is not 15, 16, 17");
    }

    printf("\nhello world\n");     // once the case matches it directly executes the code outside the switch 
    return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;

    printf("enter your age : \n");
    scanf("%d", &age);

    printf("enter your marks : \n");
    scanf("%d", &marks); 

    switch (age)
    {
        case 5:
            printf("your age is 5");
            switch (marks)
            {
                case 50:
                    printf("\n");
                    printf("your marks are 50");
                    break;
        
                default:
                    printf("\n");
                    printf("your marks are below 50");
                    break;
            }
            break;
    
        case (7):
            printf("the age is 7");

        default:
            printf("the age is not defined");
            break;
    }
    return 0;
}
*/