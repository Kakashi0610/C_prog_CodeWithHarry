/* Command line arguments -- there are the arguments which act as a function in terminal to do
the following tasks. For Eg. we created an command line(terminal) arg Add, and run it with Add 2 3
the result will be 5 without compexity of program and an fuction which will work anytime without code.*/

// argc is count of args and argv is value of args

/*  TO TAKE INP FROM COMMAND LINE

#include <stdio.h>
int main(int argc, char const *argv[])  //*argv[] is the pointer to the char -- its an array[]
{
    int i;
    printf("the value of arg c is : %d\n", argc);  //is : 1 --  default 1 if not defined in code
    //argument 1 is the name of the file in int = 1 ------- (1)

    for (i = 1; i <= argc ; i++) //there are args ie except file name.
    {
        printf("there are args ie except file name"); 
    }

    for ( i = 0; i < argc ; i++)
    {
        printf("the value of args at index num %d is : %s\n", i, argv[i]);
//C:\Users\Kakashi\OneDrive\Desktop\C tutorials\a.exe -- returns the ptr to the flie loc -- using (1)
    }
    return 0;
}
*/

/* output

the value of arg c is : 4
the value of args at index num 0 is : C:\Users\Kakashi\OneDrive\Desktop\C tutorials\a.exe

//  .\a.exe ke baad kuch bhi type karo woh argv me store hoga and automatically print karega
//  since argc automatic badega abd print karega

the value of args at index num 1 is : kakashi
the value of args at index num 2 is : aniket
the value of args at index num 3 is : hooo

*/