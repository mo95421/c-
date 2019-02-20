#include<stdio.h>
#include<string.h>
#define M 100
void del(char *p)
{
	for(p;*p!='\0';p++)
	{
		if(*p=='/'&&*(p+1)=='/')
		{
			*p='\0';
		}
	}
}
int main(void)
{
	FILE *fp,*fp_n;
	char str[M]={0};
	int i=0;
	fp=fopen("text.txt","r");
	fp_n=fopen("text_n.txt","a");
	while(!feof(fp))
	{
		char str_n[M]={0};
		fgets(str,100,fp);
		del(str);
		str_n[0]=i+49;
		strcat(str_n,str);
		fputs(str_n,fp_n);
		fprintf(fp_n,"\n");
		i++;
	}
 } 
