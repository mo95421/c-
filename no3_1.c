#include<stdio.h>
#include<string.h>//为strlen函数提供原型
#include<math.h>//为pow函数提供原型
int main()
{
    char str[10];
    int i,sum=0;
    printf("请输入一个二进制字符串:\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        sum+=(str[i]-'0')*pow(2,i);//计算每个位上的字符再加和
    }
    printf("其十进制输出为:\n ");
    printf("%d\n",sum);//输出所对应的十进制数
    return 0;
}
