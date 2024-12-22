// #include<stdio.h>
// void printstring(char arr[]);
// int main()
// {
//     //Strings:
//     /*
//     A character array terminated by a'\0'(null character)
//     -null character denotes strings termination

//     example:               */
//     // char name[]={"rohit"};
//     char name[] ={'r','o','h','i','t','\0'};
//     printstring(name);
//     //sting format specifier --> " %s"
//     printf("your name is : \n%s",name);
// }
// void printstring(char arr[])
// {
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         printf("%c",arr[i]);
//     }
// }

// Q.:ask the user to enter their fistname & print it back to them.




#include<stdio.h>
int main()
{
    char name[50];
    printf("enter your name\n");
    scanf("%s",name);// scanf doesn't scan name after space.i.e sentence Or multiple words.
    printf("your name is :- %s\n",name);
}
// to compare string we use (strcmp(string , string )==0
                        //   (strcmp(string , string )<0) for less than
                        //   (strcmp(string , string )==0) for greator than
