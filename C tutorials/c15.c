/* For loops (one variable)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i=0;i<11;i++) {     // for loop needs semi colon inside brackets AND NOT outside
        printf("%d\n", i);
    }
    return 0;
}
*/

/*FOR loops for multiple variables

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;    //declare no. of variables
    for (i=0,j=2,k=4;i<9,j<11,k<13;i++,j++,k++) { //put , between same functions and ; between diff
        printf("%d\t""%d\t""%d\t\n",i,j,k);   //put \n at the end line since it will seq. it off
    }
    return 0;
}
*/

/*FOR loop - expression 1 property- it is not compulsary to put i or j values if they are pre defined 

example 

int i=4,j=5;
for(i<9,j<10;i++,j++)

this code will run too
*/
/*FOR loop - expression 2 property


for (i=0,j=2,k=4;k<18;i++,j++,k++) 
//even if the condition statements for i and j are not specified, they will execute
//until the last condition (k<18) is false.
*/

/* FOR loop - expression 3 property

you can use the incrementor i++ or decrementor i-- after the print statement to execute, works same.

int i,j,k;    //declare no. of variables
    for (i=0,j=2,k=4;i<9,j<11,k<13;) {
        printf("%d\t" "%d\t" "%d\t\n" ,i,j,k);
        i++,j++,K++;   // in this manner
    }
    return 0;
}
*/



