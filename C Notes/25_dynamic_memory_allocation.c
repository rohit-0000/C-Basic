/*
//DYNAMIC MEMORY ALLOCATION
It is a way to allocate memory to a data structure during the runtime.
-We need some functiions to allocate & free memory dynamically.
//FUNCTION FOR DMA
a> malloc()-> memory allocation
b> calloc()->continuos allocation
c> free()
d> realloc()-> re-allocation

notes:#include<stdlib.h>

// malloc():->memory allocation
    takes number of bytes to be allocated & returns a pointer of type void
    
    ptr = (int*)malloc(5*sizeof(int));


*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));  //it allocate the memory during run time
    ptr[0]=45;
    ptr[1]=98;
    ptr[2]=44;
    ptr[3]=65;
    ptr[4]=56;
    for(int i =0;i<5;i++)
    {
    printf("The value of ptr[%d] is %d\n",i,ptr[i]);
    }

printf("\n");
/*
// calloc()-->continuos allocation
    - intialized with 0
    - ptr = (int*)calloc(5,sizeof(int));

// free() :->it is used free the memory of dynamically allocated
    - free(ptr);
*/
int *ptr1;
    ptr1=(int*)malloc(5*sizeof(int));  

    for(int i =0;i<5;i++)                       // it allocate random memory
    {
    printf("The value of ptr1[%d] is %d\n",i,ptr1[i]);
    }
    
printf("\n");

    int *ptr2;
    ptr2=(int*)calloc(5,sizeof(int));  

    for(int i =0;i<5;i++)                       // it allocate continuous memory
    {
    printf("The value of ptr2[%d] is %d\n",i,ptr2[i]);
    }
    free(ptr2);

printf("\n");

    ptr2=(int*)malloc(2*sizeof(int));  
    for(int i =0;i<2;i++)                       // it allocate continuous memory
    {
    printf("The value of ptr2[%d] is %d\n",i,ptr2[i]);
    }

printf("\n");
/*
// realloc() :->reallocate (increase or decrease) memory using the same pointer & size.

    ptr = realloc(ptr, new_size);
*/
    int *ptr3;
    ptr3=(int*)(calloc(5,sizeof(int)));
    printf("Enter the 5 num:- ");
    for(int i = 0;i < 5; i++)
    {
        scanf("%d",&ptr3[i]);
    }
    
    for(int i = 0;i < 5; i++)
    {
        printf("the value of ptr3[%d] is %d\n",i,ptr3[i]);
    }

    realloc(ptr3,8);
    printf("Enter the 8 num");
    for(int i = 0;i < 8; i++)
    {
        scanf("%d",&ptr3[i]);
    }  
        for(int i = 0;i < 8; i++)
    {
        printf("the value of ptr3[%d] is %d\n",i,ptr3[i]);
    } 
    free(ptr3);
}