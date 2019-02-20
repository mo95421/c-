#include<stdio.h>
int main()
{
    int n,sum,a[10];
    int i,cout=0;
    printf("请输入数字 N： ");
    scanf("%d",&n);
    printf("\n数据链:\n");
    while(n!=1)
    {
        printf("%d->",n);
        sum=0;
        i=0;
        while(n>0)//对每次的各位数字平方和再拆
        {
            a[i]=n%10;
            if(a[0]==1)
                cout++;//统计末尾数字为1的计数器
            sum+=a[i]*a[i];
            n=n/10;
            i++;
        }
        n=sum;
    }
    printf("%d\n",1);
    printf("\n数据链末尾数字为1的数字个数:\n");
    printf("%d\n",cout);
    return 0;
}
