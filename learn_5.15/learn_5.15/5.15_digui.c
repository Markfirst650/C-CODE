#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n) {
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main() {
	int n = 0;
	printf("请输入你想要求的数字：");
	scanf("%d", &n);
	int r = fib(n);
	printf("%d", r);
	return 0;
}