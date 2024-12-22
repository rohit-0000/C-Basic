#include<stdio.h>
void getdata(char str[]);
int main()
{
    char str[100];
    char ch;
    int i=0;
    printf("Enter your string\n");
    while(ch!='\n')
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf(" Your string is :");
    getdata(str);
 
    return 0;
}

void getdata(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
    printf("%c",str[i]);
    }
}