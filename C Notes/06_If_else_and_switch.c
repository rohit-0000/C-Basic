#include<stdio.h>
int main()
{
    //if else
    int age;
    printf("Enter Your Age\n");
    scanf("%d",&age);
    if(age<=0)
    {
       printf("you are not take birth till now.\n");
    }
    else if(age<18)
    {
         printf("you are child");
    }
    else
    {
        printf("You are adult\n");
        printf("You can vote.\n");
        printf("You can drive.\n");
    }
    //Ternary Operator

    age>=18?printf("Adult\n"):printf("not adult\n child");
    
    // switch 
    int day;
    printf("Enter the day num i.e->1 for monday,2 for tuesday\n ");
    scanf("%d",&day);
    switch(day)
    {
    case 1 :
        printf("Day is monday\n");
        break;
    case 2 :
        printf("Day is tuesday\n");
        break;
    case 3:
        printf("Day is wednesday\n");
        break;
    case 4 :
        printf("Day is Thrusday\n");
        break;
    case 5:
        printf("Day is Friday\n");
        break;
    case 6:
        printf("Day is Saturday\n");
        break;
    case 7:
        printf("Day is Sunday\n");
        break;
    default:
    printf("Enter a valid number between 1 to 7");
    }
}