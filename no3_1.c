#include<stdio.h>
#include<string.h>//Ϊstrlen�����ṩԭ��
#include<math.h>//Ϊpow�����ṩԭ��
int main()
{
    char str[10];
    int i,sum=0;
    printf("������һ���������ַ���:\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        sum+=(str[i]-'0')*pow(2,i);//����ÿ��λ�ϵ��ַ��ټӺ�
    }
    printf("��ʮ�������Ϊ:\n ");
    printf("%d\n",sum);//�������Ӧ��ʮ������
    return 0;
}
