#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char ch[10] = "hello";
//	printf("%c", ch[1]);
//	return 0;
//}
//int max(int a, int b)
//{
//	return  a > b ? a : b;
//}//设计函数时一定要记得添写返回值！！！！
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	int m=max(a, b);//将函数返回值存储在整型变量m中！！！！
//	printf("%d", m);
//	return 0;
//}
//int main()
//{
//	int m=sizeof(char);
//	printf("%d", m);
//	return 0;
//}
//输出1-100之间的奇数
//int main()
//{
//	int m = 0;
//	for (m = 1; m < 100; m++)
//	{
//		if (1 == m % 2 )
//			printf("%d\t", m);
//	}
//	return 0;
//}
// 
//
//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//   long long int mul = 1; //注意整数溢出
//	scanf("%d",  &n);
//	for (i=1; i <= n; i++)
//	{
//		mul *=i;
//	}
//	printf("%lld", mul);
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "hello,Xidian";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}
void game()
{
	int rdm = rand();
	while (1)
	{
		int rdm1 = 0;
		scanf("%d\n", &rdm1);
		if (rdm1 < rdm)
		{
			printf("猜小了");
		}
		else if (rdm1 > rdm)
		{
			printf("猜大了");
		}
		else
		{
			printf("正确");
			break;
		}
	}
}
void menu()
{
	printf("                                              \n");
	printf("                1--play                  \n");
	printf("                0--exit                  \n");
	printf("                                              \n");
}
int main()
{
	menu();
	int input = 0;
	 srand( (unsigned int) time(NULL));
	while (1)//这里用do while嵌套switch更简单一点！！
	{
		printf("请输入（0/1):");
		scanf("%d", &input);
		if (0 == input || 1 == input)
		{
			break;
		}
		else
		{
			printf("请重新输入");
		}
	}
	switch (input)
			{
			case 1://当然了，选中1后可不是单纯的输出一个游戏开始，必然要对这里的代码模块进行处理；
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			}
	return 0;
}