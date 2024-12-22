//make a program to input student information from a user & enter it to a file.
#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("P17_test.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name age and cgpa\n");
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%f",&cgpa);
    fprintf(fptr,"name=%s\n",name);
    fprintf(fptr,"age=%d\n",age);
    fprintf(fptr,"age=%f",cgpa);
    fclose(fptr);

    return 0;
}