/*
Structures-->A collection of values of different data types

SYNTAX:
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
*/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    // s1.name={"rohit"}   // name[] can be changed
    strcpy(s1.name,"Rohit");
    s1.roll=104;
    s1.cgpa=9.8;
    printf ("name of student s1 is %s\n",s1.name);
    printf ("roll no. of student s1 is %d\n",s1.roll);
    printf ("cgpa of student s1 is %f\n\n",s1.cgpa);
    //Structres stores data in contiguous location
    /*
              name        roll         cgpa
adress       [2010]      [2110]       [2114]
    */

   //Array of Structures
   struct student ECE[100];
   strcpy(ECE[0].name,"Rohan");
   ECE[0].roll=1001;
   ECE[0].cgpa=8.2;
    printf ("name of student ECE[0] is %s\n",ECE[0].name);
    printf ("roll no. of student ECE[0] is %d\n",ECE[0].roll);
    printf ("cgpa of student  ECE[0] is %f\n\n",ECE[0].cgpa);
    //Initializing Structures
    struct student s01 ={"Manoj",1,7.6};
     printf ("name of student s01 is %s\n",s01.name);
    printf ("roll no. of student s01 is %d\n",s01.roll);
    printf ("cgpa of student  s01 is %f\n\n",s01.cgpa);
    //Pointer to structures
    struct student *ptr =&s01;
    printf ("name of student s01 is %s\n",(*ptr).name);
    printf ("roll no. of student s01 is %d\n",(*ptr).roll);
    printf ("cgpa of student  s01 is %f\n\n",(*ptr).cgpa);
    //Arrow Operator
    printf ("name of student s01 is %s\n",ptr->name);
    printf ("roll no. of student s01 is %d\n",ptr->roll);
    printf ("cgpa of student  s01 is %f\n\n",ptr->cgpa);
}