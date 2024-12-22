#include<stdio.h>
#include<math.h>
int main()
{

// **********INSTRUCTIONS**********
// >>  These are statements in a program
//---------------------------------------------------------------------------------------------
// 1.Type Declaration Instructions-->Declare variable before using it.
int age =22;
int oldage =age;
int time=2;
int newage=oldage+time;
// int time = 2 ;         //order of declaration is important - Wrong Declaration
printf("New age is : %d\n",newage);

int age1,age2,age3;             //->Valid Declaration
age1=age2=age3 = 22;
// int Age1=Age2=Age3=Age4=22;   ->//invalid declaration:

//---------------------------------------------------------------------------------------------

// 2.Arithimetic Instruction:

//             A   +   B
// ,where  A  and  B  is operand and '+' is operator
// Note: single variable on the LHS 
// i.e
//               valid              invalid
//             a = b + c           b + c = a
//             a = b * c           a = b c
//             a = b / c           a = b ^ c   [note:- pow(x,y) for x to the power y]
int A,b=2,c=4;
A = b+c;             // valid
// b + c = a;          //invalid
int power=pow(A,b);     //i.e A^b=36
printf("a^b = %d\n",power);

// >> MODULAR OPERATOR:(%)
// Return remainder for int 
// eg.-  3 % 2 = 1
//       -3 % 2 = -1
printf("Remaider of 3 / 2 = %d\n",3 % 2);
printf("Remaider of -3 / 2 = %d\n",-3 % 2);

// >>TYPE CONVERSION:
//     int       op    int    ------->   int
//     int       op    float  ------->   float
//     float     op    float  ------->   float

printf("sum of 3 & 2 is %d\n",3+2);
printf("sum of 3 & 2.0 is %f\n",3+2.0);
printf("sum of 3.0 & 2.0 is %f\n",3.0+2.0);

// >>OPERATOR PRECEDENCE:
//         (* , / , % )  -----> (+ , - )    ----->( = )   
//         Left to Right (For Same Precedence)
    printf("3 * 7 / 7 - 1 + 5 = %d\n",3 * 7 / 7 - 1 + 5);    //[{{(3 * 7) / 7} - 1} + 5]
// 3.Control Instructions:
//     used to determine flow of program
//     a. Sequence Control
//     b. Decision Control
//     c. Loop Control
//     d. Case Control



}