#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[1000]={0} , b[10][10][10]={0};
    float M_I[10][10]={0},c;
    int line=0,ele=0, row=0, i=0,j=0,k=0,l=0;
    gets(a);
    
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
    row= (ele / line );
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            M_I[i][j] = atof(b[i][j]);
        }
    }
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
                    M_I[i][line+j]=1.0;
                }
                else
                {
                    M_I[i][line+j]=0.0;
                }    
            }            
        }        
    }
    /*M_I目前為擴展矩陣*/
    for (int i = 0; i < line; i++)
    {
        for (j = 1; j < line; j++)
        {
            if (M_I[i][i] == 0)
            {
                break;
            }
            c = M_I[i+1][i] / M_I[i][i];
            for ( k = 0; k < line*2; k++)
            {
                M_I[j][k] = M_I[j][k] - M_I[i][k]*c;
            }
        }
    }
    /*M_I目前為上三角矩陣*/
    for ( i = line-1; i > 0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {            
            c=M_I[j][j+1] / M_I[i][i];
            for (int k = line*2-1; k >=0; k--)
            {
                M_I[j][k] = M_I[j][k]-M_I[i][k]*c;
                
            }
        }
    }
    for (int i = 0; i < line; i++)
    {
        c=M_I[i][i];
        for (int j = 0; j < line*2; j++)
        {
            M_I[i][j] = M_I[i][j] / c;
        }
        
    }
    for (int i = 0; i < line; i++)
    {
        for (int j = line; j < line*2; j++)
        {
            if (j == line)
            {
                printf("\n%.1f\t", M_I[i][j]);
            }
            else
            {
                printf("%.1f\t", M_I[i][j]);
            }
        }
    }
    return 0;
}

