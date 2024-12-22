// Write a program to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *price;
     price=(int*)malloc(5*sizeof(int));
     price[0]=598;
     price[1]=699;
     price[2]=499;
     price[3]=449;
     price[4]=557;
     for(int i= 0; i<5;i++)
     {
        printf("the value of price[%d] is %d\n",i,price[i]);
     }
    return 0;
}