#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter the number\n");
        scanf("%d",&n);
        printf("Your number is %d\n",n);
        if(n%2==0){continue;}                 // break use to exit the loop.
        if(n%2!=0)
        {
            printf("you can not print 0 ");  // cotinue use to skip that prcosses of loop
        }           
        break;
    }
    while(1);
    printf("Thank you\n");
}