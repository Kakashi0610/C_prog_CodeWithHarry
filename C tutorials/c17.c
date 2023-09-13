// GOTO statement or JUMP statement

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    label:   //use colon for labels
        printf("hello world\n");
        printf("this is your new king!\n");
        goto end; // use semi colon for calling out

    printf("welcome to my kingdom\n"); //if this statement was below go-to, it wont execute
    goto label;  // calls out Label in a loop 

    end:
        printf("this is the end");  // will print label END: after executing previous labels print stmnt

    return 0;
}
*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    for(int i=0;i<7;i++) 
    {
        printf("%d\n", i);
        for (int j=0;j<9;j++)
        {
            printf("enter the number (enter 0 to exit):\n");
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }
        }

    }
    end:
    printf("this is the end");
    return 0;
}
/*


