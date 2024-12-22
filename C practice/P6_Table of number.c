#include<stdio.h>
void PrintTable(int n)
{
    for(int i = 1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
} 
int main()
{
    int num1;
    printf("Enter the number\n");
    scanf("%d",&num1);
    printf("The table of %d is \n",num1);
    PrintTable(num1);
    return 0;
}