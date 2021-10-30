#include <stdio.h>
int MAX(int,int);

int main()
{
    int num1,num2,max_F;
    scanf("%d %d", &num1, &num2);
    if (num1 == 0 || num2 == 0)
    {
        printf("ERROR");
    }
    else
    {
        max_F=MAX(num1,num2);
        printf("最大公因數為:%d",max_F);
        return 0;
    }
}

int MAX(int num1, int num2)
{
    int max_F;
    if (num1>num2)
    {
        int m = num1;
        num1=num2;
        num2=m;
    }
    for (int i = 1; i < num1+1; i++)
    {
        if (num1 % i == 0 &&  num2 % i == 0 )
        {
            max_F = i;
        }
    }

    return max_F;
}