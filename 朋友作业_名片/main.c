#include<stdio.h>
#include<stdlib.h>
#define N 1

struct student {
    char id[50];
    char name[50];
    char college[50];
    char idcard[50];
    char class_[50];
};

void save(struct student*a) {
    int i,s=0;
    FILE*fp;

    scanf("%s %s %s %s %s",a[i].id,&a[i].name,&a[i].idcard,&a[i].college, &a[i].class_);
    printf("已保存至根目录下本人学籍信息.txt\n");
    fp=fopen("本人学籍信息.txt","w");
    fprintf(fp,"学号:%s\n姓名:%s\n身份证:%s\n学院:%s\n班级:%s\n",a[i].id,a[i].name,a[i].idcard,a[i].college,a[i].class_);

    fclose(fp);
}

int main() {
    printf("请依次输入学号、姓名、身份证、学院、班级(用空格隔开):\n");
    struct student s[N];
    save(s);
    return 0;
}
