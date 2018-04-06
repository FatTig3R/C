#include <stdio.h>

int main()
{
	float tall = 0, weight = 0;
	printf("输入身高:");
	scanf("%f", &tall);
	weight = (tall - 100 ) * 0.9;
	printf("\n标准体重为：%.2fkg\n", weight);


    return 0;
}
