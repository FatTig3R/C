#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int position_x, position_y;     // �ɻ�λ��
int high, width;                // ��Ϸ����ߴ�

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
                printf("*");      // ����ɻ�
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
    startup();                  // ��ʼ��
    while (1)
    {
        show();                 // ��ʾ����
        updateWithoutInput();   // ���û������޹صĸ���
        updateWithInput();      // ���û������йصĸ���
    }



    return 0;
}
