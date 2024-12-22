#include<stdio.h>
void storedata(int arr[][10],int n,int m);
int main()
{
    int arr[2][10];
    storedata(arr,0,2);
    storedata(arr,1,3);
      printf("table of 2 \n");
     for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[0][i]);
    }
    printf("\n\ntable of 3 \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[1][i]);
    }
}


void storedata(int arr[][10],int n,int m)
{
    for(int i=0;i<10;i++)
    {
        arr[n][i]=m*(i+1);
    }
}
