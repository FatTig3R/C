#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	a = a* 10 + b; // 化成xxx分
	c = a / 19;
	printf("%d", c);
	
	
	return 0;
}