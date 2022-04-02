#include <iostream>
#include<unistd.h>
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;
struct student
{
	// 成员列表
	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	float score;
}s1;

struct teacher
{
	// 编号
	int id;
	// 姓名
	
};

int main() {

	cout<<endl;

	s1.name = "Tony";
	s1.age = 22;
	s1.score = 150;

	student * p = &s1;

	cout << "姓名:" << p -> name <<endl;



	cout<<endl;
	return 0;

}