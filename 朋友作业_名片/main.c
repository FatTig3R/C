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
    printf("�ѱ�������Ŀ¼�±���ѧ����Ϣ.txt\n");
    fp=fopen("����ѧ����Ϣ.txt","w");
    fprintf(fp,"ѧ��:%s\n����:%s\n���֤:%s\nѧԺ:%s\n�༶:%s\n",a[i].id,a[i].name,a[i].idcard,a[i].college,a[i].class_);

    fclose(fp);
}

int main() {
    printf("����������ѧ�š����������֤��ѧԺ���༶(�ÿո����):\n");
    struct student s[N];
    save(s);
    return 0;
}
