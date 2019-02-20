#include<stdio.h>
#include<stdlib.h>
#include<time.h>
     
int main()
{
	int a=0,b=99,m,n;
	srand(time(NULL));
	m=a+(rand()%(b-a));
	printf("产生的随机数:\n"); 
	printf("%d\n",m);
	printf("请输入一个你猜的数:\n");
	scanf("%d",&n);
	if(m>n)
	printf("too small");
	else if(m<n)
	printf("too big");
	else
	printf("you win");
	
	
	return 0;
} 
