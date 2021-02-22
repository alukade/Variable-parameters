#include<stdio.h>
#include<stdarg.h>

int sum(int n, ...);//n是几就求几个参数的和,...说明参数个数不确定

int sum(int n, ...)
{
	int i, sum = 0;
	va_list vap;//定义参数列表

	va_start(vap, n);//初始化参数列表
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vap, int);//获取每一个参数的值
	}
	va_end(vap);//关闭参数列表

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