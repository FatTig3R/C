#include <stdio.h>

int main()
{
	char isRian, isFree;

	printf("你有空吗？");
	scanf("%c", &isFree);

	getchar();

	printf("今天下雨吗？");
	scanf("%c", &isRian);

	if (isFree == 'Y')
	{
		if (isRian == 'Y')
		{
			printf("约！\n");
		}
		else
		{
			printf("EMMMMM\n");
		}
	}
	else 
	{
		printf("拜拜\n");
	}

	return 0;
}
