//Write a program to write all the odd numbers from 1 to n in a file.
#include<stdio.h>
int main()
{
     int n;
     printf("Enter the num\n");
     scanf("%d",&n);
     FILE*fptr;
     fptr=fopen("P18_Odd.txt","w");
    //  char string[]={"odd no. b/w 1 to %d is",n};
     fprintf(fptr,"%s","odd no b/w 1 to ");
     fprintf(fptr,"%d",n);
     fprintf(fptr,"%s"," is : ");
     for(int i=0;i<=n;i++)
     {
        if(i%2!=0){fprintf(fptr,"%d\t",i);}
     }
    return 0;
}