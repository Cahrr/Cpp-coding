#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;

struct student
{
	// 学生姓名
	string name;
	// 考试分数
	int score;
};

struct teacher
{
	// 老师姓名
	string name;
	// 学生数组
	student sarr[5];
};

void allocate(teacher tarr[], int len)
{
	string tname = "教师";
	string sname = "学生";
	string seq = "ABCED";
	for (int i = 0; i < len; i++)
	{
		tarr[i].name = tname + seq[i];
		for (int j = 0; j < 5; j++)
		{
			tarr[i].sarr[j].name = sname + seq[j];
			tarr[i].sarr[j].score = rand()% 61 + 40;
		}
	}
}
void printstruct(teacher tarr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "\t教师姓名:" << tarr[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名" << tarr[i].sarr[j].name << "分数" << tarr[i].sarr[j].name << endl;
		}
	}
}

int main() {

	srand((unsigned int)time(NULL));
	teacher tarr[3];
	int len = sizeof(tarr)/sizeof(teacher);
	allocate(tarr,len);
	printstruct(tarr,len);
	return 0;

}