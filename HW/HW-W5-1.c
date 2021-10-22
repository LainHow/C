#include<stdio.h>
/*
輸入身高體重計算BMI
用if跟else if分類
*/


int main()
{
    float h , w , BMI;
    printf("輸入身高(公尺):");
    scanf("%f",&h);
    printf("\n輸入體重(公斤):");
    scanf("%f",&w);
    BMI = w / ( h * h );

    if ( BMI < 18.5)
    {
        printf("BMI值為:%.2f  體重過輕",BMI);
    }
    else if (BMI < 24)
    {
        printf("BMI值為:%.2f  正常範圍",BMI);
    }
    else if (BMI < 27)
    {
        printf("BMI值為:%.2f  異常範圍(過重)",BMI);
    }
    else if (BMI < 30)
    {
        printf("BMI值為:%.2f , 異常範圍(輕度肥胖)",BMI);
    }
    else if (BMI < 35)
    {
        printf("BMI值為:%.2f , 異常範圍(中度肥胖)",BMI);
    }
    else
    {
        printf("BMI值為:%.2f , 異常範圍(重度肥胖)",BMI);
    }

    
}