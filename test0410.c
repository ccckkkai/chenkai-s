#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//enum SeX
//{
//	male, female,secret
//};
//int main()
//{
//	enum SeX a = female;
//	printf("%d\n", a);
//	return 0;
//}
//enum SeX
//	{
//		male, female=3,secret
//	};
//	int main()
//	{
//		enum SeX a = female;
//		printf("%d\n", a);
//		printf("%d\n", male);
//		printf("%d\n", secret);
//		return 0;
//	}
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	//char arr1[] = "abcd";
	//char arr2[] = { 'a', 'b', 'c', 'd','\0'};
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//printf("%c",'\14');
	//int input = 0; //���ú�һ�����ͱ���
	//printf("��������:>");
	//printf("��Ҫ�ú�ѧϰ��(1/0)?>: ");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("���˵�ѡ����luo");
	//else
	//	printf("ȥ���������");
	//int line = 0;
	//for (line = 0;line < 3000;line++)
	//{
	//	printf("����д����:%d\n", line);
	//}
	//while (line == 3000)
	//{
	//	printf("�úú�");
	//	break;
	//}
	//int num1 = 0;
	//int num2 = 0;
	//scanf("%d%d", &num1, &num2);
	//int sum = Add(num1, num2);
	//printf("sum=%d\n", sum);
	//char arr[4] = { 'a','b','c' };
	//int i = 0;//���ñ���
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%c\n", arr[i]);
	//	
	//}
	/*int a = -1;
	int b = a << 1;
	printf("%d\n", b);*/
	//int a = 1;
	//int b=++a;
	//printf("%d", b);
	//int a = (int)3.14;
	//printf("%d", a);
	int a = 1;
	int b = 2;
	int max = 0;
	max=b> a ?   10:  100;
	printf("%d", max);
	return 0;
}