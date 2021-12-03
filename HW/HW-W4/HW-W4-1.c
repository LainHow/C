#include <stdio.h>

int main()
{
  /* 
  令32的3進位制為{ _ , _ , _ , _ } 
  32 / 3 = 10 ... 2  -> 32 = 3*10 + 2                               將餘數存入陣列:{ 2, _ , _ , _  }
  10 / 3 = 3 ... 1   -> 32 = 3*(3*3 + 1) + 2                        將餘數存入陣列:{ 2, 1 , _ , _  }
  3 / 3 = 1 ... 0    -> 32 = 3*3*(3*1 + 0) + 3*1 + 2                將餘數存入陣列:{ 2, 1 , 0 , _  }
  1 / 3 = 0 ... 1    -> 32 = 3*3*3*(3*0 + 1) + 3*3*0 + 3*1 + 2      將餘數存入陣列:{ 2, 1 , 0 , 1  }
  32 = 0*3*3*3*3 + 1*3*3*3 + 0*3*3 + 1*3 + 2*1    -> 1012(3進位)  ==陣列的相反 
  求n的x進位:
  n/x的餘數存入陣列
  商數繼續/x,直至商數為0
  */
   
   
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
  /* 將陣列反向輸出 */
   for (int i = count-1; i > -1; i--)
   {
       printf("%d",arr[i]);
   }
   
   



}