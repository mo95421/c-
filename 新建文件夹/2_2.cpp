#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 2
int main()
{
    FILE *fp1,*fp2;
    int i,j,k,cout;
    char str[N][80],ch,c;
    printf("Please input file_num4:\n");
    fp1=fopen("num4","w");//�����ļ���д������
    for(i=0; i<N; i++)
    {
        gets(str[i]);
        fputs(str[i],fp1);
        fputs("\n",fp1);
    }
    printf("\n");
    //���ļ�����������
    fp2=fopen("num4","r");
    for(i=0; i<N; i++);
    fgets(str[i],80,fp2);
    printf("The showing times of letters:\n");
    for(ch='a',k=1; ch<='z'; ch++)
    {

        cout=0;
        for(i=0; i<N; i++)
        {
            for(j=0; j<strlen(str[i]); j++)
            {
                if(isalpha(str[i][j]))
                {
                    c=tolower(str[i][j]);//��дת��Сд
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
    //���Ҳ��滻�ַ���my->my
    printf("\nThe adverted article:\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<strlen(str[i]); j++)
        {
            if(str[i][j]=='m'&&str[i][j+1]=='y')
                str[i][j+1]='e';
        }
        printf("%s\n",str[i]);
    }
    return 0;
}
