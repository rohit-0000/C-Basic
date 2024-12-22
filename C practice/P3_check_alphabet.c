#include<stdio.h>
int main()
{
    // Write a program to find if a character entered by user is upper case or not.
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
    {
        printf("%c is a Upper case Letter of Alphabet\n",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("%c is a Lower case Letter of Alphabet\n",ch);
    }
    else
    {
        printf("%c is not englisg letter\n",ch);
    }
} 