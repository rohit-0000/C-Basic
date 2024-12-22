#include<stdio.h>
int main()
{
    //ARRAYS:-> Collection of similar data types stored at contigous memory locations
    // int price[]={34,56,98,67};   //Both are valid
    int price[4]={34,56,98,67};
    printf("The value of price 0 = %d\n",price[0]);
    printf("The value of price 1 = %d\n",price[1]);
    printf("The value of price 2 = %d\n",price[2]);
    printf("The value of price 3 = %d\n\n",price[3]);

    //Pointer Arithmrtic:
    //Pointer can be incremented(++) & decremented(--)

    int *ptr=&price;
    /*Ptr++; // means change the pointer location to next data types of array 
     i.e for eg ->
     int arr[3]={23,45,67}
     int *ptrr = arr;
     ptrr++; 
     here arr pointes arr[0] i.e 23 -->ptrr++ changes the pointer location by (+4 byte(because int has 4 bytes storage))and finally point arr[1] i.e->45.
    */
    

    printf("The value of price 0 = %d\n",*ptr);
    printf("The value of price 1 = %d\n",*++ptr);
    printf("The value of price 2 = %d\n",*++ptr);
    printf("The value of price 3 = %d\n\n",*++ptr);

    printf("The value of price 3 = %d\n",*ptr);
    
    ptr--;
    printf("The value of price 1 = %u\n",ptr);                 //
    ptr--;                                                    // here difference in all three in adress in unsigned int is 4 because int has 4bytes
    printf("The value of price 1 = %u\n",ptr);                //
    ptr--;
    printf("The value of price 1 = %u\n\n",ptr);                //

    // pointer arithmetic   
/*
    - We can also substract one pointer from another
    - we can also compare 2 pointers.
    - We can not substract or compare two different data types.

*/ 
    int age1=22;
    int age2=26;
    int age3=26;
    int *ptr1=&age1;
    int *ptr2=&age2;
    int *ptr3=&age3;
    printf("Difference b/w ptr1 and ptr2 = %u\n",ptr1-ptr2);   // difference is 1 because ptr2 adress is just after ptr1;  
    printf("Difference b/w ptr1 & ptr 3 = %u\n\n",ptr1-ptr3);     //difference is 2 because ptr3 adress is just after ptr2 and ptr2 is after pttr1, hence difference is 2;  
    ptr1=&age2;
    printf("Difference b/w ptr1 and ptr2 = %u\n",ptr1-ptr2);   // difference is 0 because ptr1 store samew adress as ptr2 {in line 42};  
    printf("Comparision b/w ptr1 & ptr 2 = %u\n",ptr1==ptr2);  // 1 means true ,0 means false
    printf("Comparision b/w ptr1 & ptr 3 = %u\n\n",ptr1==ptr3);

   // Array is a pointer.
    int age[]={36,56,78,98,9};
    int *Ptr=&age;
    printf("adress of age[0] is %p\n ",&age[0]);
    printf("adress of age[0] is %p\n ",Ptr); 

    printf("adress of age[1] is %p\n ",++Ptr);      // both point same adress.
    printf("adress of age[1] is %p\n ",&age[1]);      // both point same adress.
    
return 0;
}