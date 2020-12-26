#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(double*));
//	*pa = 0;
//	printf("%p\n", pa);
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p = p + 1;
//	}
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a, &b, &c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//}