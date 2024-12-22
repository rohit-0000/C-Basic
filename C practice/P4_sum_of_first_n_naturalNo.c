#include<stdio.h>
int main()
{
    // print sum of first n natural numbers.
    // and ,print them in reverse.
    int n,sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Reverese number is \n");
    for(int i=n,j=1;i>0,j<n;i--,j++)
    {
        sum=sum+i;
        printf("%i\n",i);
        printf("%i\n",j);
    }
    printf("Sum of 1st %d natural number is %d",n,sum);
}