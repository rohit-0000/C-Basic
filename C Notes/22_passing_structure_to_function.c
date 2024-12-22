#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void getdata(struct student s1);
int main()
{
 struct student s1={"rohit",1,9.8};
 s1.roll=1001;    //it can change the value .
 printf ("roll no. of student s1 is %d\n\n",s1.roll);
 getdata(s1);
}
void getdata(struct student s1)
{
    printf("Student's Information\n");
    printf ("name of student s1 is %s\n",s1.name);
    printf ("roll no. of student s1 is %d\n",s1.roll);
    printf ("cgpa of student s1 is %f\n\n",s1.cgpa);
    s1.roll=1002;   //didn't change the value due to call by value
}