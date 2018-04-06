#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int position_x, position_y;     // 飞机位置
int high, width;                // 游戏画面尺寸

void startup()
{
    high = 20;
    width = 30;
    position_x = high / 2;
    position_y = width / 2;
}

void show()
{
    system("cls");
    int i, j;
    for (i = 0; i < high; i++)
    {
        for (j = 0; j < width; j++)
        {
            if ((i == position_x) && (j == position_y))
                printf("*");      // 输出飞机
            else
                printf(" ");
        }
        printf("\n");
    }
}

void updateWithoutInput()
{
}

void updateWithInput()
{
    char input;
    if (input == 'a')
        position_y--;
    if (input == 'd')
        position_y++;
    if (input == 'w')
        position_x--;
    if (input == 's')
        position_x++;
}


int main()
{
    startup();                  // 初始化
    while (1)
    {
        show();                 // 显示画面
        updateWithoutInput();   // 与用户输入无关的更新
        updateWithInput();      // 与用户输入有关的更新
    }



    return 0;
}
