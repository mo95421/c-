#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1,*fp2;
	char ch1[80],ch2[80];
	fp1=fopen("xhb1.txt","r");
	fp2=fopen("xhb2.txt","r");
	if(fp1==NULL||fp2==NULL)
	{
		printf("�ļ���ʧ��!\n");
		return 0;
	}
	while(!feof(fp1)||!feof(fp2))  //���ļ�1�ж�ȡÿ�е��ַ���ֱ���ļ����
	{
		fscanf(fp1,"%s",&ch1);
		fscanf(fp2,"%s",&ch2);
		if(strcmp(ch1,ch2)!=0) //�Ƚ�ÿ���ַ������Ƿ���ͬ
		{
			printf("���ǵ�һ������ͬ������:\n") ;
			puts(ch1);// ����ͬ�����������
			puts(ch2);
            break;
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
