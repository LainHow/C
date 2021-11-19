#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct subject
{
    char sub_name[20];
    float score;
};

struct stuinfo
{
    char name[10];
    char ID[10];
    char gender[10];
    char Major[20];
    char phonenum[20];
    struct subject subject[3];
    int odd;
};

int main(){
    _Bool quit=0;
    struct stuinfo student[10];
    float num1 = 0,num2 = 0,num3 = -1.0;
    int j = 0,counter=0;
    char text[10][10][20]={0};
    printf("輸入學生資訊:\n");
    while (1)
    {
        char input[100]={0};
        for (int i = 0; i < 100; i++)
        {
            scanf("%c",&input[i]);
            if (input[0] == '\n')
            {
                quit = 1;
                break;
            }
            if (input[i] == '\n')
            {
                input[i] == '\0';
                break;
            }           
        }
        if (quit == 1)
        {
            break;
        }
        sscanf(input,"%s\t%s\t%s\t%s\t%s",student[j].name,student[j].ID,student[j].gender,student[j].Major,student[j].phonenum);
        int id_num = atoi(student[j].ID);
        if (id_num % 2 == 1)
        {
            student[j].odd = 1;
        }
        else
        {
            student[j].odd = 0;
        }
        j++;
    }
    counter = j;
    int i = 0;
    printf("輸入學生成績:\n");
    while (1)
    {
        char input[1000]= {0} , tab[] = "\t";
        int boo = 0;
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
        token=strtok(input, tab);
        while(token!=NULL)
        {
            strcat(text[i][j],token);
            token = strtok(NULL, tab);
            j++;            
        }
        i++;
    }
    for (int i = 0; i < counter; i++)
    {
        num1 = atof(text[i][3]);
        num2 = atof(text[i][5]);
        num3 = atof(text[i][7]);
        strcpy(student[i].subject[0].sub_name ,text[i][2]);
        student[i].subject[0].score = num1;
        strcpy(student[i].subject[1].sub_name ,text[i][4]);
        student[i].subject[1].score = num2;
        strcpy(student[i].subject[2].sub_name ,text[i][6]);
        student[i].subject[2].score = num3;
    }    
    printf("學號尾數為奇數:\n");
    for (int i = 0; i < counter; i++)
    {
        if (student[i].odd == 1)
        {
            printf("姓名=%s 學號=%s 性別=%s 科系=%s 聯絡電話=%s 科目1=%s 成績=%.2f 科目2=%s 成績=%.2f 科目3=%s 成績=%.2f\n",student[i].name,student[i].ID,student[i].gender,student[i].Major,student[i].phonenum,student[i].subject[0].sub_name,student[i].subject[0].score,student[i].subject[1].sub_name,student[i].subject[1].score,student[i].subject[2].sub_name,student[i].subject[2].score);
        }      
    }
    printf("學號尾數為偶數:\n");
    for (int i = 0; i < counter; i++)
    {
        if (student[i].odd == 0)
        {
            printf("姓名=%s 學號=%s 性別=%s 科系=%s 聯絡電話=%s 科目1=%s 成績=%.2f 科目2=%s 成績=%.2f 科目3=%s 成績=%.2f\n",student[i].name,student[i].ID,student[i].gender,student[i].Major,student[i].phonenum,student[i].subject[0].sub_name,student[i].subject[0].score,student[i].subject[1].sub_name,student[i].subject[1].score,student[i].subject[2].sub_name,student[i].subject[2].score);
        }      
    }
    return 0;
}