// Array as functinal argument
#include <stdio.h>
void printnumber(int arr[],int n);
// void printnumber(int *arr,int n);//same as above line
int main()
{
    int arr[]={45,55,67,76};

    printf("The value of array is ");
    
    printnumber(arr,4);
    }
// void printnumber(int *arr,int n)    //same as below line
void printnumber(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}