#include<stdio.h>
#include<string.h>
int main()
{
    //Standard Library functions---> #include <string.h>
    /*
    1. strlen(str);->count number of characters excluding'\0'
    2. strcpy(newstr,oldstr):->Copy the value of old string to new string
    3. strcat(firststr,secstr):->Concantenates (i.e add) first string with second string without any space
    4. strcmp(firststr,secondstr):-> Compare 2 string & return a value
        0->string equal
        positive->first>second(ASCII)
        Negative->first<second(ASCII)
    */
    char str[]={"hello bro"};
    printf("length of string is is :- %d\n ",strlen(str));

    char str1[]={"old string "};
    char str2[100];
    strcpy(str2,str1);
    printf("After copy old string to new string :- %s\n",str2);    // old string

    char string1[]={"first string"};
    char string2[]={"second string"};
    strcat(string1,string2);
    printf("After concatenates first string to second string:\n%s",string1);  // result:- old string old string

    char firststr[]={"apple"};
    char secstr[]={"banana"};
    printf("\ncomparision = %d\n",strcmp(firststr,secstr));
    return 0;
}