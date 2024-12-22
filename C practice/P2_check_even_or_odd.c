#include<stdio.h>
int main()
{
    float number;
    //Write a program to check a number is divisible by 2 or not
    printf("Enter the number\n");
    scanf("%f",&number);
    int c=(int)number;
    printf("if true then print 1 otherwise 0 \n%d",c%2==0);
    if(c % 2==0)
    {
        printf("\nthis number is divisible by 2 i.e number is even \n");
    }
    else
    {
        printf("Number is not divisible by 2 i.e number is odd \n");
    }
}