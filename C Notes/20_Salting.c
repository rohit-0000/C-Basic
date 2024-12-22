#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    //salting:it is used to protect our password from hacker by adding something in it.
    char password[100];
    printf("Enter your password\n");
    scanf("%s",password);
    salting(password);
    return 0;
}
void salting(char password[])
{
    char salt[]={"123"};
    char new_password[200];
    strcpy(new_password,password);
    strcat(new_password,salt);
    printf("new password = %s\n",new_password);
}