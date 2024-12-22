#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    //Swap because we did't call function.
//     int a=5,b=6;
//     int c=a;
//     a=b;
//     b=c;
//     printf("value of a= %d\n",a);
//     printf("value of a= %d\n",b);
    int a=5,b=6;
    swap(&a,&b);
    printf("value of a= %d\n",a);
    printf("value of a= %d\n",b);           // swap due to call by reference
    return 0;
}
void swap(int *a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}