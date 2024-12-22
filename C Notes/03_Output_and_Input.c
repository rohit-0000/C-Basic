#include<stdio.h>
int main()
{
    /*
--------------------------------------------------------------------------------------
    Output:( printf ->used to print)
    printf("Hello World");
    printf("Hello World\n"); //->for new line
--------------------------------------------------------------------------------------   
    CASES:
    1.Integers
    printf("age is %d",age);       //if int age=54; i.e given
    2.real number
    printf("Value of pie is %f",pie)  //if float pie=3.14; is given
    3.characters
    printf("Star looks like this %c",star)  //if char star='*'; is given
--------------------------------------------------------------------------------------
    INPUT: (scanf-> used to take input data)
    scanf("%d",&age);    //we can use %c or %f  for character or real no
--------------------------------------------------------------------------------------
  COMPILATION:
  A computer program that program that translate C code into machine code
--------------------------------------------------------------------------------------
    */ 
    int num1;
    int num2;
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter first number\n");
    scanf("%d",&num2);
    int sum = num1+num2;
    printf("sum of two number is %d\n",sum);
    printf("Sum of two number is %d\n",num1+num2);
    printf("Sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}