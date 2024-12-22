#include<stdio.h>
void chpresent(char str[],char ch);
int main()
{
    char str[]={"Helloworld"};
    char ch='o';
    chpresent(str,ch);
    return 0;
}
void chpresent(char str[],char ch)
{
    for(int i=0;str[i]  !='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("character is present \n");
            return ;
        }
    }
            printf("character is not present\n");
}