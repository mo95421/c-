#include<stdio.h>
void sort(int num[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	   for(j=i+1;j<len;j++)
       { 
	     if(num[j]<num[i])
	     {
	   	  temp=num[i];
	   	  num[i]=num[j];
	   	  num[j]=temp;
	     }
	   } 
} 
int main()
{
	FILE *fp1=fopen("num1.txt","r");
	FILE *fp2=fopen("num2.txt","r");
	FILE *fp3=fopen("num3.txt","w");
	int num[10000]={0},i=0,j=0;
	if(fp1==NULL||fp2==NULL)
	{
		printf("open file error\n");
		return 1;
	}
	while(!feof(fp1))
	{
		fscanf(fp1,"%d",&num[i]);
		i++;
	}
	while(!feof(fp2))
	{
		fscanf(fp2,"%d",&num[i]);
		i++;
	}
	sort(num,i);
	for(j=0;j<i;j++) 
	{
		fprintf(fp3,"%d ",num[j]);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
