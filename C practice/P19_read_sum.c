#include<stdio.h>
int main()
{
     FILE*fptr;
     int a,b;
     fptr=fopen("P19.txt","r");
     fscanf(fptr,"%d",&a);
     fscanf(fptr,"%d",&b);
     fclose(fptr);
     fptr=fopen("P19.txt","w");
    //  fptr=fopen("P19.txt","a");
     fprintf(fptr,"%s","sum = ");
     fprintf(fptr,"%d",a+b);

    return 0;
}