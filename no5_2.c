#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fun(int a[],int num) //��һ�������бȽϵ�i������ǰi-1�����Ƿ���� 
{
	int i,j;
	for(i=0;i<num-1;i++)
	{
		if(a[num-1]==a[i])
		    return 1;
	}
	return 0;
}
int main()
{
	int i,n,a[1000]={0};
   printf("��������Ҫ����������ĸ��� :");
   scanf("%d",&n);  //�û��������������ĸ��� 
	srand(time(0));  //����������� 
	for(i=0;i<n;i++)
	{
		a[i] = rand()%100;  //����һ������� 
		if(fun(a,i+1))   
		{
			i--;
			continue;
		}
		printf("%d ",a[i]);
	}
	return 0;
}
