#include<stdio.h>
int main()
{
    // pointer
    int age = 22;
    int *ptr = &age;
    int _ptr = *ptr;
    //Print Adress 
    printf("%u\n",&age);              //("%u")->for unsigned int            
    printf("%p\n",&age);              //("%p")->for adress
    printf("%p\n", ptr);              //adress of age
    printf("%p\n\n",&_ptr);             //adress of *ptr
    
    //Print value       
    printf("%d\n",age);              //("%d")->for int
    printf("%d\n",_ptr);
    printf("%d\n",*ptr);
    printf("%d\n\n",*(&age));

    // pointer to pointer
    int Price=100;
    int *Ptr=&Price;
    int **Pptr=&Ptr;
    printf("%d\n",Price);
    printf("%d\n",*(&Price));
    printf("%d\n",*Ptr);
    printf("%d\n",**(&Ptr));
    printf("%d\n\n",**Pptr);       //value of price

    printf("%p\n",Ptr);
    printf("%p\n",&Price);           //adress of price
    printf("%p\n",&Ptr);
    printf("%p\n",Pptr);          //adress of ptr
}