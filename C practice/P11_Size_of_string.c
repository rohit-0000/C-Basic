#include<stdio.h>
int main()
{
    // make a program that input user's name & print its length .
    // char user_name[100];
    char *user_name;
    printf("Enter user name\n");
    fgets(user_name,100,stdin);
    int sum =0,i;
    for(i=0;user_name[i]!='\0';i++)
    {
        sum++;
    }
    printf("Size of your name is %d",sum-1);
    return 0;
}