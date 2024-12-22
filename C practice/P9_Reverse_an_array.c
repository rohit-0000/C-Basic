#include<stdio.h>
void reverse(int arr[],int n);
int main()
{
   int arr[]={46,56,78,90,87,56};
   reverse(arr,6);

}
void reverse(int arr[],int n)
{
   
   for(int i=0;i<n/2;i++)
   {
      int c= arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=c;

   }
  for( int i=0;i<n;i++)
   {
      printf("%d\t",arr[i]);

   }
}
