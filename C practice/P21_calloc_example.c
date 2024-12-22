// Write a program to allocate memory of size n, where n is entered by the user.
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     printf("Enter the num :- ");
     scanf("%d",&n);
     int *ptr;
     ptr=(int*)calloc(n,sizeof(int));
     ptr[0]=9;
     for(int i=0;i<n;i++)
     {
        printf("%d\n",ptr[i]);
     }
    return 0;
}