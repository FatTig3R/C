#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a[100], i, j, t, n;

    scanf("%d", &n);        // ��ʾ��������n����
    for (i=1; i<=n; i++)
        scanf("%d", &a[i]);

    // ð������ĺ��Ĳ���
    for (i=1; i<=n-1; i++)  // n��������ֻ�ý���n-1��
    {
        for  (j=1; j<=n-1; j++) // �ӵ�1λ��ʼ�Ƚ�ֱ�����һ����δ��λ����
        {
            if (a[j] < a[j+1])  // �Ƚϴ�С������
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (i=1; i<=n; i++)    // ������
        printf("%d ", a[i]);

    system("pause");

    return 0;
}
*/

struct student
{
    char name[21];
    char score;
}; // �����洢�����ͷ���

int main()
{
    struct student a[100], t;
    int i, j, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        scanf("%s %d", a[i].name, &a[i].score);

    // �������Ӹߵ�����
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
