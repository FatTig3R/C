#include <stdio.h>

int main()
{
	int a = 1;
	long s = 1;
	while (a <= 10){ // ��aֵС��10ʱ�� һֱִ��whileѭ��

		s = s * a; // s��Ž׳�ֵ
		a = a + 1;
	}
	printf("10�Ľ׳�Ϊ��%ld\n", s);

	return 0;
}
