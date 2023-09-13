/* BREAK AND CONTINUE

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age,i;
    for (i=0;i<5;i++){ //just for no.of iterations to execute, must use for using break & cont or wont work
        printf("%d\nenter your age:\n", i);
        scanf("%d", &age);
        if (age>6)
        {
            continue;  //will skip the age and continue if condition is false
        }
        printf("kakashi\n");  //will print if condition (age>6) is true
        printf("kakashi2\n");
        printf("kakashi3\n");
        printf("kakashi4\n");
    }
    return 0;
}

Example 2

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age,i;
    for (i=0;i<5;i++){ //just for no.of iterations to execute, must use for using break & cont or wont work
        printf("%d\nenter your age:\n", i);
        scanf("%d", &age);
        if (age>6){
            break;  //will skip the age and continue if condition is false
        }
        printf("kakashi\n");  //will print in continue if condition (age>6) is true and wont in break
        printf("kakashi2\n");
        printf("kakashi3\n");
        printf("kakashi4\n");
    }
    printf("kakashi\n");  //will print in both no matter what since outside loop
    return 0;
}

*/