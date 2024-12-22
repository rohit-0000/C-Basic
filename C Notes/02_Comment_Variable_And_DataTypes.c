#include<stdio.h>
int main()
{
//------------------------COMMENTS------------------------------------------------------------------------
    //-> Lines that are not part of program
    // single line comment :- // it is single line comment
    // Multi Line Comment  :-    { /* it is multi line coment
    //                             */ }
//-------------------------VARIABLE-----------------------------------------------------------------------
    // variables :- Variable is the name of a memory location which stores some data.
    // here  number, age , price is a variable
    int number;
    int Age;
    int price;
    /*
    Rules:
    1->Variables are case sensitive.
    2->1st character is alphabet or'_'.
    3->no comma/blank space.
    4->No other symbol other than '_'.
    */
//------------------------------DATA TYPES------------------------------------------------------------------
    int age =22;
    float pi =3.14;                          // size->4 bytes
    char percentage ='%';                     
    double long_decimal=6.976;               //size-> 8 bytes
    long double very_long_decimal=6.9978;   //size->10 bytes
    printf("Age is %d\n",age);
    printf("Symbol of percentage  is %c\n",percentage);
    printf("The value of pie is %f\n",pi);
    printf("The value of long decimal is %f\n",long_decimal);
    
//------------------------------------------------------------------------------------------------
/*
Keywords:
Reserved words that have special meaning to compiler-->Total 32 reserved keyword in C language.
1. auto          2. double     3. int         4. struct
5. break         6. else       7. long        8. switch
9. case         10. enum      11.register   12.typedef
13. char        14. extern    15. return    16. union
17. continue    18. for       19.signed     20. void
21. do          22. if        23. static    24. while
25. default     26. goto      27. sizeof    28. volatile
29. const       30 float      31. short     32. unsigned
*/
return 0;
}