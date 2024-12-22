#include<stdio.h>
int main()
{
    //for square
    float side;
    printf("Enter the side of square in metre\n");
    scanf("%f",&side);
    printf("Area of square is %f metre squares \n",side*side);
    //for circle
    float radius;
    printf("Enter radius of circle in metre\n");
    scanf("%f",&radius);
    printf("Area of circle is %f in metres\n",3.14*radius*radius);
   return 0;
}