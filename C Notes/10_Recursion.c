/*
RECURSION:
    When a function call itself, it is called recursion.
PROPERTIES:
1.->Anything that can be done with Iteration , can be done be with recursion and vice-versa.
2.->Recursion can sometimes give that most simple solution.
3.->Base Case is the condition which stops recursion.
4.->Iteration has infinite loop & Recursion has stack overflow.
*/
#include<stdio.h>
void HWprint(int count);
int fac(int factnum);  //for factorial
int fib(int fibo);     //for fibonaci series
int main()
{
    // HWprint(15);   // print hello world 15 times

    int factorial;
    printf("Enter the number for factorial\n");    // factorial of number
    scanf("%d",&factorial);
    int f=fac(factorial);  
    printf("factorial is %d\n",f);

    int fibbonaci;
    printf("Enter the number for fibbonacci series\n");  // fibbonaci series
    scanf("%d",&fibbonaci);
    int k =fib(fibbonaci);
    printf("The value of %d Fibonaci series is %d\n",fibbonaci,k);
    return 0;
}

int fac(int factnum)   // function to find factorial
{
    if(factnum==0){return 1; };
    return factnum*fac(factnum-1);
    
}
void HWprint(int count)        // function to print hello world
{
    if(count == 0){return ;}
    printf("Hello world\n");
    HWprint(count-1);
}
int fib(int fabo)               //function for fibonacci series
{
    if(fabo<0){return 0;}
    if(fabo==0){return 0;}//1,1,2,3,5,8,13
    if((fabo<=2)&&(fabo>0)){return 1;}
    return fib(fabo-1)+fib(fabo-2);
    
}

