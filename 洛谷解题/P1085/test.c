#include <stdio.h>

int main()
{
	int a, b, flag, max;
	a=0; b=0; flag=0; max=0;
	
	for (int i=1; i < 8; i++)
	{
		scanf("%d%d", &a, &b);
		if ((a + b) < 8)
			continue;
		if ((a +b) > 8)
		{
			flag = i;
			max = (a = b);
			
		}
	}
	printf("%d\n", flag);
	return 0;
}