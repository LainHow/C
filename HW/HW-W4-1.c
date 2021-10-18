#include <stdio.h>

int main()
{
   int n,x ,count;
   scanf("%d %d", &n , &x);
   int arr[100];
   count=0;

   if (x > 10)
   {
       printf("Error");
   }
   else
   {
      while (n != 0)
      {
        arr[count]= n % x;
        n = n / x;
        count=count+1;
      }
      
   }

   for (int i = count-1; i > -1; i--)
   {
       printf("%d",arr[i]);
   }
   
   



}