#include <stdio.h>

int main()
{
	char isRian, isFree;

	printf("���п���");
	scanf("%c", &isFree);

	getchar();

	printf("����������");
	scanf("%c", &isRian);

	if (isFree == 'Y')
	{
		if (isRian == 'Y')
		{
			printf("Լ��\n");
		}
		else
		{
			printf("EMMMMM\n");
		}
	}
	else 
	{
		printf("�ݰ�\n");
	}

	return 0;
}
