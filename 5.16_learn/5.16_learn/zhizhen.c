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
//		//Ϊʲô��
//		//��Ϊ��for��䲻�Ӵ����ţ�û��ִ��pa++
//	{
//		printf("%d ", *pa);
//		pa++;//����д��*pa++
//
//	}
		
//
//
//
//	return 0;
//}
//�������ַ����飬����ͺ��������鲻̫һ����
//�ðɣ�Ҳ��࣬һ���ַ�ռһ���ڴ浥λ����
int main() {
	char arr[] = "hello world";//���üӴ�����
	//������ӡ
	/*printf("%s\n", arr);*/
	//��ָ��
	//char* pc = arr[0];��&&&&&&&��������
	char* pc = &arr[0];
	//char* pc = arr; ����Ҳ����
	//Ϊʲô����for���ַ�������̫��ȷ��
	/*while (*pc != \0 ) {

	}*//*�����ַ������������������ţ�����*/
	while (*pc != '\0') {
		printf("%c", *pc);
		pc++;
	}

	return 0;
}