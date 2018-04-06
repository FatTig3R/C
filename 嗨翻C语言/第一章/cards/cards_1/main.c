#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("输入牌名: ");
	scanf("%2s", &card_name);
	int val = 0;
	if (card_name[0] == 'K') {
		val = 10;
	}
	else if (card_name[0] == 'Q'){
		val = 10;
	}
	else if (card_name[0] == 'J'){
		val = 10;
	}
	else if (card_name[0] == 'A'){
		val = 11;
	}
	else{
		val = atoi(card_name); // atoi --> 将文本转换为数字
	}
	/* 检查牌的点数是否在3到6之间 */
	if ((val >= 3) && (val <= 6))
        puts("计数增加\n");
    /* 否则，检查牌是否是10, J, Q或k */
     // else if ((val == 10) || (val == 'J') || (val == 'Q') || (val == 'K'))
     else if (val == 10)
        printf("计数减少\n");

    return 0;
}
