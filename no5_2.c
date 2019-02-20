#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fun(int a[],int num) //在一个数组中比较第i个数与前i-1个数是否相等 
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
   printf("请输入想要产生随机数的个数 :");
   scanf("%d",&n);  //用户输入产生随机数的个数 
	srand(time(0));  //随机数的种子 
	for(i=0;i<n;i++)
	{
		a[i] = rand()%100;  //产生一个随机数 
		if(fun(a,i+1))   
		{
			i--;
			continue;
		}
		printf("%d ",a[i]);
	}
	return 0;
}
