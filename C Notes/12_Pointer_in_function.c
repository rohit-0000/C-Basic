/*
POINTERS IN FUNCTION CALL
1>Call by value- it passes the copy of the parameter to the function.so it didn't directly affect to the main function
2>Call by reference- it passes the actual parameter to the function.so it directly affect to the main function
*/


#include<stdio.h>
void Areasquare(int num);
void _Areasquare(int *numb);
int main()
{
    int number=4;


    Areasquare(number);
    printf("The value of number is %d\n\n",number);     //value of number does not change due to call by value
                                        

    _Areasquare(&number);                              // value of number changes due to call by referance
    printf("The value of number is %d\n",number);
}

void Areasquare(int num)                           //value of number does not change due to call by value
                                       
{
    
    num=num*num;
    printf("Area of square is  %d\n",num);
}

void _Areasquare(int *numb)                          // value of number changes due to call by referance
{

    *numb=(*numb)*(*numb);
    printf("Area of square is  %d\n",*numb);
}


