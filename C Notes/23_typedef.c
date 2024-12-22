#include<stdio.h>
 //typedef keyword-->Used to create alias for data types
 typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
}stu;
int main()
{
    // struct student s1={"rohit",1,9.8};
    stu s1={"rohit",1,9.8};
    printf ("name of student s1 is %s\n",s1.name);
    printf ("roll no. of student s1 is %d\n",s1.roll);
    printf ("cgpa of student s1 is %f\n\n",s1.cgpa);
}