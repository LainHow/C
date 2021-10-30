#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100]={0}, b[10][10][10]={0},c[100]={0},d[10][10][10]={0};
    float M_1[10][10]={0},M_2[10][10]={0}, M_product[10][10]={0};
    int line1=0,ele1=0,line2=0,ele2=0, row1=0,row2=0, i1=0,j1=0,k1=0,l1=0 ,i2=0,j2=0,k2=0,l2=0;
    gets(a);
    gets(c);
    /*part1 輸入轉陣列(矩陣)*/
    for ( int k1 = 0; k1 < sizeof(a); k1++)
    {
        if (a[k1] == ',')
        {
            j1++;
            l1=0;
            ele1 = ele1 + 1;
            continue;
        }
        else if (a[k1] == ';')
        {
            i1++;
            j1=0;
            l1=0;
            line1++;
            ele1 = ele1 + 1;
            continue;
        }        
        b[i1][j1][l1]=a[k1];
        l1++;
    }
    for ( int k2 = 0; k2 < sizeof(c); k2++)
    {
        if (c[k2] == ',')
        {
            j2++;
            l2=0;
            ele2 = ele2 + 1;
            continue;
        }
        else if (c[k2] == ';')
        {
            i2++;
            j2=0;
            l2=0;
            line2++;
            ele2 = ele2 + 1;
            continue;
        }
        d[i2][j2][l2]=c[k2];
        l2++;
    }

    row1= (ele1 / line1 )  ;
    row2= (ele2 / line2 )  ;

    /*part2 陣列中字元轉浮點數*/
    for (int i = 0; i < line1; i++)
    {
        for (int j = 0; j < row1; j++)
        {
            M_1[i][j] = atof(b[i][j]);
        }
    }
    for (int i = 0; i < line2; i++)
    {
        for (int j = 0; j < row2; j++)
        {
            M_2[i][j] = atof(d[i][j]);
        }
    }
    /*part3 相乘*/
    if (line1 != row2)
    {
        printf("兩矩陣不能相乘");
    }
    else
    {
        for (int i = 0; i < line1; i++)
        {
            for (int j = 0; j < row2; j++)
            {
                for (int k = 0; k < row1; k++)
                {
                    M_product[i][j] = M_product[i][j] + M_1[i][k] * M_2[k][j];
                }
            }
        }
    }
    for (int i = 0; i < line1; i++)
    {
        for (int j = 0; j < row2; j++)
        {
            if (j == 0)
            {
                printf("\n%.1f\t", M_product[i][j]);
            }
            else
            {
                printf("%.1f\t", M_product[i][j]);
            }
        }
    }
    return 0;
}