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
		printf("文件打开失败!\n");
		return 0;
	}
	while(!feof(fp1)||!feof(fp2))  //从文件1中读取每行的字符串直到文件最后
	{
		fscanf(fp1,"%s",&ch1);
		fscanf(fp2,"%s",&ch2);
		if(strcmp(ch1,ch2)!=0) //比较每行字符串看是否相同
		{
			printf("它们第一个不相同的行是:\n") ;
			puts(ch1);// 若不同则输出这两行
			puts(ch2);
            break;
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
