//����ָ��
#define _CRT_SECURE_NO_WARNINGS 1

//int add(int x, int y)
//{
//	return x + y;
//}
//
//void bili(char* str)
//{
//
//}
//#include <stdio.h>
//int main()
//{
//	//printf("%p\n",&add);
//	//int (*pf)(int ,int)= &add;//pf���Ǻ���ָ��
//
//	//void (*pd)(char*)=&bili;
//
//	//�ں���ָ�����棬��������ȡ��ַ��������һ����
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int(*pd) (int, int) = add;
//	return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	(* ( void(*)() ) 0)();
//	//������0��ַ���ĺ������ú����ķ���ֵ��void���ͣ��޲���
//	return 0;
//}

//����ָ������
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int*arr[] = { &a, &b };
//	int (*p)(int, int) = add;
//	int(*p1)(int, int) = sub;
//	int (* pfa[4] )(int, int);//����ָ������
//	return 0;
//}

//#include <stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****1.add      2.sub******\n");
//	printf("****3.mul      4.div******\n");
//	printf("****0.exit   *************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 1;
//	int(*arr[])(int, int) = { 0, add, sub, mul, div };
//	int a = 0;
//	int b = 0;
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������������");
//			scanf("%d%d", &a, &b);
//			int ret = arr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}

//�ص�����



//qsort��������ϸ����
//����qsort��������ð������
//qsort�������������ɲ�ͬ���͵����ݣ�Ӧ�õķ�Χ��

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void*e1, const void*e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void print(int *arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test1()
//{
//	int arr[] = { 4, 7, 45, 76, 1, 9, 78, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, len, sizeof(arr[0]), cmp);
//	print(arr, len);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


#include <stdio.h>


struct Stu
{
	char name[40];
	int age;
};

int cmp(const void*e1, const void*e2)
{
	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
}
void test2()
{
	struct Stu arr[] = { { "zhangsan", 27 }, { "wangwu", 16 }, { "lisi", 40 } };
	int len = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, len, sizeof(arr[0]), cmp);
}

int main()
{
	test2();
	return 0;
}