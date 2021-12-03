#include <stdio.h>

int main()
{
    FILE *fp = fopen("command.txt","r+");
    char s[2][10][15]={0},buff[250]={0};
    int c;
    int i=0, j=0, k = 0;
    int f = 0;
    while ((c=getc(fp)) !=EOF)
    {
        while (1)
        {
            if (c == 10)
            {
                f++;
                i = 0;
                j = 0;
                break;
            }
            
            if (c == 32)
            {
                i++;
                j = 0;
            }
            else
            {
                s[f][i][j] = c;
                j++;
            }
        }
    }
    
    
    for (int k = 0; k < 5; k++)
    {
        printf("%d %s\n",k,s[0][k]);
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%d %s\n",k,s[1][k]);
    }
    FILE *fp2 = fopen(s[0][0],"w+");
    for (int k = 1; k < 10; k++)
    {
        fputs(s[0][k],fp2);
    }
    FILE *fp3 = fopen(s[1][0],"w+");
    for (int k = 1; k < 10; k++)
    {
        fputs(s[1][k],fp3);
    }
    
    
    
    

    
    
}
