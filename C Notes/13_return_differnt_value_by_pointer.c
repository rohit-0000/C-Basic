#include<stdio.h>
void dowork(int a,int b,int*sum,int*prod,int*divide);
int main()
{
 int a= 44, b=2;  
 int sum,prod,divide;
 dowork(a,b,&sum,&prod,&divide);
 printf("sum= %d ,product = %d ,divide = %d\n",sum,prod,divide);
}

void dowork(int a,int b,int*sum,int*prod,int*divide)
{
    *sum=a+b;
    *prod=a*b;
    *divide=a/b;
}