#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c=0;  // a表示输入的数， b表示个位
    scanf("%d", &a);  // a = 123
    if (a > 0){
        while (a > 0){
            b = a % 10;  // b = 3 ----> b = 2 ----> b = 1
            c = c * 10 + b;  // c = 3 ----> c = 32 ----> c = 321
            a = a / 10; // a = 12 ---> a = 1 ----> a = 0
        }
        printf("%d", c);
    }
    else if (a < 0){
        a = abs(a);  // 取绝对值
        while (a > 0){
            b = a % 10;
            c = c * 10 + b;
            a = a /10;
        }
        printf("%d\n", -c);
    }
    else{
        printf("%d\n", c);
    }

    return 0;
}
