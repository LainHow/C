#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char text[10][10][20]={0} , target[100]={0} , space[]= " " ,replace[100]={0};
    int i = 0,j = 0, k = 0 ,boo = 0 , counter = 0 , words = 0,lines = 0,address[100][2] ,max_words = 0;
    printf("請輸入要被取代的關鍵字:\n");
    for ( i = 0; i < 100; i++)
        {
            scanf("%c",&target[i]);
            if (target[i] == '\n')
            {
                target[i]='\0';
                break;
            }
        }
    int len = strlen(target);
    printf("請輸入要取代的關鍵字:\n");
    for ( i = 0; i < 100; i++)
        {
            scanf("%c",&replace[i]);
            if (replace[i] == '\n')
            {
                replace[i]='\0';
                break;
            }
        }    
    i=0;
    printf("請輸入要搜尋的文字段落:\n");
    while (1)
    {
        char input[1000]= {0};
        j = 0;
        for (int k = 0; k < 999; k++)
        {
            scanf("%c",&input[k]);
            if (input[0] == '\n')
            {
                input[1]='\0';
                boo=1;
                break;
            }
            if (input[k] == '\n')
            {
                input[k+1]='\0';
                break;
            }
        }
        if (boo == 1)
        {
            break;
        }
        char *token;
        token=strtok(input, space);
        while(token!=NULL)
        {
            strcat(text[i][j],token);
            token=strtok(NULL, space);
            j++;
            words++;
            if (words >= max_words)
            {
                max_words = words;
            }            
        }
        i++;
        lines++;
        words=0;
    }
    for ( i = 0; i < lines; i++)
    {
        for (j = 0; j < max_words; j++)
        {
            if (strcmp(text[i][j],target) == 0)
            {
                strcpy(text[i][j],replace);
            }
        }
    }
for ( i = 0; i < lines; i++)
{
    for ( j = 0; j < max_words; j++)
    {
        printf("%s ",text[i][j]);
    }
}
    return 0;
}