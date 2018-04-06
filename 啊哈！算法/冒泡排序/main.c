#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a[100], i, j, t, n;

    scanf("%d", &n);        // 表示接下来有n个数
    for (i=1; i<=n; i++)
        scanf("%d", &a[i]);

    // 冒泡排序的核心部分
    for (i=1; i<=n-1; i++)  // n个数排序，只用进行n-1次
    {
        for  (j=1; j<=n-1; j++) // 从第1位开始比较直到最后一个尚未归位的数
        {
            if (a[j] < a[j+1])  // 比较大小并交换
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i=1; i<=n; i++)    // 输入结果
        printf("%d ", a[i]);

    system("pause");

    return 0;
}
*/

struct student
{
    char name[21];
    char score;
}; // 用来存储姓名和分数

int main()
{
    struct student a[100], t;
    int i, j, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        scanf("%s %d", a[i].name, &a[i].score);

    // 按分数从高到低排
    for (i=1; i<=n-1; i++){
        for (j=1; j<=n-1; j++){
            if (a[j.score < a[j+1].score){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i=1; i<=n; i++){
        printf("%s\n", a[i].name);
    }

    system("pause");

    return 0;
}
