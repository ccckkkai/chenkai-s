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
//}//��ƺ���ʱһ��Ҫ�ǵ���д����ֵ��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	int m=max(a, b);//����������ֵ�洢�����ͱ���m�У�������
//	printf("%d", m);
//	return 0;
//}
//int main()
//{
//	int m=sizeof(char);
//	printf("%d", m);
//	return 0;
//}
//���1-100֮�������
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
//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//   long long int mul = 1; //ע���������
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
			printf("��С��");
		}
		else if (rdm1 > rdm)
		{
			printf("�´���");
		}
		else
		{
			printf("��ȷ");
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
	while (1)//������do whileǶ��switch����һ�㣡��
	{
		printf("�����루0/1):");
		scanf("%d", &input);
		if (0 == input || 1 == input)
		{
			break;
		}
		else
		{
			printf("����������");
		}
	}
	switch (input)
			{
			case 1://��Ȼ�ˣ�ѡ��1��ɲ��ǵ��������һ����Ϸ��ʼ����ȻҪ������Ĵ���ģ����д���
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			}
	return 0;
}