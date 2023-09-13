// POINTERS

//to create a pointer var, datatype* pointer_name = &var;
/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the value of a :\n");
    scanf("%d", &a);
    printf("enter the value of b :\n");
    scanf("%d", &b);
    printf("the value of a is : %d\n",a);
    printf("the value of b is : %d\n",b);

    int* pointera = &a;  // like scanf, it stores the value and address of variable
    int* pointerb = NULL;
    printf("the address of pointer is : %p\n", &pointera);//address of pointer to a by %p
    printf("address of a is : %p\n", &a);        //address of a using %p
    printf("address of a is : %p\n", pointera);        //address of a using %p
    printf("value of a is %d\n", a);  // value of a 
    printf("value of a is %d\n", *pointera);

    //null pointer - create pointer of var 2 and assign NULL, only works on pointername_variable, 

    printf("address of garbage is : %p\n", pointerb);
    return 0;
}
*/

//nakli fibonacci

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum, i, j,num;
    for (i = 0; i < 7; i++)
    {
        printf("enter the value of a (enter 1) :\n");
        scanf("%d", &a);
        printf("enter the value of b (enter 2):\n");
        scanf("%d", &b);
        sum = a + b;
        printf("the sum of a is : %d\n", sum);
        printf("print the numbers to be iterated :\n");
        scanf("%d", &num);
            for (j = 1; j <=num ; j++)
            {
                sum=sum+j;
                //printf("")
                printf("the value of fibonacci series is :%d\n", sum);
            }
    }
    return 0;
}
*/


// asli fibonacci

/*
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    

*/
