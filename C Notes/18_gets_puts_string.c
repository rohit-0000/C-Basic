#include<stdio.h>
int main()
{
 // String Functions:
 /*
    gets(str)-->Dangerous and Outdated
        it takes input a string (even multiword)
    
    puts(str)--> 
        it give  Output a string

    fgets(str,n,file)--> file=stdin(means standard input)
        -it takes input a string
        -stop when n-1 chars input or new line entered
 
 */
    char string_[100];
    printf("Enter the word or line\n");
    // gets(string_);
    fgets(string_,100,stdin);
    printf("your word or line is:\n");
    puts( string_);


    /*
    STRINGS USING POINTERS
    Store string in memory & the assigned address is stored in the char pointer 
    */
    char name[]={"rohit"};     // cann't be reinitialised 
    char *Name="roahn";         //can be reinitialised
    printf("name=%s\n",name);
    printf("before changed Name=%s\n",Name);
    Name="rohit";
    printf("After changed Name=%s\n",Name);
    
    
}

