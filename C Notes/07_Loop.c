#include<stdio.h>
int main()
{
    //Loop Control Instruction:
    /*--> To reapeat some parts of the program
        Types:=
        1. for
        2. while
        3. do while

    Special things:
    >Increment Operator->(a++)
    >Decrement Operator->(a--)
    >loop can be float or even character
    >Infinite Loop
*/

// for loop
printf("0 to 10 from for loop\n");
 for(int i=0;i<=10;i++)   //print 1 to 10 from for loop
 {
    printf("%d\n",i);
 }
 // while loop             //print 1 to 10 from while loop
  int i=0;
  printf("0 to 10 from while loop");
  while(i<=10)
  {
    printf("%d\n",i);
    i++;
  }
// do while loop
    int j=0;
    printf("1 to 10 from do_while loop");
    do{
        printf("%d\n",j);
        j++;
    }
    while(j<=10);
}