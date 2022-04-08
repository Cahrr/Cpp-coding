#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>
using namespace std; 

// 通讯录最大人数
#define MAX 1000

// 联系人结构体
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

// 通讯录结构体
struct Addressbooks
{
    struct Person personarr[MAX];
    int size;
};

// 添加联系人函数
void addPerson(Addressbooks * abs)
{
    if(abs -> size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 姓名
        cout << "请输入姓名：" << endl;
        string name;
        cin >> name;
        abs -> personarr[abs -> size].name = name;

        // 性别
        cout << "请输入性别："<< endl;
        cout << "1--男性" << endl;
        cout << "2--女性" << endl;
        int sex;
        
        while(true)
        {
            cin >> sex;
            if(sex == 1||sex == 2)
            {
                abs -> personarr[abs -> size].sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" <<endl;
        }

        // 年龄
        cout << "请输入年龄：" << endl;
        int age;
        cin >> age;
        abs -> personarr[abs -> size].age = age;

        // 联系电话
        cout << "请输入联系电话：" << endl;
        string phone;
        cin >> phone;
        abs -> personarr[abs -> size].phone = phone;

        // 家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs -> personarr[abs -> size].address = address;

        // 更新通讯录人数
        abs -> size++;
        cout << "通讯录人数为：" << abs -> size << endl;

        cout << "联系人添加成功" << endl;
        // pause(); // 请按任意键继续
        system("clear");
    }
}

// int main()
// {
//     Addressbooks abs;
//     abs.size = 0;
//     addPerson(&abs);
//     return 0;
// }

