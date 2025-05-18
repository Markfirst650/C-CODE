#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 1;
//	printf("%d", a);
//
//	return 0;
//}
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr[0];
//	for (int i = 0;i < sz;i++)
//		//printf("%d ", arr[i]);
//		/*printf("%d ", *pa);
//		pa++;*/
//		//为什么错
//		//因为你for语句不加大括号，没有执行pa++
//	{
//		printf("%d ", *pa);
//		pa++;//不能写成*pa++
//
//	}
		
//
//
//
//	return 0;
//}
//再来个字符数组，这个就和整型数组不太一样了
//好吧，也差不多，一个字符占一个内存单位而已
int main() {
	char arr[] = "hello world";//不用加大括号
	//正常打印
	/*printf("%s\n", arr);*/
	//用指针
	//char* pc = arr[0];加&&&&&&&啊啊啊啊
	char* pc = &arr[0];
	//char* pc = arr; 这样也可以
	//为什么不用for，字符个数不太好确定
	/*while (*pc != \0 ) {

	}*//*这是字符啊，括起来，单引号！！！*/
	while (*pc != '\0') {
		printf("%c", *pc);
		pc++;
	}

	return 0;
}