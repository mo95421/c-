#include<stdio.h>
int main()
{
    int n,sum,a[10];
    int i,cout=0;
    printf("���������� N�� ");
    scanf("%d",&n);
    printf("\n������:\n");
    while(n!=1)
    {
        printf("%d->",n);
        sum=0;
        i=0;
        while(n>0)//��ÿ�εĸ�λ����ƽ�����ٲ�
        {
            a[i]=n%10;
            if(a[0]==1)
                cout++;//ͳ��ĩβ����Ϊ1�ļ�����
            sum+=a[i]*a[i];
            n=n/10;
            i++;
        }
        n=sum;
    }
    printf("%d\n",1);
    printf("\n������ĩβ����Ϊ1�����ָ���:\n");
    printf("%d\n",cout);
    return 0;
}
