#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts(" ‰»Î≈∆√˚: ");
	scanf("%2s", &card_name);
	int val = 0;

    switch (card_name[0]){
    case 'K':
        val = 10; break;
    case 'Q':
        val = 10; break;
    case 'J':
        val = 10; break;
    case 'A':
        val = 11; break;
    default:
        val = atoi(card_name);
    }
    printf("%i\n", val);

    return 0;
}
