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
//�ҳ�10��������������
//int main()
//{
//	int arr[10] = {0};//������һ�����԰���10���������ڴ�ռ�
//	int i = 0;//���úñ���
//	//����10������
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	//���
//	printf("max=%d\n", max);
//	return 0;
//}��10��������ƽ��ֵ
int main()
{
	int arr[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//���
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	float a = sum / 10.0;//���������������������������ø����������壡��
	//���
	printf("%f", a);//ͬʱע�⸡����������޸ģ���
	return 0;
}