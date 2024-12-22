/*
Function:- Block of code that perform particular task
properties:
->Execution always starts from main
->A function gets called directly or indirectly from main
-> There can be multiple functions in a program.
*/

/*
Function Types
1.->Library function: Special function inbuilt in C  ->  scanf(); , print();
2.->User-defined  : declared & defined programmer  ->here helloprint(); is user defined function.
*/

/*
Passing Arguments

  functions can take value     &     give some value
            /                                 \
        Argument             V/S               Parameter

>    in function call                       Values in function 
    Values that are Passed               Declaration & Definition

>   used to send value                    used to receive value


>   actual parameter                      formal Parameter

*/


/*

NOTES:
1.-> Function  can only return one value at a time
2.->  Changes to Parameters in function don't change the values in calling fuction.
    because a copy of argumennt is passed to the function
    
*/

#include<stdio.h>
void helloprint();  //Function Declaration/Prototypes
int sum(int x,int y);

int main()
{
helloprint();//Function Call
helloprint();
helloprint();
int c = sum(5,6);
printf("The sum of 5 and 6 is %d\n",c);
return 0;
}


void helloprint() //Function Definition
{
    printf("Hello\n");
}
int sum(int x, int y)
{
    return x+y;
}