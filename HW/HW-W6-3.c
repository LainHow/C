#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[1000]={0} , b[10][10][10]={0};
    float M[10][10]={0},c;
    int line=0,ele=0, row=0, i=0,j=0,k=0,l=0;
    gets(a);
    /*line17-37
    把輸入字串(a[k])轉成矩陣(b[i][j][k])
    k遞增
    遇到','j就+1,
    遇到';'i就+1,
    沒遇到','跟';'
    就將a[k]讀入b[i][j][l],l+1
    */
    for ( int k = 0; k < sizeof(a); k++)
    {
        if (a[k] == ',')
        {
            j++;
            l=0;
            ele++;
            continue;
        }
        else if (a[k] == ';')
        {
            i++;
            j=0;
            l=0;
            ele++;
            line++;
            continue;
        }
        b[i][j][l]=a[k];
        l++;
    }
    /*line41-48
    把b陣列中的字元轉成浮點數存入M_I
    */
    row= (ele / line );
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            M[i][j] = atof(b[i][j]);
        }
    }
    /*line52-73
    將M轉為擴展矩陣
    */
    if (row != line)
    {
        printf("此矩陣無反矩陣");
        return 0;
    }
    else
    {
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < line; j++)
            {
                if (i==j)
                {
                    M[i][line+j]=1.0;
                }
                else
                {
                    M[i][line+j]=0.0;
                }    
            }            
        }        
    }
    /*line81-95
    將M變成上三角矩陣                                                            j=1 -> c=4/1=4                              j=2 -> c=7/1=7
    若要將每一列的第一項都變為0(除了第1列)                  1 2 3 ->i=0            1 2 3               1  2  3               1  2  3           1   2   3
    將第一列設為指定列(i)                                  4 5 6       目標列[1]->4 5 6            -> 0 -3 -6               0 -3 -6           0  -3  -6
    對於目標列先找到該列的倍數c = M[j][i] / M[i][i]        7 8 9                  7 8 9               7  8  9     目標列[2]->7  8  9        -> 0  -6 -12 
    目標列中第k個元素(M[j][k])減去 指定列第k個元素(M[i][k])*c                                                                            
    */
    for (int i = 0; i < line; i++)
    {
        for (j = i+1; j < line; j++)
        {
            if (M[i][i] == 0)
            {
                break;
            }
            c = M[j][i] / M[i][i];
            for ( k = 0; k < line*2; k++)
            {
                M[j][k] = M[j][k] - M[i][k]*c;
            }
        }
    }
    /*line99-110
    從最後一列依序往上減
    */
    for ( i = line-1; i >= 0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {            
            c=M[j][i] / M[i][i];
            for (int k = line * 2 - 1; k >= 0; k--)
            {
                M[j][k] = M[j][k] - M[i][k]*c;
                
            }
        }
    }
    /*line115-122
    將第i列的每個元素除以c(M[i][i])
    讓M[i][i]變回1
    */
    for (int i = 0; i < line; i++)
    {
        c = M[i][i];
        for (int j = 0; j < line * 2; j++)
        {
            M[i][j] = M[i][j] / c;
        }
    }
    /*輸出矩陣*/
    for (int i = 0; i < line; i++)
    {
        for (int j = line; j < line * 2; j++)
        {
            if (j == line)
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