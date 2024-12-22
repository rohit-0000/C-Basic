// #include <stdio.h>
// int fib(int x);
// int main()
// {
//    int num, i = 0;
//    printf("Enter The num\n");
//    scanf("%d", &num);
//    printf("Fibbonacci Series is : \n");
//    for (i = 0; i < num; i++)
//    {
//       printf(" %d\t", fib(i));
//    }
//    return 0;
// }

// int fib(int x)
// {
//    if ((x == 1) || (x == 0))
//    {
//       return x;
//    }
//    else
//    {
//       return (fib(x - 1) + fib(x - 2));
//    }
// }

#include <stdio.h>
int main()
{
   int num, i, nextterm = 0, t1 = 0, t2 = 1;
   printf("Enter the number for fibbonacci series \n  ");
   scanf("%d", &num);
   printf("Fibbonacci series\n");

   for (int i = 1; i < num-1; i++)
   {
      if (i == 1)
      {
         printf("%d\t", t1);
      }
      if (i == 2)
      {
         printf("%d\t", t2);
      }
      nextterm = t1 + t2;
      t1 = t2;
      t2 = nextterm;
      printf("%d\t", nextterm);
   }
   return 0;
}

// #include <stdio.h>
// int main()
// {
//    int num;
//    printf("Enter the number for fibbonacci series \n  ");
//    scanf("%d", &num);
//    printf("Fibbonacci series\n");
//    if (num >= 2)
//    {
//       printf("%d\t%d\t", 0,1);
//    }
//    else if (num >= 1)
//    {
//       printf("%d\t", 0);
//    }
//    int fib[num];
//    fib[0]=0;
//    fib[1]=1;
//    for (int i = 2; i < num; i++)
//    {
//       fib[i] = fib[i - 1] + fib[i - 2];
//       printf("%d\t", fib[i]);
//    }
// }