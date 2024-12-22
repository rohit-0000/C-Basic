#include<stdio.h>
int main()
{
    //Operators:
    /*
    1->Arithmetic Operators
    2->Relational Operators :
            ==          ->equal to
            >,>=        ->less than ,less than equalto
            <,<=        ->greater than, greater than equal to
            !=          ->not equal to
    */
   printf("Relational  operator\n");
   printf("4==4 is %d\n",4==4);
   printf("4< 3 is %d\n",4< 3);
   printf("3<4  is %d\n",3<4 );
   printf("4<4  is %d\n",4<4 );
   printf("4<=4 is %d\n",4<=4);
   printf("4>03 is %d\n",4>03);
   printf("3>4  is %d\n",3>4 );
   printf("4>4 is %d\n",4>4);
   printf("4>=4 is %d\n",4>=4);
   printf("4!=4 is %d\n",4!=4);
   printf("4!=3 is %d\n",4!=3);

   /*
    3->Logical Operators :
            &&          ->And
            ||          -> Or
             !          -> Not 
    */
    printf("Logical operator\n");
    printf("3<4 && 3<5 is %d \n", 3<4 && 3<5);
    printf("3<4 && 5<4 is %d \n", 3<4 && 5<4);
    printf("3<4 && 5<4 is %d \n", 3<4 && 5<4);
    printf("3>4 && 5>4 is %d \n", 3>4 && 5>4);
    printf("3<4 && 3<5 is %d \n", 3<4 && 3<5);
    printf("!(3<4 && 3<5) is %d \n", !(3<4 && 3<5));
    printf("!(4<3 || 5<3) is %d \n", !(4<3 || 5<3));
   /*
    4->Bitwise Ooerators
    5->Assignment Operators:(=,+=,-=,*=,/=,%=)
    */
    printf("Assignment Operator\n");
    int a = 10;
    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);
   /*
    6->Assignment Operators
    7->Ternary Operator

    //Operator Precedence
        Priority             Operator
            1                    !
            2                  *,/,%
            3                   +,-
            4                 <,<=,>,>=
            5                   ==,!=
            6                    &&
            7                    ||
            8                     =
    */
   return 0;
}