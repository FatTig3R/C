#include <stdio.h>

int main()
{
	int a = 1;
	long s = 1;
	while (a <= 10){ // 当a值小于10时， 一直执行while循环

		s = s * a; // s存放阶乘值
		a = a + 1;
	}
	printf("10的阶乘为：%ld\n", s);

	return 0;
}
