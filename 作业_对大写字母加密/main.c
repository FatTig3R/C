#include<stdio.h>

int main() {
    char c;

    // ����Ҫ���ܵ���ĸ
    c=getchar();

    while(c!="\n") {
        // A~W �ú�������ĸ����
        if (c>='A' && c<='W') {
            c = c + 3;
        }
        // X Y Z �� A B C ����
        if (c>='X' && c<='Z') {
            c = c - 23;
        }
    // ������ܺ����ĸ
    putchar(c);
    c=getchar();
    }

    system("pause");
}
