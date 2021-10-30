#include <stdio.h>
#include <stdlib.h>

void input_to_matrix(char a[1000]){
    int i = 0,j = 0,k = 0,l = 0,line = 0,element = 0 , row = 0;
    float b[10][10][10]={0},M[10][10]={0};
    for ( k = 0; k < sizeof(a); k++)
    {
        if (a[k] == ',')
        {
            j++;
            l=0;
            element++;
            continue;
        }
        else if (a[k] == ';')
        {
            i++;
            j=0;
            l=0;
            line++;
            element++;
            continue;
        }        
        b[i][j][l]=a[k];
        l++;
    }
    row = element / line ;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            M[i][j] = atof(b[i][j]);
        }
    }
    return M;
}

int main()
{
    char a[1000]={0}, b[1000]={0};
    float M_1[10][10],M_2[10][10]={0}, M_product[10][10]={0};
    int line1=0,ele1=0,line2=0,ele2=0, row1=0,row2=0, i1=0,j1=0,k1=0,l1=0 ,i2=0,j2=0,k2=0,l2=0;
    gets(a);
    gets(b);
    
    return 0;
}
















    