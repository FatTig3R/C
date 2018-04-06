#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int i, j;
    int x = 0, y = 5;
	
	// 速度
    int velocity_x = 1;
    int velocity_y = 1;
	
	// 边界
    int left = 0;
    int right = 20;
    int top = 0;
    int bottom = 10;

    while (1) {
		// 小球新位置 = 旧位置 + 速度
        x = x + velocity_x;
        y = y + velocity_y;

        system("cls"); // 清屏

		// 输出小球的位置
        for (i=0; i<x; i++) {
            printf("\n");
        }
        for (j=0; j<y; j++) {
            printf(" ");
        }
        printf("O");
        printf("\n");
        Sleep(20); // 

		// 碰到上或下则反弹
        if ((x == top) || (x == bottom)) {
            velocity_x = -velocity_x;
        }
		// 碰到左或右则反弹
        if ((y == right) || (y == left)) {
            velocity_y = -velocity_y;
        }
    }

    return 0;

}
