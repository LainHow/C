#include<stdio.h>
#include<ctype.h>
#include<math.h>

/*
1.使用者Input一個數值num(可為浮點數或整數,所以用%f儲存)
2.設定一個布靈值(x=1),若num是不為2的質數則x=1(TRUE),反之則x=0(FALSE)
3.判斷num是否為整數 https://www.itread01.com/content/1547692034.html
4.判定num是否被 2到(根號num) 的整數整除
5.若x依然為1,則x是質數
*/
int main(){
    float num ;
    int x = 1;
    printf("請輸入一個數值D:");
    scanf("%f",&num);
    int c =(int)num ;
      
    if ( num-c == 0)
    {
        printf("D是一個整數\n");
        for (int i = 2; i <= sqrt(num); i++)
        {
           
            
            if (c % i == 0)
            {   
                printf("D不是質數\n");
                printf("D可以被1,%d,%d整除",i,c);
                x = 0;
                break;
            }
        }
    }
    else
    {
        x = 0;
        printf("D不是一個整數\n");
    }
    if (x==1)
    {
        printf("D是質數\n");
    }
    return 0;
}