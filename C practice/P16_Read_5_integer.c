#include<stdio.h>
int main()
{
    //make a program to read 5 integers from a file.
    FILE*fptr;
    fptr=fopen("P16_test.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("number = %d\n",ch);     
    fscanf(fptr,"%d",&ch);
    printf("number = %d\n",ch); 
    fscanf(fptr,"%d",&ch);
    printf("number = %d\n",ch);  
    fclose(fptr);
    return 0;
}