//File IO
/*
Ram-->Volatile
Hard disk-->non-volatile

FILE-container in a storage device to store data

- RAM is volatile
- Contents are lost when programer terminates
- Files are used to persist the data

// Operation on Files
Create a File
Open a File
Close a File
Read from a File
Write in a File

// Types of Files
    Text Files           Binary Files
   -textual data         -binary data
    eg-.txt,.c        eg- .exe,.mp3,.jpg

// Files Pointer
FILE is a (hidden)structure that needs to be created for opening a file
A FILE ptr that points to this structure & is used to access the file.

FILE*fptr;

// Opening a File
    FILES *fptr;
    fptr=fopen("filename",mode);

// Closing a File
    fclose(fptr);
// File Opening Modes
    "r"     open to read
    "rb"    open to read in binary
    "w"     open to write(i.e write after deleting)
    "wb"    open to write in binary
    "a"     open to append(i.e write without deleting)

//Reading from a file
    char ch;
    fscanf(fptr,%c,&ch);
//Writting to a file
    char ch='A';
    fprintf(fptr,"%c",ch);
//Read & Write a char
    fgetc(fptr)--> used to read a character
    fputc('A',fptr)--> used to write a character
//EOF(End of File)-->fgetc EOF to show that the file has ended
*/
#include<stdio.h>
int main()
{
 FILE *fptr;
 fptr = fopen("newText.txt","r");//if file not exist then return null.
 if (fptr==NULL) 
 {
    printf("file does not exit\n");
 }
 else
 {
    fclose(fptr);
 }

 FILE *fptr1;
 fptr1 =fopen("24_Test.txt","r");

 char ch;
 int ch1;
    fscanf(fptr1,"%c",&ch);
    printf("character = %c\n",ch); 
    fscanf(fptr1,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr1,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr1,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr1,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr1,"%d",&ch1);
    printf("character = %d\n",ch1);    
    fscanf(fptr1,"%d",&ch1);
    printf("character = %d\n",ch1);
    fscanf(fptr1,"%d",&ch1);
    printf("character = %d\n",ch1);

    fclose(fptr1);
    FILE*fptr2;
    fptr2=fopen("24_Test1.txt","w");  //if file doesnot exit then create a file.
    // fptr2=fopen("24_Test1.txt","a"); 
    fprintf(fptr2,"%c",'M');
    fprintf(fptr2,"%c",'A');
    fprintf(fptr2,"%c",'N');
    fprintf(fptr2,"%c",'G');
    fprintf(fptr2,"%c",'O');
    fclose(fptr);

    FILE*fptr3;
    fptr3 = fopen("24_Test2.txt","r");

    printf("%c",fgetc(fptr3));
    printf("%c",fgetc(fptr3));
    printf("%c",fgetc(fptr3));
    printf("%c",fgetc(fptr3));
    printf("%c",fgetc(fptr3));

    fclose(fptr3);
    
    FILE*fptr4;
    fptr4 = fopen("24_Test3.txt","w");
    fputc('M',fptr4);
    fputc('A',fptr4);
    fputc('N',fptr4);
    fputc('G',fptr4);
    fputc('O',fptr4);
    fclose(fptr4);
    printf("\n");

    FILE *fptr5;
    fptr5=fopen("24_Test4.txt","r");
    char ch2;
    ch2=fgetc(fptr5);
    while(ch2!=EOF)
    {
        printf("%c",ch2);
        ch2=fgetc(fptr5);
    }
    printf("\n");
    fclose(fptr5);

 return 0;
}