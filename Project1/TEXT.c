#include <stdio.h>
#include <math.h>
#include <string.h>
//素数
//int is_prime(int n)
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//二分查找
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("找不到数据");
//	}
//	else
//	{
//		printf("找到");
//	}
//	return 0;
//}
//计算调用函数次数
//void Add(int* pa)
//{
//	(*pa)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//}
//顺序输出
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//模拟strlen
int my_strlen(char* x)
{
	if (*x != '\0')
	{
		return 1 + my_strlen(x + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[]= "bit";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}