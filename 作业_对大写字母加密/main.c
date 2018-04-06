#include<stdio.h>

int main() {
    char c;

    // 输入要加密的字母
    c=getchar();

    while(c!="\n") {
        // A~W 用后三个字母加密
        if (c>='A' && c<='W') {
            c = c + 3;
        }
        // X Y Z 用 A B C 加密
        if (c>='X' && c<='Z') {
            c = c - 23;
        }
    // 输出加密后的字母
    putchar(c);
    c=getchar();
    }

    system("pause");
}
