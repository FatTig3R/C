#include <stdlib.h>

#define FILENAME "student.dat"

typedef enum{MAN, WOMAN} SEX;

typedef struct tagStudent

{

	int num;		//学生的编号

	char name[20];	//学生的姓名

	SEX	sex;		//学生的性别

	int age;		//学生的年龄

	char major[20];	//学生的专业

	struct tagStudent *next;//下一个节点的指针

}STUDENT, *PSTUDENT;




STUDENT g_head;	//头节点




//1.显示菜单

void ShowMenu();

//2.获取用户选择的菜单的编号

int GetMenuChoose();

//3.创建一个节点,它会返回一个新创建的学生信息节点的指针

PSTUDENT CreateStudent();

//4.把学生信息节点加入到链表中

int AddStudent(PSTUDENT pstu);

//5.返回指定编号学生节点的上一个节点的指针

PSTUDENT GetPrevAddr(int num);

//6.显示所有学生信息

void ShowAll();

//7.显示信息数量

int ShowStudentCount();

//8.修改学生信息，参数为要修改的学生的编号

void ModityStudent(int num);

//9.获取用户的选择

int Question(const char *pstr);

//10.获取用户输入的学生的编号

int GetInputNum();

//11.删除编号为num的学生信息

void DelStudent(int num);

//12.删除所有的学生信息

void DelAll();

//13.把学生信息保存到文件当中

void SaveToFile();

//14.从文件中读取学生信息

void LoadFromFile();




int main()

{

	int running = 1;

	while(running)

	{

		switch(GetMenuChoose())

		{

			case 0:

			running = 0;

			break;

			case 1:

//			printf("你选择了菜单1\n");

			AddStudent(CreateStudent());

			break;

			case 2:

//			printf("你选择了菜单2\n");

			DelStudent(GetInputNum());

			break;

			case 3:

			printf("你选择了菜单3\n");

			break;

			case 4:

//			printf("你选择了菜单4\n");

			ModityStudent(GetInputNum());

			break;

			case 5:

//			printf("你选择了菜单5\n");

			DelAll();

			break;

			case 6:

//			printf("你选择了菜单6\n");

			ShowAll();

			break;

			case 7:

//			printf("你选择了菜单7\n");

			ShowStudentCount();

			break;

			case 8:

//			printf("你选择了菜单8\n");

			LoadFromFile();

			break;

			case 9:

//			printf("你选择了菜单9\n");

			SaveToFile();

			break;

		}

		system("pause");

	}



	return 0;

}

//1.显示菜单

void ShowMenu()

{

	system("cls");

	printf("-----------------------------学生管理系统--------------------------------\n");

	printf("\n\t1.添加学生信息    2.删除某个学生信息    3.显示某个学生信息\n");

	printf("\t4.修改学生信息    5.删除所有学生信息    6.显示所有学生信息\n");

	printf("\t7.显示信息数量    8.读取文件学生信息    9.保存学生信息至文件\n");

	printf("\t0.退出系统\n");

	printf("\n-------------------------------------------------------------------------\n");

}

//2.获取用户选择的菜单的编号

int GetMenuChoose()

{

	int num;//保存用户选择的菜单编号

	ShowMenu();

	printf("请选择菜单(0 ~ 9):");

	while(1 != scanf("%d", &num) || num < 0 || num > 9)

	{

		ShowMenu();

		printf("选择菜单错误，请重新选择(0 ~ 9):");

		fflush(stdin);//清空输入缓冲区

	}

	return num;

}

//3.创建一个节点,它会返回一个新创建的学生信息节点的指针

PSTUDENT CreateStudent()

{

	int sex;

	PSTUDENT pstu = (PSTUDENT)malloc(sizeof(STUDENT));//在堆内存申请空间，存储学生信息

	if(!pstu)

	{

		printf("申请内存空间失败!\n");

		return NULL;

	}

	printf("请输入学生的编号(整型)：");

	while(1 != scanf("%d", &pstu->num) || GetPrevAddr(pstu->num))

	{

		printf("学生编号输入错误或已经存在，请重新输入学生的编号(整型)：");

		fflush(stdin);

	}

	printf("请输入学生的姓名(小于20字符)：");

	scanf("%20s", pstu->name);//(*pstu).name

	printf("请选择学生的性别(1.男  2.女)：");

	while(1 != scanf("%d", &sex) || sex < 1 || sex > 2)

	{

		printf("性别选择错误，请重新选择学生的性别(1.男  2.女)：");

		fflush(stdin);

	}

	if(1 == sex)

		pstu->sex = MAN;

	else

		pstu->sex = WOMAN;

	printf("请输入学生的年龄(10 ~ 40)：");

	while(1 != scanf("%d", &pstu->age) || pstu->age < 10 || pstu->age > 40)

	{

		printf("年龄输入错误！请重新输入学生的年龄(10 ~ 40)：");

		fflush(stdin);

	}

	printf("请输入学生的专业(小于20字符)：");

	scanf("%20s", pstu->major);

	pstu->next = NULL;

	return pstu;

}

//4.把学生信息节点加入到链表中

int AddStudent(PSTUDENT pstu)

{

	PSTUDENT ps = &g_head;

	if(!pstu)

	{

		return 0;

	}

	//判断一下该学生信息是不是已经存在

	if(GetPrevAddr(pstu->num))

	{

		printf("编号为%d的学生信息已经存在！\n", pstu->num);

		free(pstu);//释放该节点内存空间

		return 0;

	}

	//while循环的作用是找到当前链表的最后一个节点

	while(ps->next)

		ps = ps->next;

	//把新节点加入到最后那个节点的后面

	ps->next = pstu;

	pstu->next = NULL;

	return 1;

}

//5.返回指定编号学生节点的上一个节点的指针

PSTUDENT GetPrevAddr(int num)

{

	PSTUDENT pstu = &g_head;

	while(pstu->next)

	{

		if(pstu->next->num == num)

			return pstu;

		pstu = pstu->next;

	}

	return NULL;

}

//6.显示所有学生信息

void ShowAll()

{

	PSTUDENT pstu = &g_head;

	printf("--------------------------------------------------------------------\n");

	printf("  编号        姓名            性别     年龄               专业\n");

	printf("--------------------------------------------------------------------\n");

	while(pstu->next)

	{

		printf("  %-8d  ", pstu->next->num);

		printf("%-20s", pstu->next->name);

		printf("%-6s", pstu->next->sex == MAN ? "男" : "女");

		printf("%4d", pstu->next->age);

		printf("%20s\n", pstu->next->major);

		pstu = pstu->next;//让指针指向下一个节点

	}

	printf("--------------------------------------------------------------------\n");

}

//7.显示信息数量

int ShowStudentCount()

{

	int count = 0;

	PSTUDENT pstu = &g_head;

	while(pstu->next)

	{

		++count;

		pstu = pstu->next;

	}

	printf("\n当前共有%d位学生信息。\n", count);

	return count;

}

//8.修改学生信息，参数为要修改的学生的编号

void ModityStudent(int num)

{

	PSTUDENT pstu = GetPrevAddr(num);//获取要修改的学生节点的上一个节点

	int choose;

	if(!pstu)

	{

		printf("没有编号为%d的学生信息。\n", num);

		return;

	}

	pstu = pstu->next;//将要修改的学员节点的指针改为指向自己的

	printf("当前学生的姓名为%s,", pstu->name);

	if(Question("确定要修改吗？"))

	{

		printf("请输入学生的姓名(小于20字符)：");

		scanf("%20s", pstu->name);

	}

	printf("当前学生的性别为%s,", pstu->sex == MAN ? "男" : "女");

	if(Question("确定要修改吗？"))

	{

		printf("请输入学生的性别(1.男 2.女)：");

		while(1 != scanf("%d", &choose) || choose < 1 || choose > 2)

		{

			printf("输入错误，请重新输入学生的性别(1.男 2.女)：");

			fflush(stdin);

		}

		if(1 == choose)

			pstu->sex = MAN;

		else

			pstu->sex = WOMAN;

	}

	printf("当前学生的年龄为%d,", pstu->age);

	if(Question("确定要修改吗？"))

	{

		printf("请输入学生的年龄(10 ~ 40)：");

		while(1 != scanf("%d", &pstu->age) || pstu->age < 10 || pstu->age > 40)

		{

			printf("年龄输入错误！请重新输入学生的年龄(10 ~ 40)：");

			fflush(stdin);

		}

	}

	printf("当前学生的专业为%s,", pstu->major);

	if(Question("确定要修改吗？"))

	{

		printf("请输入学生的专业(小于20字符):");

		scanf("%20s", pstu->major);

	}

	printf("修改完毕！\n");

}

//9.获取用户的选择

int Question(const char *pstr)

{

	char answer;

	printf("%s请选择（y or n）：", pstr);

	while(1 != scanf(" %c", &answer) || (answer != 'y' && answer != 'n'))

	{

		printf("输入错误！%s请重新选择（y or n）：", pstr);

		fflush(stdin);//清空输入缓冲区,C库函数

	}

	if('y' == answer)

		return 1;

	else

		return 0;

}

//10.获取用户输入的学生的编号

int GetInputNum()

{

	int num;

	printf("请输入学生的编号(整型)：");

	while(1 != scanf("%d", &num))

	{

		printf("编号输入错误！请重新输入学生的编号(整型)：");

		fflush(stdin);

	}

	return num;

}

//11.删除编号为num的学生信息

void DelStudent(int num)

{

	PSTUDENT pstu, ptmp;

	if(pstu = GetPrevAddr(num))

	{

		if(!Question("确定要删除该学生信息吗？"))

		{

			return;

		}

		ptmp = pstu->next;

		pstu->next = ptmp->next;

		free(ptmp);

		printf("删除了编号为%d的学生信息。\n", num);

	}

	else

	{

		printf("没有找到编号为%d的学生信息。\n", num);

	}

}

//12.删除所有的学生信息

void DelAll()

{

	PSTUDENT pstu = g_head.next, ptmp;

	int count = 0;

	if(!Question("确定要删除当前所有的学生信息吗？"))

	{

		return;

	}

	while(pstu)

	{

		ptmp = pstu;

		pstu = pstu->next;

		free(ptmp);

		++count;

	}

	printf("共删除了%d位学生信息。\n", count);

	g_head.next = NULL;

}

//13.把学生信息保存到文件当中

void SaveToFile()

{

	FILE *pf = fopen(FILENAME, "wb");

	PSTUDENT pstu = &g_head;

	int i = 0, count = ShowStudentCount();

	if(!pf)

	{

		printf("打开待写入的文件失败！\n");

		return;

	}

	if(!Question("确定要将当前学生信息保存到文件中吗？"))

	{

		fclose(pf);

		return;

	}

	fwrite(&count, 1, sizeof(count), pf);//把学生信息的数量先写入到文件头

	while(pstu->next)

	{

		fwrite(pstu->next, 1, sizeof(STUDENT), pf);//把每位学生信息写入文件

		++i;

		pstu = pstu->next;

	}

	fclose(pf);

	if(i == count)

	{

		printf("成功的写入了%d条学生信息。\n", count);

	}

	else

	{

		printf("应写入%d条学生信息，实际写入%d条学生信息。\n", count, i);

	}

}

//14.从文件中读取学生信息

void LoadFromFile()

{

	int i, count = 0, repeat = 0;

	FILE *pf;

	PSTUDENT pstu;

	printf("提示：从文件中读取学生信息会询问是否清空当前学生信息（不清空表示合并所有信息）。\n");

	if((pf = fopen(FILENAME, "rb")) == NULL)

	{

		printf("文件还没有创建，请手工输入学生信息并保存吧!\n");

		return;

	}

	DelAll();//删除之前的所有学生信息，然后从文件中读取

	fread(&count, 1, sizeof count, pf);//获取学生信息的数量

	for(i = 0; i < count; ++i)

	{

		pstu = (PSTUDENT)malloc(sizeof(STUDENT));

		fread(pstu, 1, sizeof(STUDENT), pf);

		if(!AddStudent(pstu))

		{

			++repeat;//保持有多少个和当前链表中相重复的学生信息

		}

	}

	fclose(pf);

	printf("文件读取完毕！新增学生信息%d条。\n", count - repeat);

}
