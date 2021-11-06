#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input[1000] = {0} , m[10][10][10] = {0};
    float M[10][10] = {0},constant = 0;
    int column=0, row=0, element=0, counter1 = 0, counter2 = 0,counter3 = 0;
    gets(input);
    /*line16-37
    把輸入字串(a[i])轉成矩陣(b[counter1][counter2][counter3])
    i遞增
    遇到';' counter1++,
    遇到',' counter2++,
    沒遇到','跟';'
    就將a[i]讀入b[counter1][counter2][counter3],counter3++*/
    for ( int i = 0; i < sizeof(input); i++)
    {
        if (input[i] == ';')
        {
            counter1++;
            counter2 = 0;
            counter3 = 0;
            element++;
            continue;
        }
        else if (input[i] == ',')
        {
            counter2++;
            counter3 = 0;
            element++;
            continue;
        }
        m[counter1][counter2][counter3]=input[i];
        counter3++;
    }
    column = counter1;
    row = element / column;
    /*line40-46
    把b陣列中的字元轉成浮點數存入M*/
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            M[i][j] = atof(m[i][j]);
        }
    }
    /*line50-71
    將M轉為擴展矩陣
    */
    if (row != column)
    {
        printf("此矩陣無反矩陣");
        return 0;
    }
    else
    {
        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (i==j)
                {
                    M[i][column+j]=1.0;
                }
                else
                {
                    M[i][column+j]=0.0;
                }    
            }            
        }        
    }
    /*line79-93
    將M變成上三角矩陣                                                            j=1 -> c=4/1=4                              j=2 -> c=7/1=7
    若要將每一列的第一項都變為0(除了第1列)                  1 2 3 ->i=0            1 2 3               1  2  3               1  2  3           1   2   3
    將第一列設為指定列(i)                                  4 5 6       目標列[1]->4 5 6            -> 0 -3 -6               0 -3 -6           0  -3  -6
    對於目標列先找到該列的倍數c = M[j][i] / M[i][i]        7 8 9                  7 8 9               7  8  9     目標列[2]->7  8  9        -> 0  -6 -12 
    目標列中第k個元素(M[j][k])減去 指定列第k個元素(M[i][k])*c                                                                            
    */
    for (int i = 0; i < column; i++)
    {
        for (int j = i+1; j < column; j++)
        {
            if (M[i][i] == 0)
            {
                break;
            }
            constant = M[j][i] / M[i][i];
            for ( int k = 0; k < column*2; k++)
            {
                M[j][k] = M[j][k] - M[i][k]*constant;
            }
        }
    }
    /*line97-108
    從最後一列依序往上減
    */
    for (int i = column-1; i >= 0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {            
            constant=M[j][i] / M[i][i];
            for (int k = column * 2 - 1; k >= 0; k--)
            {
                M[j][k] = M[j][k] - M[i][k]*constant;
                
            }
        }
    }
    /*line113-120
    將第i列的每個元素除以c(M[i][i])
    讓M[i][i]變回1
    */
    for (int i = 0; i < column; i++)
    {
        constant = M[i][i];
        for (int j = 0; j < column * 2; j++)
        {
            M[i][j] = M[i][j] / constant;
        }
    }
    /*輸出矩陣*/
    for (int i = 0; i < column; i++)
    {
        for (int j = column; j < column * 2; j++)
        {
            if (j == column)
            {
                printf("\n%.1f\t", M[i][j]);
            }
            else
            {
                printf("%.1f\t", M[i][j]);
            }
        }
    }
    return 0;
}