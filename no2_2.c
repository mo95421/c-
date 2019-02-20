#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 2
int main()
{
    FILE *fp1,*fp2;
    int i,j,k,cout;
    char str[N][80],ch,c;
    printf("Please input file_num1:\n");
    fp1=fopen("num1","w");//建立文件并写入数据
    for(i=0; i<N; i++)
    {
        gets(str[i]);
        fputs(str[i],fp1);
        fputs("\n",fp1);
    }
    printf("\n");
    //打开文件并读出数据
    fp2=fopen("num1","r");
    for(i=0; i<N; i++);
    fgets(str[i],80,fp2);
    printf("每个字母的个数:\n");
    for(ch='a',k=1; ch<='z'; ch++)
    {

        cout=0;
        for(i=0; i<N; i++)
        {
            for(j=0; j<strlen(str[i]); j++)
            {
                if(isalpha(str[i][j]))
                {
                    c=tolower(str[i][j]);//大写转化小写
                    if(ch==c)
                        cout++;
                }

            }
        }
        if(cout)
        {
            printf("%c: %2d    ",ch,cout);
            k++;
            if(k%4==0)
                printf("\n");
        }

    }
    //查找并替换字符串me->my
    printf("\nThe adverted article:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<strlen(str[i]); j++)
        {
            if(str[i][j]=='m'&&str[i][j+1]=='e')
                str[i][j+1]='y';
        }
        printf("%s\n",str[i]);
    }
    return 0;
}
