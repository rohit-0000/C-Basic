// #include<stdio.h>
// int main()
// {
//     int n,factorial=1;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//     for(int i =1;i<=n;i++)
//     {
//         factorial=factorial*i;
//     }
//     printf("The value of %d!= %d\n",n,factorial);
//     return 0;
// }
#include<stdio.h>
int factorial(int x)
{
    if(x<1){return 1;}
    return x*factorial(x-1);
}
int main()
{
    int n;
    printf("Enter the number for which you want to get factorial \n");
    scanf("%d",&n);
    printf("factorial of %d = %d",n,factorial(n));
    return 0;
}