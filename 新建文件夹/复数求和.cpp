#include<stdio.h>
#include<string.h>
typedef struct
{
	double real;
	double imag;
}complex;

complex add(complex a,complex b)
{
	complex result;
	result.real=a.real+b.real;
	result.imag=a.imag+b.imag;
	return result;

}

complex sub(complex a,complex b)
{
	complex result;
	result.real=a.real-b.real;
	result.imag=a.imag-b.imag;
	return result;

}

complex mul(complex a,complex b)
{
	complex result;
	result.real=(a.real*b.real)-(a.imag*b.imag);
	result.imag=(a.real*b.imag)+(a.imag*b.real);
	return result;

}
int main()
{
	complex m,n;
	char x;
    scanf("%lf%lf%lf%lf %c",&m.real,&m.imag,&n.real,&n.imag,&x);
	if(x=='+')
	    printf("%.2lf %.2lf\n",add(m,n).real,add(m,n).imag);
	else if(x=='-')
		printf("%.2lf %.2lf\n",sub(m,n).real,sub(m,n).imag);
	else
		printf("%.2lf %.2lf\n",mul(m,n).real,mul(m,n).imag);
	return 0;
}
