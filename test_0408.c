#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}
//找出10个整数中最大的数
//int main()
//{
//	int arr[10] = {0};//设置了一个可以包含10个整数的内存空间
//	int i = 0;//设置好变量
//	//输入10个整数
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max=%d\n", max);
//	return 0;
//}求10个整数的平均值
int main()
{
	int arr[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//求和
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	float a = sum / 10.0;//整数除以整数还是整数，不能用浮点数来定义！！
	//输出
	printf("%f", a);//同时注意浮点数输出的修改！！
	return 0;
}