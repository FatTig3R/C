#include <stdio.h>

int main()
{
    int a = 7;
    int b = 0;

    printf("PLEASE ENTER A INT NUMBER:");
    while (a) {
        scanf("%d", &b);
        if (a < b) {
            printf("\nBig~ Again\n");
        }
        else if (a > b) {
            printf("Small~Again\n");
        }
        else {
            printf("You are so good~");
            break;
        }
    }
    system("pause");

    return 0;
}
