#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i, j;
    int x = 0, y = 5;
	
	// �ٶ�
    int velocity_x = 1;
    int velocity_y = 1;
	
	// �߽�
    int left = 0;
    int right = 20;
    int top = 0;
    int bottom = 10;

    while (1) {
		// С����λ�� = ��λ�� + �ٶ�
        x = x + velocity_x;
        y = y + velocity_y;

        system("cls"); // ����

		// ���С���λ��
        for (i=0; i<x; i++) {
            printf("\n");
        }
        for (j=0; j<y; j++) {
            printf(" ");
        }
        printf("O");
        printf("\n");
        Sleep(20); // 

		// �����ϻ����򷴵�
        if ((x == top) || (x == bottom)) {
            velocity_x = -velocity_x;
        }
		// ����������򷴵�
        if ((y == right) || (y == left)) {
            velocity_y = -velocity_y;
        }
    }

    return 0;

}
