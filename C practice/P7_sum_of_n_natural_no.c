#include<stdio.h>

int sum(int num);
void setdata();
int main()
{
int x;
printf("Enter the number :)\n");
scanf("%d",&x);
printf("Sum of first %d natural number is %d\n",x,sum(x));
}

int sum(int num)
{
    
    if(num==1){return 1;}
    return sum(num-1)+num;
}

void setdata()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
}