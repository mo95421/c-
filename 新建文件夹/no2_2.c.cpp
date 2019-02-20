#include<stdio.h>
int main()
{
	int a[26]={0},i;
	char str[100]="0";
	char *p=str;
	gets(str);
	while(*p)
	{
		if(*p>='a' && *p<='z')
		{
			a[*p-'a']++;
		}
		p++;
	}
	/*输出统计结果*/
	for(i=0;i<26;i++)
	{
		if(a[i])
		{
			printf("%c:%d\n",i+'a',a[i]);
		}
	}
	getch();
	
	
	return 0;
}
