#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    char   name[10];
    double  score;
};
struct Student1
{
    char name[10];
    double score[3];
};
int main()
{
    FILE *fp1=fopen("db1.txt","r"); 
	FILE *fp2=fopen("db2,txt","r");
	FILE *fp3=fopen("db3.txt","w");
    struct Student stu[2][1];//定义二维结构体数组
    struct Student1 stu1[1];
    int i,j,k=0;
    int flag=0;
    for(i=0; i<1; i++)
    {
        fread(&stu[0][i],sizeof(struct Student),1,fp1);
        for(j=0; j<1; j++)
        {
            fread(&stu[1][j],sizeof(struct Student),1,fp2);
            if(strcmp(stu[0][i].name,stu[1][j].name)==0)
            {
                flag=1;
                strcpy(stu1[k].name,stu[1][i].name);
                stu1[k].score[0]=stu[0][i].score;
                stu1[k].score[1]=stu[1][j].score;
                stu1[k].score[2]=(stu1[k].score[0]+stu1[k].score[1])/2;
                k++;
            }
        }

    }
    printf("\n");
    if(flag)
    {
        printf("Names    Maths   English    Average\n");
        for(i=0; i<k; i++)
        {
            fwrite(&stu1[i],sizeof(struct Student1),1,fp3);
            printf("%s  ",stu1[i].name);
            for(j=0; j<3; j++)
                printf("%.2f",stu1[i].score[j]);
            printf("\n");
        }
        fclose(fp3);
    }
    else
    printf("Maybe the lists are taken by mistake!!\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
