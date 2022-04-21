#include <iostream>
#include <unistd.h>
#include <string>
#include "isExist.h"
#include "addPerson.h"
using namespace std;

void findPerson(Addressbooks * abs)
{
    cout << "请输入查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if(ret != -1)
    {
            cout << "**************" << endl;
            cout << "联系人" << i+1 <<endl;
            cout << "姓名：" << abs -> personarr[i].name << endl;
            cout << "性别：" << abs -> personarr[i].sex << endl;
            cout << "年龄：" << abs -> personarr[i].age << endl;
            cout << "联系电话：" << abs -> personarr[i].phone << endl;
            cout << "家庭住址：" << abs -> personarr[i].address << endl;
            cout << "**************" << endl;
    }

}