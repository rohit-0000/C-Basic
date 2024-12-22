#include<stdio.h>
int main()
{
    // multidimentional array is just like matrx
    //we have to stored marks of different student of different class
    //                  Ram(0) ,      rohan(1)  ,  krishna(3)     
    int marks[3][4]={{12,17,18,20},{19,14,13,17},{11,18,9,8}};
    printf("ram mathmarks = %d\n",marks[0][0]);
    printf("ram sciencemarks = %d\n",marks[0][1]);
    printf("ram sanskritmarks = %d\n",marks[0][2]);
    printf("ram hindimarks = %d\n\n",marks[0][3]);
    
    printf("rohan mathmarks = %d\n",marks[1][0]);
    printf("rohan sciencemarks = %d\n",marks[1][1]);
    printf("rohan sanskritmarks = %d\n",marks[1][2]);
    printf("rohan hindimarks = %d\n\n",marks[1][3]);

    printf("krishna mathmarks = %d\n",marks[2][0]);
    printf("krishna sciencemarks = %d\n",marks[2][1]);
    printf("krishna sanskritmarks = %d\n",marks[2][2]);
    printf("krishna hindimarks = %d\n\n",marks[2][3]);
}