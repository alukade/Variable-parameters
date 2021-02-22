#include<stdio.h>
#include<stdarg.h>

int sum(int n, ...);//n�Ǽ����󼸸������ĺ�,...˵������������ȷ��

int sum(int n, ...)
{
	int i, sum = 0;
	va_list vap;//��������б�

	va_start(vap, n);//��ʼ�������б�
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);//��ȡÿһ��������ֵ
	}
	va_end(vap);//�رղ����б�

	return sum;
}

int main()
{
	int result;

	result = sum(3, 1, 2, 3);
	printf("result1=%\n", result);

	result = sum(4, 1, 2, 3,4);
	printf("result2=%\n", result);

	result = sum(5, 1, 2, 3,4,5);
	printf("result3=%\n", result);
	return 0;
}